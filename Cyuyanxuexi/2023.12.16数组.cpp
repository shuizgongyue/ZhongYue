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
//	// ���� int arr[3][4];
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8,},{9,10,11,12} };
//	//��ά�����ʼ����
//	// ��ά����ķ���
//	int i;
//	for (i = 0; i < 3; i++)//��
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


// ================== ð������ ===================
// ���ȵ�ȷ��ð������������ �ڽ���ÿһ��ð������ ʵ������Ч��
// ���� ����������10��Ԫ�� ��ô����9��ð������Ϳ�����ȫ���ꡣ
// ��һ��������� ��ʣ��9��Ԫ�ؽ��бȽ� ��ô��Ҫ8�ԱȽϡ�
//void maopao(int arr[], int sze) //sze = 16
//{
//	//int arr[] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0 };
//	int i;
//	for (i = 0; i <= sze - 1; i++) //ȷ����������   �� n ��Ԫ�� ��ô��Ҫ n-1�ˡ�
//	{
//		//ÿһ��ð������ 
//		int j;
//		for (j = 0; j < sze - 1 - i; j++) //ȷ��һ����Ҫ�Ƚ϶��ٶ�
//		{		  // ��һ�˱Ƚ��� ʣ�Ÿ�Ԫ�� �ԱȰ˶� �ڶ��˱Ƚ��� ʣ8��Ԫ�� �Ա�7��
//				  // �Աȵ� �� ��һֱ�ڱ仯 ����������ʽ ����ֹͣ
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
//	int sze = sizeof(arr) / sizeof(arr[0]);// ���Ԫ�ظ���
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
