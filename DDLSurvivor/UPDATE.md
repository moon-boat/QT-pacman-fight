# 更新日志
## 2023年5月18日16:44:25

上传内容：  
    PacmanFight文件夹为项目文件，其他内容为编译过程中产生的。源代码参见PacmanFight文件夹，exe文件位于.\FrontUI_FZQ\build-PacmanFight-Desktop...\debug文件夹内，直接运行PacmanFight.exe以查看效果。

完成内容：  
    
    主界面（仅有start, setting, quit按钮）  
    游戏界面（仅有setting按钮）  
    设置界面（仅有quit, back按钮）  
    三个界面间的转换所需信号和槽  
    主界面背景测试  
    设置界面背景颜色测试（透明度设置未成功）  
    
    目前的界面结构：  
        MainWindow
        |   setting(1)
        |   game
        |   |   setting(2)

## 2023年5月25日14:35:20

更新内容：  
    
    设置界面透明度设置（全窗口及其子窗口、控件）  
    字体优化  
    按钮扁平化  
    更新资源文件（已加入qrc）  
        pacman.png  
        bullet.png  
        score.png  
        blankBack.png  

    界面结构未修改

## 2023年5月29日21:40:14

更新内容：  

    按钮hover样式表更新（目前为rainbow渐变），并已解决界面转换间的按钮样式未更新问题  
    更新界面转换逻辑，消除了原有的memory leak问题  
    将红蓝双方的Score图标加入game界面，预设了label用以显示值  
    更新资源文件（已加入qrc）  
        BlueScore.png  
        RedScore.png  

## 2023年5月31日19:18:17

更新内容：  

    Score显示优化为 Text with Stylesheet，图片资源已从qrc删除  
    删除按钮样式更新功能中多余代码  

## 2023年6月1日17:15:24

更新内容：  

    game.h(.cpp)  
    增加QGraphicsView图形显示套件，用于图形显示（预期游戏界面背景也由QG.V.显示）  
    增加testBullet测试类，用于测试图形界面（可按下键盘W键观看效果）  
    增加QTimer计时器事件  
    增加若干测试用函数，键盘输入功能已加入，目前仅用于测试  

    界面结构：  
        MainWindow
        |   setting(1)
        |   game
        |   |   setting(2)
        |   |   QGraphicsView

## 2023年6月1日22:53:15

更新内容：  

    新增GameAbstractObject类，包装了QGraphicsItem，方便图形处理（可见game.h中testBullet的改动）  
    删除了QG.V.的滚动条  
    game.h中加入QList管理QG.Scene中的图形部件（后续应从后端继承类）  

## 2023年6月2日12:51:31

更新内容：

    GameAbstractObject.h(.cpp)  
    优化GameAbstractObject类继承结构，现在paint(),updatePos(int frameUpdateSeconds)以及位置、速度、方向等运动性质已经成为其属性，继承时只需实现槽函数update()传刷新毫秒数给
    updatePos(int)，通过构造函数初始化属性，在game.cpp中将timer与update()connect即可（paint()中已经实现旋转效果，testBullet类已经完成优化）  
    加入了出界判定（最终版本中不需要）  
    已经实现子弹效果，打开exe后按W查看  **（由于后端进度问题，目前无法实现完整Pacman类，仍然按固定方向生成子弹）**  
    
    game.ui  
    优化scoreLabel显示效果，与ScoreTextLabel显示效果统一，目前测试使用BlueScoreLabel显示全部Item数目  
    
    game.h
    删除了上一次更新的QList，直接使用scene.items()即可  

## 2023年6月2日20:50:37

更新内容：  

    GameAbstractObject.h  
    开放修改pos, Direction的接口  
    加入enum ObjectType标记派生类类型  

## 2023年6月3日02:02:57

更新内容：  

    修复了BackEnd中的编程错误若干（不小于5处），优化了编程格式  
    新增功能————pacman_object中的攻击cd  
    完成全部red pacman和blue pacman移动、攻击按键事件捕获和处理，并使用QTimer进行了处理优化  
    |   red pacman 按W前进，按A逆时针旋转，按D顺时针旋转，按S发射子弹  
    |   blue pacman 按Up（上箭头，下面同理）前进，按Left逆时针旋转，按Right顺时针旋转，按Down发射子弹  
    为适配GameAbstractObject基类的paint函数逻辑，更新了许多QRectF的格式，对应更新了resources中图片的形状，统一以右侧为前进方向（初始0度方向），目前除bullet外统一使用(-w/2, -h/2, w, h)的格式绘制  
    文档结构已经更新完毕，新的branch: Debug已经发布到github  
    大幅降低了Pacman.png的分辨率，否则程序运行将会产生严重卡顿（推测为图形压缩的消耗）  

下一步更新内容：  

    墙的侧面交互问题  
    豆子的随机生成  
    场景内物体的碰撞和交互  
    地图编码设计（拓展内容：地图编辑器）  

## 2023年6月3日13:58:16

更新内容：  
    
    修复了更多的BackEnd中的编程错误，加入了许多本应实现却未实现的函数  
    通过更新boundingRect，不再依赖QGraphicsItem自带的pos  
    完成所有部件间的碰撞检测和交互行为  
    将墙和豆子的贴图加入qrc路径  
    墙的侧面交互问题已解决（讨论结果不可行，更改为反向引射线求交点坐标的方法），经讨论优化了墙的编程结构（墙的绘图结构更改为(0, 0, w, h)）  

下一步更新内容：  
    
    加入bgm，在setting界面加入音量控制等功能  
    豆子的随机生成  
    地图编码设计（拓展内容：地图编辑器）  

## 2023年6月3日16:38:37

更新：  

    新增GameOverWidget，关联的信号和槽已完成  
    完成了ghost基础逻辑适配，目前暂用bean.png作为其贴图  

## 2023年6月3日18:38:54

更新：  

    新增game.ui上的总时间倒计时和双方血量条，关联的信号和槽已完成  
    加入GameOverWidget中平局时的显示  
    将ghost.png加入qrc，实际演示中更新贴图  