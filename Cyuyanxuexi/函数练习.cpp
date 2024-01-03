#include <stdio.h>
//1:写一个函数可以判断一个数是不是素数
//		把0-100的素数打印出来
//int sushu1(int i)
//{
//	int a = 2;
//	//只能被1或者他本身整除的数叫素数. 只要被2--i减一中的任何一个数整除那么就不是素数。
//	for (a = 2; a<i; a++)
//	{
//		if (i % a == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 2;
//	for (i = 2; i <= 100; i++)
//	{
//		if (sushu1(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//==================2:写一个函数判断一年是不是闰年。==================================
//		只能被4整除但是不能被100整除或者能被400整除 的年份是闰年。
//int rn(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 ||  a % 400 == 0)
//		return 1;
//	
//	else
//		return 0;
//}

//int main()
//{
//	int a = 2005;
//	if (rn(a) == 1)
//		printf("%d是闰年",a);
//	else
//		printf("%d不是闰年", a);
//	return 0;
//}
//============3:写一个函数，实现一个整形有序数组的二分查找。==================================
#include <string.h>
//int shuzu(char arr[], int a,int d)
//{
//	//定义左右下标 和中间下标 实现二分查找
//	int zuo = 0;
//	int you = d - 1;   //右下标的计算需在主函数里面计算然后传给自定义函数。
//	while (zuo<=you)  //左右下标相等 没有数可以查找则结束
//	{
//		int center = (zuo + you) / 2; //中间下标   需在循环里面 否者只会求一次中间下标 造成算法失效
//		if (arr[center] < a)
//			zuo++;
//		else if (arr[center] > a)
//			you--;
//		else
//			return center;
//		
//	}
//	return -1;
//}
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	//给定查找的值.
//	int a = 11;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int ret = shuzu(arr,a,right);
//	if (ret != -1)
//		printf("找到了下标为%d", ret);
//	else
//		printf("NO");
//	return 0;
//}
//============  4:写一个函数 没调用一次 num就加一  ==================================
//void ADD(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	for (int i = 1; i < 4; i++)
//		ADD(&num);
//	printf("%d", num);
//	return 0;
//}
//============  5:写一个九行九列的乘法口诀  ==================================
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)//列控制行
//		{
//			printf("%d*%d= %d\t",j,i,j*i);
//		}
//		printf("\n"); //打印一个数后换行。
//	}
//	return 0;
//}
//=============================================================================================================
////int sushup(int i)
////{
////	int j = 0;				// 只能被一和数的本身不能被其他自然数整除的数
////	for (j = 2; j < i; j++) //拿2到判断数-1的数去判断能不能被整除 如果能那么就不是素数
////	{
////		if (i % j == 0)
////			return 0;
////	}
////	return 1;				//循环下来 没有发现被整除那么这个数就一定是素数；
////}
////int main()
////{
////	int i = 0;
////	for (i = 2; i <= 100; i++)
////	{
////		if (sushup(i)==1)
////			printf("%d这个数是素数 \n", i);
////	}
////	return 0;
//int leap_year(int q)
//{
//	if (q % 4 == 0 && q % 100 != 0 || q % 400 == 0)//能被4和400整除但是不能被100整除的年叫闰年
//		return 1;
//	else
//		return 0;
//}
////int main()
////{
////	int q = 2000;
////	if (leap_year(q) == 1)
////		printf("%d这个数是闰年", q);
////	else
////		printf("%d这个不是闰年", q);
////	
////	return 0;
////}
//int swo_seek(char arr[], int k, int sz)
//{
//	int zuo = 0;
//	int you = sz - 1;				//确定左右下标 右下标需在主函数中求出在在传递给自定义函数	
//	while (zuo <= you)			//中间下标需放在循环体里面 否则只会求一次中间下标 造成算法失败。
//	{
//		int mid = (zuo + you) / 2;//中间下标
//		if (arr[mid] < k)
//			zuo = mid + 1;
//		else if (arr[mid] > k)
//			you = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
////int main()
////{
////	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////	int k = 8;//查找的数
////	//int ret = strlen(arr) / strlen(arr[0]);
////	int sz = sizeof(arr) / sizeof(arr[0]);//右下标
////	int ret = swo_seek(arr, k, sz); //传过去的是数组接受的也要是数组
////	if (ret != -1)
////		printf("找到了下标为%d", ret);
////	else
////		printf("  NO  ");
////	return 0;
////}
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	for (int i = 1; i <= 3; i++)
//		add(&num);
//	printf("%d", num);
//	return 0;
//}