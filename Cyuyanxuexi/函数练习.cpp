#include <stdio.h>
//1:дһ�����������ж�һ�����ǲ�������
//		��0-100��������ӡ����
//int sushu1(int i)
//{
//	int a = 2;
//	//ֻ�ܱ�1������������������������. ֻҪ��2--i��һ�е��κ�һ����������ô�Ͳ���������
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
//==================2:дһ�������ж�һ���ǲ������ꡣ==================================
//		ֻ�ܱ�4�������ǲ��ܱ�100���������ܱ�400���� ����������ꡣ
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
//		printf("%d������",a);
//	else
//		printf("%d��������", a);
//	return 0;
//}
//============3:дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�==================================
#include <string.h>
//int shuzu(char arr[], int a,int d)
//{
//	//���������±� ���м��±� ʵ�ֶ��ֲ���
//	int zuo = 0;
//	int you = d - 1;   //���±�ļ��������������������Ȼ�󴫸��Զ��庯����
//	while (zuo<=you)  //�����±���� û�������Բ��������
//	{
//		int center = (zuo + you) / 2; //�м��±�   ����ѭ������ ����ֻ����һ���м��±� ����㷨ʧЧ
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
//	//�������ҵ�ֵ.
//	int a = 11;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int ret = shuzu(arr,a,right);
//	if (ret != -1)
//		printf("�ҵ����±�Ϊ%d", ret);
//	else
//		printf("NO");
//	return 0;
//}
//============  4:дһ������ û����һ�� num�ͼ�һ  ==================================
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
//============  5:дһ�����о��еĳ˷��ھ�  ==================================
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)//�п�����
//		{
//			printf("%d*%d= %d\t",j,i,j*i);
//		}
//		printf("\n"); //��ӡһ�������С�
//	}
//	return 0;
//}
//=============================================================================================================
////int sushup(int i)
////{
////	int j = 0;				// ֻ�ܱ�һ�����ı����ܱ�������Ȼ����������
////	for (j = 2; j < i; j++) //��2���ж���-1����ȥ�ж��ܲ��ܱ����� �������ô�Ͳ�������
////	{
////		if (i % j == 0)
////			return 0;
////	}
////	return 1;				//ѭ������ û�з��ֱ�������ô�������һ����������
////}
////int main()
////{
////	int i = 0;
////	for (i = 2; i <= 100; i++)
////	{
////		if (sushup(i)==1)
////			printf("%d����������� \n", i);
////	}
////	return 0;
//int leap_year(int q)
//{
//	if (q % 4 == 0 && q % 100 != 0 || q % 400 == 0)//�ܱ�4��400�������ǲ��ܱ�100�������������
//		return 1;
//	else
//		return 0;
//}
////int main()
////{
////	int q = 2000;
////	if (leap_year(q) == 1)
////		printf("%d�����������", q);
////	else
////		printf("%d�����������", q);
////	
////	return 0;
////}
//int swo_seek(char arr[], int k, int sz)
//{
//	int zuo = 0;
//	int you = sz - 1;				//ȷ�������±� ���±�������������������ڴ��ݸ��Զ��庯��	
//	while (zuo <= you)			//�м��±������ѭ�������� ����ֻ����һ���м��±� ����㷨ʧ�ܡ�
//	{
//		int mid = (zuo + you) / 2;//�м��±�
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
////	int k = 8;//���ҵ���
////	//int ret = strlen(arr) / strlen(arr[0]);
////	int sz = sizeof(arr) / sizeof(arr[0]);//���±�
////	int ret = swo_seek(arr, k, sz); //����ȥ����������ܵ�ҲҪ������
////	if (ret != -1)
////		printf("�ҵ����±�Ϊ%d", ret);
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