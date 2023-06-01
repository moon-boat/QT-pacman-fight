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