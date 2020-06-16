# xd0615
## 一、测试SSH

测试成功

## 二、6月15日课堂笔记

1. 开源硬件在实际工程中主要作为项目技术验证工具，可以较为快捷高效的验证技术的可实现性。

2. 下载并安装Git，初始化Git。

3. 申请Github账户，创建一个项目仓库
	1. 使用git clone命令将项目克隆到本地
	
	2. 在本地编辑
	
	3. 使用git add将修改后的文件保存在本地仓库
	
	4. 使用git commit -m命令添加注释
	
	5. 使用git push命令将本地项目更新提交到Github
	    这一步需要设置SSH Keys，设置步骤参考https://www.jianshu.com/p/c9aa544a11d3  
	
	  测试SSH：![](https://ty-photo.oss-cn-shanghai.aliyuncs.com/used/test_SSH.png)
	
4. 本次课程是在Arduino上学习。登录Arduino官网可以下载编辑器到本地或者使用线上编辑器。Arduino代码分两块，一块是

    ```
    void setup() {
      // put your setup code here, to run once:
    
    }
    ```

    这里面的代码只会执行一次；另一块是

    ```
    void loop() {
      // put your main code here, to run repeatedly:
    
    }
    ```

    这里面的代码会循环执行。

    Arduino的参考手册可以从：

    ![](https://ty-photo.oss-cn-shanghai.aliyuncs.com/used/Arduino_help.png)

    ​	查询。

## 三、课程建议

1. 建议老师换一个直播平台，超星直播不清晰，而且容易掉线，影响直播效果；
2. 建议老师如果有条件可以用手头的板子跑上代码拍个运行视频，可以更加直观的展示效果，能提高学习兴趣    

## 四、lessons2

仿真流水灯：

![](https://ty-photo.oss-cn-shanghai.aliyuncs.com/used/lessons2.png)

