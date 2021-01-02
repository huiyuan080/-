#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<windows.h>

//计算器
void menu()
{
	printf("**************************\n");
	printf("****欢迎来到计算器页面****\n");
	printf("**** 1.add    2.mul  *****\n");
	printf("*****3.sub    4.div1 *****\n");
	printf("*****0.exit          *****\n");
	printf("**************************\n");
}

int add(int x, int y)
{
	return x + y;
}

int mul(int x, int y)
{
	return x * y;
}

int sub(int x, int y)
{
	return x - y;
}

int div1(int x, int y)
{
	return x / y;
}

int main()
{
	int n = 1;
	menu();
	while (n)
	{
		printf("请输入选项:\n");
		scanf("%d", &n);
		int(*arr[5])() = { 0,add,mul,sub,div1 };//转移表
		//定义一个函数指针数组，存放函数地址
		if (n >= 0 && n < 5)
		{
			int x = 0, y = 0;
			printf("请输入两个整数:>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", (*arr[n])(x, y));//输出结果
		}
		else
		{
			printf("输入有误，请重新输入!\n");
			scanf("%d", &n);
		}
	}
	system("pause");
	return 0;
}



//int main() {
//	//用switch语句打印星期几
//	int day = 0;
//	int a = 1;
//	printf("请输入1--7任意数值：");
//	scanf("%d", &day);
//	switch (day)//switch表达式必须是整形 -- int
//	{
//	case  1:    //case后面也必须是整形常量表达式
//		if (1 == a)
//		{
//			printf("工作日\n");
//		}
//		printf("星期一\n");
//		break;    //break用来中断跳出程序
//	case  2:
//		printf("星期二\n");
//		break;
//	case  3:
//		printf("星期三\n");
//		break;
//	case  4:
//		printf("星期四\n");
//		break;
//	case  5:
//		printf("星期五\n");
//		break;
//	case  6:
//		printf("星期六\n");
//		break;
//	case  7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main() {
//	//打印100以内的奇数
//	int i = 0;
//	while (i<=100)
//	{
//		if (i % 2 == 1) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	//int i = 1;
//	//while (100 >= i )
//	//{
//	//	printf("%d ", i);
//	//	i += 2;
//	//}
//	return 0;
//}

//int main() {
		   //if判定语句
//	printf("请输入你的年龄：");
//	int a = 0;      //定义一个整形
//	scanf("%d", &a);//赋值
//	if (a < 18) {   //if判断语句
//		printf("未成年\n");
//	}
//	else if (18<=a && a<55){
//		printf("青壮年\n");
//	}else {
//		printf("老年\n");
//	}
//	return 0;
//}