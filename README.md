# 目标

学习C语言，可以帮助我们更清楚地理解计算机内存。



# 步骤一 学习C (Step1 Learn C)

## 基本数据类型 (Variable)

学习如何使用sizeof()，理解各种基本数据类型的大小。

char, int, float, double, long, long long

unsigned char...

学习字面量（Literal）的概念。。整形的二进制、八进制、十进制和十六进制字面量分别如何书写？



## 指针 (Pointer)

通过指针的方式，让一个函数可以修改某个变量的值。



## 数组 (Array)

数组的简单使用。学习如何创建数组。

了解数组和指针的关系。数组的本质：指针+offset。学习[]运算符的本质。

了解二维数组



## 字符串的使用 (String)

学习null-terminated的概念，了解`\0`是什么。字符串的长度原理？

字符串的本质？

为什么字符串解析错的时候会出现“烫烫烫”？

一些字符串操作，strcmp, strcpy



## 结构体 (Struct)

如何使用结构体

如何使用结构体数组

对结构体进行sizeof，理解结构体的字节“对齐“特性。



## 动态内存 (Memory)

学习动态内存的分配，malloc和free的使用。

1. 先尝试对int进行动态内存分配和释放
2. 然后尝试int数组
3. 接着尝试结构体数组

理解**野指针**的危害。

理解栈（stack）和堆（heap）的概念。



## 错误码 （Error Handling）

学习工程思想，如何提高代码健壮性。

学习goto的使用，理解goto的正面效果和负面效果。



## 位运算符 (Operator)

与、或、异或、位取反、移位（左移、右移）



## 运算符 (Operator)

运算符有哪些？

运算符优先级

https://learn.microsoft.com/zh-cn/cpp/c-language/precedence-and-order-of-evaluation?view=msvc-170



# 番外-Visual Studio的使用

- 一些快捷键：[Keyboard shortcuts in Visual Studio](https://learn.microsoft.com/en-us/visualstudio/ide/default-keyboard-shortcuts-in-visual-studio?view=vs-2022)

- 调试相关：https://learn.microsoft.com/en-us/visualstudio/debugger/debugger-feature-tour

  - 如何打断点调试

    如何查看变量，Auto、Local、Watch

    如何查看调用栈（Call Stack）

    如何查看内存（Memory）

- 项目的配置



# 步骤二 理解C  (Step2 Understand C)

## 类型转换 (Variable)

学习如何进行类型转换。

- int与float的转换。理解数据在内存中是如何存储的。

使用类型转换来模拟“多态“



## 全局变量 (Variable)

了解全局变量和局部变量的区别。初始化的区别，作用域的区别。



## 函数指针 (Pointer)

使用函数指针来实现回调函数。

学习如何通过参数传递函数指针。



## 指针的指针 (Pointer)

指针的指针有什么作用？当它作为函数的参数时，函数就可以修改这个指针的值。

如何从内存角度理解？

回忆二维数组的知识。



## main函数入参

argc argv



## 深入了解printf和scanf

深入了解format

了解参数是如何传递的



## 文件读写

学习fopen和fclose的使用。

学习fscanf和fprintf的使用。



# 步骤三 放弃C (Step3 Give Up C)

## 链表（List）

结合指针、结构体、动态内存的知识，实现链表（List）。

实现一个保存int数据的List即可。

要求有如下功能：

- 插入节点
- 删除节点
- 查询节点

思路：

- 还没想好



## 对象链表（List）

结合类型转换的知识，在List的基础上，支持**”多态“**。



## 动态链接（DLL）

dll，全称Dynamic Link Library，中文名为“动态链接库”。本质上是一个文件。

学习dll的概念。学习exe是如何生成的，exe是如何运行的。（即学习编译器Compiler、链接器Linker的概念）

使用Visual Studio实践dll的创建：

1. 使用两个Solution，一个为dll project，一个为client，参考微软教程 [Walkthrough: Create and use your own Dynamic Link Library (C++)](https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170)
2. 使用一个Solution，两个Project，一个为dll project，一个为client。



## 内存泄漏和内存破坏 (Memory)

内存泄露和内存破坏，结合sizeof的知识。栈上两个int，转换成一个long long？对long long进行写操作的后果？





# 应用实例 (Some Project)

## 读写交互程序

sprintf、printf的使用。

练习字符串的读取和写入。

练习字符串和整形、浮点型数据的转换。



## 学生管理系统

> [!NOTE]
>
> 虽然学生管理系统比较老土，但确实是个不错的例子，可以考验我们对上述基础知识的学习成果。

使用结构体定义Student

自制动态数组。

关系型数据库的雏形。

支持，增删改查。

练习文件读写，序列化和反序列化，数据持久化保存。



## 自制关系型数据库

>  感觉就是学生管理系统的增强版

支持新增字段。（试试自制主键）

增删改查。

数据持久化。



# 好玩的 (Some Intersting)

## 时间 (SkillImprove_II)

为什么是从1970年1月1日开始的？



## 随机数 (SkillImprove_II)

如何生成随机数？真的有随机数吗？什么是seed。



## windows编程 (SkillImprove_II)

