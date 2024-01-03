#include <stdio.h>
//int main()
//{
//	/*for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d =%d\t", j, i, j * i);
//		}
//		printf("\n");
//	}*/
//	// 创建 int arr[3][4];
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8,},{9,10,11,12} };
//	//二维数组初始化。
//	// 二维数组的访问
//	int i;
//	for (i = 0; i < 3; i++)//行
//	{
//		int j=0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] =%d\t", i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ================== 冒泡排序 ===================
// 首先得确定冒泡排序趟数。 在进行每一躺冒泡排序。 实现升序效果
// 假设 数组里面有10个元素 那么进行9次冒泡排序就可以完全排完。
// 第一趟排序玩后 还剩下9个元素进行比较 那么需要8对比较。
//void maopao(int arr[], int sze) //sze = 16
//{
//	//int arr[] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0 };
//	int i;
//	for (i = 0; i <= sze - 1; i++) //确定排序趟数   有 n 个元素 那么需要 n-1趟。
//	{
//		//每一趟冒泡排序。 
//		int j;
//		for (j = 0; j < sze - 1 - i; j++) //确定一趟需要比较多少对
//		{		  // 第一趟比较玩 剩九个元素 对比八对 第二趟比较玩 剩8个元素 对比7对
//				  // 对比的 对 数一直在变化 采用这种新式 进行停止
//			if (arr[j] > arr[j + 1])
//			{
//				int linshi = 0;
//				linshi = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = linshi;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0 };
//	int sze = sizeof(arr) / sizeof(arr[0]);// 求出元素个数
//	maopao(arr,sze);
//	int i;
//	for (i = 0; i < sze; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} //0 0/1 0/2 1
//int main()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%s", " ");
//		}
//		printf("%s\n", "*****");
//	}
//	return 0;
//}
//*******
// *******
//  *******
//    *******
//   *******
//  *******
// *******
//#include <stdlib.h>
//int main() {
//	int i, j, k;
//	for (i = 0; i < 7; i++) {
//		for (j = 0; j < abs(3 - i); j++) {
//			printf(" ");
//		}
//		for (k = 0; k < 7; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int rows = 7;
//	int spaces = 0;
//	for (int i = 1; i <= rows; ++i)
//	{
//		for (int j = 1; j <= spaces; ++j)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= 7; ++k)
//		{
//			printf("*");
//		}
//		printf("\n");
//		spaces++;
//	}
//
//	return 0;
//}
