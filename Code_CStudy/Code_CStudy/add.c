#define _CRT_SECURE_NO_WARNINGS 1

//全局变量，全局变量在整个项目中都可以使用
//全局变量被static修饰之后，使得这个全局变量只能在
//本源文件内使用，不能在其他源文件内使用。
static int g_val = 2022;

//声明函数可以在整个项目里使用，
//static修饰函数,
//使得这个函数只能在本源文件内使用，
//不能在其他源文件内使用。
static int Add(int x, int y) {
	return x + y;
}