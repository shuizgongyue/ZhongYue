//#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int i = 0, n = 0, ret = 1, sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret =1;
//		for (i = 1; i <= n; i++)		实现阶乘.
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//============================================================
							//代码可优化为：
//int main()
//{
//	int i = 0, n = 0, ret = 1, sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//模拟用户登录场景，并且只能登录第三次（只允许登录三次，如果密码正确提示登录成功，如果三次都错误就退出程序。）
//int main()
//{
//	int password = 123456;
//	int mm,i = 1;
//	int j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入您的密码：");
//		scanf("%d", &mm);
//		j++;
//		if (mm == password)
//		{
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (j == 3)
//	{
//		printf("10天解封");
//	}
//	return 0;
//}
// ==================================================================================================================
//给出一个有序的数组，选择一个值 并在数组中查找出来。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int a = 0;
//	int xb = 0;
//	printf("查找的数： ");
//	scanf("%d", &a);
//	for ( i = 0; i < 10; i++)
//	{
//		if (a == arr[i])
//		{
//			printf("查找到的元素为：%d", );
//			xb = 1;
//			break;
//		}
//	}
//	if (xb == 0)
//	{
//		printf("里面没有这个数");
//	}
//	return 0;
// ============================================================================================================
//}打印一行字实现逐个打印
#include <string.h>
//int main()
//{
//	//char arr1[] = "hello hefeixueyuan";
//	//printf("%c", arr1[4]);
//	char arr1[24] = "你好合肥学院";
//	char arr2[] = "!!!!! !!!!!!!!!!!!";
//	int zx = 0;							定义左右下标并交换输出
//	int yx = strlen(arr1-1);
//	while (zx <= yx)
//	{
//		arr2[zx] = arr1[zx];
//		arr2[yx] = arr1[yx];
//		printf("%s\n", arr2);
//		zx++;
//		yx--;
//
//	}
//	return 0;
//}
// ====================================================================================================
//输入某年某月某日，判断这一天是这一年的第几天？365天
//int main()
//{
//	int sum, nian, yue, r, pd;
//	printf("请输入今天几年几月几日：\n");
//	scanf("%d,%d,%d", &nian, &yue, &r);
//	switch (yue)
//	{
//	case 1:sum = 0; break;
//	case 2:sum = 31; break;
//	case 3:sum = 59; break;
//	case 4:sum = 90; break;
//	case 5:sum = 120; break;
//	case 6:sum = 151; break;				//判断输入的月份之前有多少天
//	case 7:sum = 181; break;				//次数判断不考虑闰年
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 304; break;
//	case 12:sum = 334; break;
//	}
//	sum = sum + r;		//计算今年第多少天
//	if (nian % 400 == 0 || (nian % 4 == 0) && nian % 100 != 0)				//判断是不是闰年
//	{
//		pd = 1;						//是闰年变量赋值为1。
//	}								//否则为 0。
//	else
//	{
//		pd = 0;
//	}
//	if (pd==1 && yue>=2)				//判断获取的年份为闰年且月份大于2月
//	{
//		sum++;								//判断成功则在总天数上进行加一
//	}
//	printf("这是今年的第%d天\n", sum);
//	return 0;
//}
// ==================================================================================================================================
//输入三个整数x,y,z，请把这三个数由小到大输出
#include <math.h>
//int main()
//{
//	int x, y, z, t;
//	printf("请输入三个数中间用,号隔开\n");
//	scanf("%d%d%d", &x,&y, &z);
//	if (x>y) {
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x > z) {
//		t = z;
//		z = x;
//		x = t;
//	}
//	if (y > z) {
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("排序后\n%d %d %d", x, y, z);
//	return 0;
//}
// =============================================================================================================================
//用*号输出字母C的图案。
//方法一
//int main()
//{
//	printf("****\n");
//	printf("*\n");
//	printf("*\n");
//	printf("****\n");
//	return 0;
//}方法二
//int main()
//{
//    for (int i = 0; i < 4; i++)
//    {
//        printf("*");
//    }
//    printf("\n");
//    for (int i = 0; i < 2; i++)
//    {
//        printf("*\n");
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        printf("*");
//    }
//    return 0;
//}
//===========================================================================================================================
//输出乘法口诀
//int main()
//===========================================================================================================================
//打印国际香气棋盘   国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列。 
//int main()
//{
//    int i, j;
//    for (i = 0; i < 8; i++)
//    {
//        for (j = 0; j < 8; j++)
//            if ((i + j) % 2 == 0)
//                printf("%c%c", 219, 219);
//            else printf("  ");
//        printf("\n");
//    }
//    return 0;
//}
//===========================================================================================================================
//打印楼梯，同时在楼梯上方打印两个笑脸。
//int main()
//{
//	printf("\1\1\n");
//	for (int i = 1; i < 11; i++)
//		{
//	       for (int j = 1; j <= i; j++)
//		       printf("%c%c",219,219);
//		    printf("\n");
//		   }
//	return 0;
//}
//int main()
//{
//	int h, t;
//	for (h = 0; h < 7; h++)
//	{
//		for (t=0 ; t < 7; t++)
//		{
//			if (t >= h && t <= 6 - h) {
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}






















