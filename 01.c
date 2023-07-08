#include <stdio.h>//声明引用stdio头文件，printf函数在其中


int main()    //主函数，int是整型,一个工程里，有且仅有一个main函数
{
	printf("hello world\n");//库函数之一，用来在屏幕上打印内容，需声明引用且每行语句完成需要加";",生成后加\n为换行

	//数据类型  ,char型，
	printf("%d\n", 100);//打印一个整数-%d
	//关键字符"sizeof"用于计算类型或者变量所占空间的大小
	//创建空间类型：创建数据前先要创建空间创建空间需要用到以下字符
	// char(字符数据类型)/short(短整型)/int(整型)/long(长的整型)/long long(更长的整型)
	// float(单精度浮点数)/double(双精度浮点数)
	printf("%d\n", sizeof(int));//计算int所占多大空间
	char ch = 't';//创建字符类型变量用char，且用''包括字符
//类型  变量名称 赋值
	int weight = 120;//创建整数使用short/int/long/long long注意空间浪费
	float toufachangdu = 0.5;
	double shengao = 1.73;//创建浮点数也就是小数使用float/double注意精度
	printf("%d\n", weight);//%d-整型
	printf("%f\n", toufachangdu);//%f-float
	printf("%lf\n", shengao);//%lf-double

	return 0;//返回像0一样的整型
}