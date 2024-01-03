//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//  ============= strcpy 用于复制字符串
//	//char arr1[] = "你好，合肥学院";
//	//char arr2[100] = "******************";
//	//strcpy(arr2, arr1);   //该函数用于复制字符串。
//	//printf("%s",arr2);
//	//  ============= memset 用于改变字符串的内容
//	//char arr1[40] = "你好，合肥学院";
//	////memset(arr1, '*', 4);		 (改变的字符串，用什么填充，填充四个)
//	//memset(arr1 + 6, '*', 12);	（从第7个字节开始填充(下标为6) ，使用*填充，填充12个）
//	//arr1[18] = '\0';
//	//printf("%s",arr1);
//	return 0;
//}
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	//传值调用。
//	//错误方法 修改不了
//	//当实参传给形参的时候 形参其实是实参的一份临时
//	//拷贝 对形参的修改是影响不了实参的内容。
//}
//void Swap2(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//	//使用指针方式修改实参的值。
//}	
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);   形参无法影响实参 该方法无法完成交换
//	Swap2(&a, &b);   采用指针形式 修改实参的值
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//==================================作业练习==================================
// 1:写一个函数可以判断一个数是不是素数。==================================
//#include <math.h>
//int sushu(int num) {
//	if (num < 2) {
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(num); i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//// 2:写一个函数判断一年是不是闰年。==================================
//int runnian(int d)
//{
//	if (d % 400 == 0 || (d % 4 == 0) && d % 100 != 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//// 3:写一个函数，实现一个整形有序数组的二分查找。==================================
//// ============  二分查找  ====================
//int binary_search(char arr[], int k, int sz)
//{
//	//算法实现 首先找到左右下标在找到中间下标进行
//	//二分查找;
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2; //中间下标   如果放在循环外面就是只求一次中间下标
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)			//通过判断进行左右下标的改变 实现二分查找		
//			right = mid - 1;
//		else
//			return mid;
//	}
//}
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到指定数字");
//	else
//		printf("找到了 数字为%d", ret);
//	return 0;
//}
// 4:写一个函数，每调用一次这个函数就会将num 的值加一 
//
//============  函数嵌套调用  ============
//void ea()
//{
//	printf("你好合肥学院\n");
//}
//void ed()
//{
//	int i = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		ea(); //调用 ea 函数
//	}
//}
//int main()
//{
//	ed();
//	return 0;
//}

//============  链式访问  ============
//============  把一个函数的返回值作为另一个函数的参数  ============
//int main()
//{
//	printf("%d\n", strlen("abcd"));					把一个函数的返回值作为另一个函数的参数
//	printf("%d", printf("%d", printf("%d",43)));	printf函数的返回值是返回打印字符的个数。
// 该语句可拆分为  printf("%d", printf("%d", 2));   首先打印43 返回的字符个数为2
//				   printf("%d", printf("%d", 2)))   打印 2 返回字符个数为1.
//				   printf("%d", 1)			        返回为 1 打印 1
//													最后打印结果为 4321
//	return 0;
//}

















