#include <stdio.h>
//判断一个数是否为奇数。 打印出1-100的奇数。
//int main()
//{
//	int js = 0;
//	printf("亲输入一个数：");
//	scanf_s("%d", &js);
//	if (1 == js % 2)
//	{
//		printf("%d是奇数\n", js);
//	}
//	else
//	{
//		printf("%d是偶数\n", js);
//	}
//	int j = 1;
//	while (j <= 100)
//	{
//		printf("%d ", j);
//		j += 2;
//		/*if (j % 2 == 1)
//		{
//			printf("%d ", j);				换个算法有不同的效果。
//		}*/
//		
//	}
//	printf("\n");
//	/*for (int j = 1; j <= 100; j++)
//	{
//		if (j % 2 == 1)
//		{
//			printf("%d ", j);
//		}
//	}*/
//	return 0;
//}
//switch语句后的表达式必须为整形。
//int main()
//{
//	int a = 0;
//	printf("请输入一个1-7位的数：\n");
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 1:					//case 1:
//	case 2:					//case 1:
//	case 3:					//case 1:
//	case 4:					//case 1:
//	case 5:					//case 1:
//		printf("工作日");						//printf("今天星期%d", a);
//		break;						//break;
//	case 6:						//case 2:
//	case 7:							//printf("今天星期%d", a);
//		printf("休息日");						//break;
//		break;					//case 3:
//	default :	//错误处理选项 用于没有匹配上条件给出提示					//printf("今天星期%d", a);
//		printf("输入错误");						//break;
//		break;					//case 4:
//								//printf("今天星期%d", a);
//								//break;
//							//case 5:
//								//printf("今天星期%d", a);
//								//break;*/
//							//case 6:
//								//printf("今天星期%d", a);
//								//break;
//							//case 7:
//								//printf("今天星期天", a);
//								//break;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a<=20000)
//	{
//		printf("爱小吴的第%d天\n",a);
//		a++;
//	}
//	printf("\n");
//	if (a <= 20001)
//	{
//		printf("和小吴结婚白头到老");
//	}
//	return 0;
//}
//从键盘获取一个实数，不使用计算绝对值函数编程计算并输出该实数的绝对值。
//int main()
//{
//	//double x = 0;
//	int x = 0;
//	printf("请输入一个实数");
//	scanf_s("%d", &x);
//	if (x >= 0)
//	{
//		printf("该实数绝对值为：\n%ld", x);
//	}
//	else
//	{
//			printf("该实数绝对值为：\n%ld", -x);
//		
//	}
//	return 0;
//}
//从键盘获取一个整数判断其奇偶性。
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数");
//	scanf_s("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("获取的整数为%d它是奇数", a);
//	}
//	else
//	{
//		printf("获取的整数为%d它是偶数", a);
//	}
//	return 0;
//}
// 从键盘获取三个数值abc作为三角形的边，编程判断abc的值能不能构成一个三角形，能构成则输出其面积。
// 否则输出不能构成三角形。构成的条件是任意两边之和大于第三边。
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	printf("请输入三个整数\n");										//提示用户 并获取三条边。
//	scanf_s("%d", &a,sizeof(int));
//	scanf_s("%d", &b, sizeof(int));
//	scanf_s("%d", &c, sizeof(int));
//	if (a + b > c && a + c > b)										//判断获取的数值是否满足三角形成立条件。
//	{
//		double s = (a + b + c) / 2.0;								//double类型的变量是为了确保其精度 。获取半周长
//		double mj = sqrt(s * (s - a) * (s - b) * (s - c));			//利用海伦公式计算其面积。sqrt为数学函数 进行开根号计算面积	
//		printf("输入的三条边可以构成三角形\n其面积为%.2f\n", mj);	//使用sqrt函数得引入数学计算库文件  <math.h>。
//	}
//	else
//	{
//		printf("其输入的三条边不可以构成三角形");
//	}
//	return 0;
//}


































