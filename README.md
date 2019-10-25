# 项目简介
Is a SDK for development robot, like ROS 

# 设计目的
Just for learning 

# 开发模式
* TDD 
* BDD
* DDD
* ATDD

以上模式的介绍 ["TDD、BDD、ATDD、DDD 软件开发模式"](https://blog.csdn.net/ejinxian/article/details/70212208)

wiki介绍 

# 编程语言
C++17

C++17新特性：

# IDE  
CLion for MacOS
# 编程规范
Full compliance with <Google C++ style guide> ([ENGLISH](https://google.github.io/styleguide/cppguide.html), [中文](https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/contents/))


# 接口设计
## 需求
1. 接口和实现要分离
## 实现
* Pimpl Idiom(pointer to implementation)
* Object Interface

关于以上两种方法的介绍读 ["C++ “接口”与“实现”分离的两种方法"](https://blog.csdn.net/TAOKONG1017/article/details/79561856)这篇文章就够了

***本项目选择前者，即Pimpl***

# 编译系统设计
## 需求
1.使用cmake

2.可以配置跨平台编译

3.可以配置ROSE的功能选项（比如loger级别，支持的能力）

4.可以配置产品的特性
## 实现
看代码 rose/build


