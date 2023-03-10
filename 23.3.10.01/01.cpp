#define _CRT_SECURE_NO_WARNINGS 1

//最经典的一集
#include <stdio.h>

int main()
{
	printf("Please Say:");
	printf("Hellow World!\n");//库函数，在屏幕上打印，需要引用头文件
	printf("%d\n",1000);//一个整数-%d
	printf("%d\n", sizeof(char));//sizeof-关键字-操作符-计算类型或变量占空间大小1
	printf("%d\n", sizeof(int));//sizeof-关键字-操作符-计算类型或变量占空间大小4
	printf("%d\n", sizeof(short));//sizeof-关键字-操作符-计算类型或变量占空间大小2
	printf("%d\n", sizeof(long));//sizeof-关键字-操作符-计算类型或变量占空间大小4
	printf("%d\n", sizeof(long long));//sizeof-关键字-操作符-计算类型或变量占空间大小8
	printf("%d\n", sizeof(float));//sizeof-关键字-操作符-计算类型或变量占空间大小4
	printf("%d\n", sizeof(double));//sizeof-关键字-操作符-计算类型或变量占空间大小8
	//上述单位byte=8bit,sizeof(long)>=sizeof(int)故双4
	// 不同类型的目的是合理选择提高利用率
	//kb、mb、gb、tb、pb

	return 0;
}//内为函数体
//int函数返回类型，整型 main函数名，一个工程中可以有多个.C文件，但只需有一个main函数
//编译+链接+运行：ctrl+F5


//小数：浮点数；整数：整型
//55.5单精度浮点型
