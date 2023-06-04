#include "game.h"
#include "ui_game.h"
#include "settingpage.h"

int frameUpdateSeconds = 33;
qreal pacmanWalkLength = 0.03;
qreal pacmanRotation = 0.06;
int beanYieldRate = 5; // 1-100 for 0.1%-10% for each 1/30 second
int BeansLimit = 20;
int shootingLimit = 10;
int timeLimit = 30000 / frameUpdateSeconds; // 30s的demo测试数据

QRectF testBulletBoundingRectangle(0, 0, 25, 4);
QString testBulletPictureIconPath(":/images/resources/bullet.png");

testBullet::testBullet(): GameAbstractObject(testBulletBoundingRectangle, testBulletPictureIconPath, bullet, QPointF(0, 0), 0.2, 45)
{}

void testBullet::update()
{
    updatePos(frameUpdateSeconds);
}

Game::Game(QWidget *parent, QWidget *main):
    QWidget(parent),
    ui(new Ui::Game),
    globalTime(0),
    totalBeans(0)
{
    ui->setupUi(this);
    returnTo = (MainWindow*)main;
    sp = nullptr;
    MainTime = new QTimer(this);
    keyTime = new QTimer(this);
    setFocusPolicy(Qt::StrongFocus);

    connect(MainTime, &QTimer::timeout, this, &Game::sceneUpdator);
    connect(MainTime, &QTimer::timeout, this, &Game::RedLabelTextSetting);
    connect(MainTime, &QTimer::timeout, this, &Game::BlueLabelTextSetting);
    connect(keyTime, &QTimer::timeout, this, &Game::keySlotOut);
    connect(MainTime, &QTimer::timeout, this, &Game::yieldBean);
    connect(MainTime, &QTimer::timeout, this, &Game::setTimeCounter);
    connect(MainTime, &QTimer::timeout, this, &Game::sendPos);

    MainTime->start(frameUpdateSeconds);
    scene.setSceneRect(0, 0, 1024, 768);
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);

    red = new pacman_object(0);
    blue = new pacman_object(1);

    ghost_object *ghost1 = new ghost_object(QPointF(400, 400), 0);
    connect(MainTime, &QTimer::timeout, this, &Game::sendPos);
    connect(this, &Game::passPos, ghost1, &ghost_object::update, Qt::DirectConnection);

    wall_object *testWall = new wall_object(QPointF(400, 400), QRectF(0, 0, 200, 40));
    wall_object *testWall2 = new wall_object(QPointF(800, 0), QRectF(0, 0, 46, 226));
    env.append(testWall);
    env.append(testWall2);
    for (int i = 0; i < 5; i++)
    {
        env.append(new wall_object(QPointF(i * 205, 0), QRectF(0, 0, 205, 46)));
        env.append(new wall_object(QPointF(i * 205, 768 - 46), QRectF(0, 0, 205, 46)));
    }
    for (int i = 0; i < 4; i++)
    {
        env.append(new wall_object((QPointF(0, 46 + i * 226)), QRectF(0, 0, 46, 226)));
        env.append(new wall_object(QPointF(1024 - 46, 46 + i * 226), QRectF(0, 0, 46, 226)));
    }


    for (auto t: env)
        scene.addItem(t);
    scene.addItem(ghost1);
    scene.addItem(red);
    scene.addItem(blue);

    ui->graphicsView->setScene(&scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->show();
}

Game::~Game()
{
    delete ui;
    delete MainTime;
    delete keyTime;
    if (sp)
        delete sp;
    for (auto iter: scene.items())
    {
        GameAbstractObject *t = (GameAbstractObject *)iter;
        bullet_object *tp1;
        pacman_object *tp2;
        wall_object *tp3;
        bean_object *tp4;
        ghost_object *tp5;
        switch (t->type)
        {
        case bullet:
            tp1 = (bullet_object *)t;
            delete tp1;
            break;
        case pacman:
            tp2 = (pacman_object *)t;
            delete tp2;
            break;
        case wall:
            tp3 = (wall_object *)t;
            delete tp3;
            break;
        case bean:
            tp4 = (bean_object *)t;
            delete tp4;
            break;
        case ghost:
            tp5 = (ghost_object *)t;
            delete tp5;
            break;
        }
    }
}

