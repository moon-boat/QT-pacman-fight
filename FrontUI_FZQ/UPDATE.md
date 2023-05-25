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