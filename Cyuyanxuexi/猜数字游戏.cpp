//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void caidan()
//{
//	printf("**************************\n");
//	printf("**********猜数字**********\n");
//	printf("*** 1:开始     0:退出***\n");
//}
//void zhuti()
//{
//	int caice = 0;
//	printf("开始猜数字\n");
//	// 1:生成一个随机数  2：猜测数字；
//	
//	int arr = rand()%100+1; //随机数
//	//printf("%d\n", arr);
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &caice);
//		if (caice > arr)
//		{
//			printf("猜大了\n");
//		}
//		else if(caice<arr)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//利用时间戳设置随机种子
//	do
//	{
//		caidan();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			zhuti();		//游戏主体
//			break;
//		case 0:
//			printf("您以退出游戏\n");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	
//
//	return 0;
//}