void Game::on_GameSettingButton_clicked()
{
    if (sp == nullptr)
        sp = new SettingPage(this);
    QPoint globalPos = mapToGlobal(QPoint(0, 0));
    sp->move(globalPos.x(), globalPos.y());
    ui->GameSettingButton->setAttribute(Qt::WA_UnderMouse, false);
    sp->show();
    MainTime->stop();
    connect(sp, &SettingPage::shouldQuit, this, &Game::recQuitSign, Qt::UniqueConnection);
    connect(sp, &SettingPage::timeContinue, this, &Game::timeContinue, Qt::UniqueConnection);
}

void Game::recQuitSign(bool a)
{
    if (a)
        JustClose();
}

void Game::sendPos()
{
    emit passPos(red->Pacman::getPosition(), blue->Pacman::getPosition());
}

MainWindow* Game::MainWin() const
{
    return returnTo;
}

void Game::JustClose()
{
    if (returnTo)
    {
        returnTo->show();
    }
    delete this;
}

void Game::timeContinue()
{
    MainTime->start(frameUpdateSeconds);
}

void Game::setTimeCounter()
{
    int diff = (timeLimit - globalTime) / 30;
    int min = diff / 60, sec = diff % 60;
    char p[12] {};
    itoa(min, p, 10);
    QString res(p);
    itoa(sec, p, 10);
    res += ":";
    res += p;
    ui->TimeCounter->setText(res);
}

void Game::sceneUpdator()
{
    globalTime++;
    if (globalTime >= timeLimit)
    {
        MainTime->stop();
        if (red->getScore() > blue->getScore())
            gameOver(0);
        else if (red->getScore() < blue->getScore())
            gameOver(1);
        else
            gameOver(-1);
        return ;
    }
    for (int i = 0; i < env.length() + 2; i++)
    {
        GameAbstractObject *t = nullptr;
        if (i < env.length())
            t = env.at(i);
        else if (i == env.length())
            t = red;
        else
            t = blue;
        if (t->type == wall or t->type == pacman)
        {
            if (t->type == wall)
            {
                wall_object *spe = (wall_object *)t;
                    auto collides = scene.collidingItems(spe);
                    for (auto iter2: collides)
                    {
                        GameAbstractObject *t2 = (GameAbstractObject *)iter2;
                        if (t2->type != bullet)
                            continue;
                        bullet_object *spe2 = (bullet_object *)t2;
                        if (!spe2->isExist())
                        {
                            scene.removeItem(iter2);
                            delete spe2;
                        }
                        else
                            spe2->collideWithWall(spe);
                    }
            }
            else if (t->type == pacman)
            {
                pacman_object *spe3 = (pacman_object *)t;
                if (spe3->getLife() <= 0)
                {
                    gameOver(1 - spe3->getColor());
                    MainTime->stop();
                    break;
                }
                auto collides2 = scene.collidingItems(spe3);
                for (auto iter3: collides2)
                {
                    GameAbstractObject *t3 = (GameAbstractObject *)iter3;
                    if (t3->type == bean)
                    {
                        bean_object *spe4 = (bean_object *)t3;
                        if (spe3->eatBean(spe4))
                        {
                            totalBeans--;
                            scene.removeItem(iter3);
                            delete spe4;
                        }
                    }
                    else if (t3->type == bullet)
                    {
                        bullet_object *spe5 = (bullet_object *)t3;
                        if (spe3->getShot(spe5))
                        {
                            scene.removeItem(iter3);
                            delete spe5;
                        }
                    }
                    else if (t3->type == ghost)
                    {
                        ghost_object *spe6 = (ghost_object *)t3;
                        if (spe6->attachAPacman(spe3))
                            spe3->setLife(0);
                    }
                }
            }
        }
    }

    scene.update();
}

void Game::RedLabelTextSetting()
{
    char p[120] {};
    itoa(red->getScore(), p, 10);
    ui->RedScoreLabel->setText(p);
    ui->RedLifeBar->setValue(red->getLife());
    ui->RedLifeBar->setMaximum(10);
}

void Game::BlueLabelTextSetting()
{
    char p[120] {};
    itoa(blue->getScore(), p, 10);
    ui->BlueScoreLabel->setText(p);
    ui->BlueLifeBar->setValue(blue->getLife());
    ui->BlueLifeBar->setMaximum(10);
}

