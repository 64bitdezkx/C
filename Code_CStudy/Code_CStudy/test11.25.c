#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ؼ��ֽ���
//int main() {
//	{
//		int a = 10;//�Զ��������Զ����ٵģ������Զ�����
//		//auto int a = 10;
//		//auto ʡ�Ե���	
//	}
//	return 0;

//��unsigned int ������Ϊu_int, ����u_intҲ��һ��������
//typedef unsigned int u_int;//����������
//
//int main() {
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static���������α����ͺ�����
//1. ���ξֲ����� - ��Ϊ��̬�ֲ�����
//2. ����ȫ�ֱ��� - ��Ϊ��̬ȫ�ֱ���
//3. ���κ��� - ��Ϊ��̬����
//1.���ξֲ�����
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

//extern�����ⲿ���ţ�ͬһ����Ŀ��ͬ���ļ�Ҫʹ�ñ�����Ҫextern����һ��
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