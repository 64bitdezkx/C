#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//关键字讲解
//int main() {
//	{
//		int a = 10;//自动创建，自动销毁的，——自动变量
//		//auto int a = 10;
//		//auto 省略掉了	
//	}
//	return 0;

//将unsigned int 重命名为u_int, 所以u_int也是一个类型名
//typedef unsigned int u_int;//类型重命名
//
//int main() {
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static是用来修饰变量和函数的
//1. 修饰局部变量 - 称为静态局部变量
//2. 修饰全局变量 - 称为静态全局变量
//3. 修饰函数 - 称为静态函数
//1.修饰局部变量
//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//extern声明外部符号，同一个项目不同的文件要使用变量需要extern声明一下
//extern int g_val;
//int main() {
//	printf("%d", g_val);
//	return 0;
//}

extern int Add(int x, int y);
int main() {
	printf("%d\n", Add(2, 3));
	return 0;
}