void Game::yieldBean()
{
    srand(clock());
    if ((rand() % 100 < beanYieldRate) && (totalBeans <= BeansLimit))
    {
        QTransform trans(1, 0, 0, 0, 1, 0, 0, 0, 1);
        qreal nx = 0.5, ny = 0.5;
        bool done = false;
        while (!done)
        {
            nx = rand() % 1024 + 0.5;
            ny = rand() % 768 + 0.5;
            if (scene.itemAt(nx, ny, trans) == nullptr)
                done = true;
        }
        BeanType bt = Small;
        switch (rand() % 6)
        {
        case 0:
            bt = Large;
            break;
        case 1:
        case 2:
            bt = Medium;
            break;
        case 3:
        case 4:
        case 5:
            bt = Small;
            break;
        }
        bean_object *nb = new bean_object(bt, QPointF(nx, ny));
        scene.addItem(nb);
        totalBeans++;
    }
}

void Game::keyPressEvent(QKeyEvent *event)
{
    if (!event->isAutoRepeat())
        keys.append(event->key());
    if (!keyTime->isActive())
        keyTime->start(4);
}

void Game::keyReleaseEvent(QKeyEvent *event)
{
    if (!event->isAutoRepeat())
        keys.removeAll(event->key());
    if (keys.isEmpty())
        keyTime->stop();
}

void Game::keySlotOut()
{
    QPointF pos, pre_pos;
    qreal angle;
    bullet_object *ob;
    GameAbstractObject *tp;
    bool available = true;
    for (int key: keys)
    {
        switch (key)
        {
        case Qt::Key_W:
            pos = red->Pacman::getPosition();
            pre_pos = pos;
            angle = red->getGunAngle() * acos(-1) / 180;
            pos.rx() += pacmanWalkLength * frameUpdateSeconds * cos(angle);
            pos.ry() += pacmanWalkLength * frameUpdateSeconds * sin(angle);
            red->setPosition(pos);
            for (auto iter: scene.collidingItems(red))
            {
                tp = (GameAbstractObject *)iter;
                if (tp->type == wall or tp->type == pacman)
                {
                    available = false;
                    break;
                }
            }
            if (!available)
                red->setPosition(pre_pos);
            break;
        case Qt::Key_A:
            angle = red->getGunAngle();
            red->set_angle(angle - pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_D:
            angle = red->getGunAngle();
            red->set_angle(angle + pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_S:
            if (globalTime - red->lastShooting() > shootingLimit)
            {
                red->lastShooting() = globalTime;
                pos = red->Pacman::getPosition();
                angle = red->getGunAngle() * acos(-1) / 180;
                pos.rx() += (red->getR() + 10) * cos(angle);
                pos.ry() += (red->getR() + 10) * sin(angle);
                angle = red->getGunAngle();
                ob = new bullet_object(pos, angle);
                connect(MainTime, &QTimer::timeout, ob, &bullet_object::update);
                scene.addItem(ob);
            }
            break;
        case Qt::Key_Up:
            pos = blue->Pacman::getPosition();
            pre_pos = pos;
            angle = blue->getGunAngle() * acos(-1) / 180;
            pos.rx() += pacmanWalkLength * frameUpdateSeconds * cos(angle);
            pos.ry() += pacmanWalkLength * frameUpdateSeconds * sin(angle);
            blue->setPosition(pos);
            for (auto iter: scene.collidingItems(blue))
            {
                tp = (GameAbstractObject *)iter;
                if (tp->type == wall or tp->type == pacman)
                {
                    available = false;
                    break;
                }
            }
            if (!available)
                blue->setPosition(pre_pos);
            break;
        case Qt::Key_Left:
            angle = blue->getGunAngle();
            blue->set_angle(angle - pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_Right:
            angle = blue->getGunAngle();
            blue->set_angle(angle + pacmanRotation * frameUpdateSeconds);
            break;
        case Qt::Key_Down:
            if (globalTime - blue->lastShooting() > shootingLimit)
            {
                blue->lastShooting() = globalTime;
                pos = blue->Pacman::getPosition();
                angle = blue->getGunAngle() * acos(-1) / 180;
                pos.rx() += (blue->getR() + 10) * cos(angle);
                pos.ry() += (blue->getR() + 10) * sin(angle);
                angle = blue->getGunAngle();
                ob = new bullet_object(pos, angle);
                connect(MainTime, &QTimer::timeout, ob, &bullet_object::update);
                scene.addItem(ob);
            }
            break;
        }
    }
}

void Game::gameOver(int WinnerType)
{
    GameOverWidget *gow = new GameOverWidget(WinnerType);
    connect(gow, &GameOverWidget::newOne, this, &Game::reBorn);
    gow->show();
    this->hide();
}

void Game::reBorn(bool a)
{
    if (a)
    {
        Game *t = new Game(nullptr, MainWin());
        t->show();
        delete this;
    }
    else
    {
        JustClose();
    }
}
