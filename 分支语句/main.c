#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<windows.h>

//������
void menu()
{
	printf("**************************\n");
	printf("****��ӭ����������ҳ��****\n");
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
		printf("������ѡ��:\n");
		scanf("%d", &n);
		int(*arr[5])() = { 0,add,mul,sub,div1 };//ת�Ʊ�
		//����һ������ָ�����飬��ź�����ַ
		if (n >= 0 && n < 5)
		{
			int x = 0, y = 0;
			printf("��������������:>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", (*arr[n])(x, y));//������
		}
		else
		{
			printf("������������������!\n");
			scanf("%d", &n);
		}
	}
	system("pause");
	return 0;
}



//int main() {
//	//��switch����ӡ���ڼ�
//	int day = 0;
//	int a = 1;
//	printf("������1--7������ֵ��");
//	scanf("%d", &day);
//	switch (day)//switch���ʽ���������� -- int
//	{
//	case  1:    //case����Ҳ���������γ������ʽ
//		if (1 == a)
//		{
//			printf("������\n");
//		}
//		printf("����һ\n");
//		break;    //break�����ж���������
//	case  2:
//		printf("���ڶ�\n");
//		break;
//	case  3:
//		printf("������\n");
//		break;
//	case  4:
//		printf("������\n");
//		break;
//	case  5:
//		printf("������\n");
//		break;
//	case  6:
//		printf("������\n");
//		break;
//	case  7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main() {
//	//��ӡ100���ڵ�����
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
		   //if�ж����
//	printf("������������䣺");
//	int a = 0;      //����һ������
//	scanf("%d", &a);//��ֵ
//	if (a < 18) {   //if�ж����
//		printf("δ����\n");
//	}
//	else if (18<=a && a<55){
//		printf("��׳��\n");
//	}else {
//		printf("����\n");
//	}
//	return 0;
//}