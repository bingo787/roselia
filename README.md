# 项目简介
Is a SDK for development robot, like ROS 

[Alt text](https://image.baidu.com/search/detail?ct=503316480&z=0&ipn=d&word=roselia&step_word=&hs=0&pn=3&spn=0&di=3080&pi=0&rn=1&tn=baiduimagedetail&is=0%2C0&istype=0&ie=utf-8&oe=utf-8&in=&cl=2&lm=-1&st=undefined&cs=1143247136%2C1769842545&os=3908223579%2C1117602693&simid=3562991095%2C292295930&adpicid=0&lpn=0&ln=565&fr=&fmq=1573737707135_R&fm=&ic=undefined&s=undefined&hd=undefined&latest=undefined&copyright=undefined&se=&sme=&tab=0&width=undefined&height=undefined&face=undefined&ist=&jit=&cg=&bdtype=0&oriquery=&objurl=http%3A%2F%2Fb-ssl.duitang.com%2Fuploads%2Fitem%2F201806%2F30%2F20180630154106_ftwew.jpg&fromurl=ippr_z2C%24qAzdH3FAzdH3Fooo_z%26e3B17tpwg2_z%26e3Bv54AzdH3Fks52AzdH3F%3Ft1%3D8adc090dm0&gsm=&rpstart=0&rpnum=0&islist=&querylist=&force=undefined)

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

[C++17新特性](https://zh.cppreference.com/w/cpp/compiler_support)

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

***本项目选择后者***

# 编译系统设计
## 需求
1.使用cmake

2.可以配置跨平台编译

3.可以配置ROSE的功能选项（比如loger级别，支持的能力）

4.可以配置产品的特性
## 实现
看代码 rose/build

# 日志系统设计
日志是所有基础建设的最基础部分，需要先实现.
[Linux下日志系统的选型](https://www.cnblogs.com/lizhigang/p/7306777.html)
本系统打算使用glog

# 快速入门
## 编译方法：
```
mkdir  ${PROJECT}/out
cd ${PROJECT}/out
cmake ..
make 
```

