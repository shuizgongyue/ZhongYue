#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//  === ��дһ������ͳ��һ�����ڶ����������е�1�ĸ��� ===
//int tj(int a)
//{
//	int tot = 0;     ����жϵ��Ǹ����ͻ��д���
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			tot++;
//		}
//		a = a / 2;
//	}
//	return tot;
//}
//int tj(unsigned int a)
//{
//	int tot = 0;
//	while (a)
//	{
//		if (a % 2 == 1)     ����ͳ�Ƹ��� Ч�ʵ�
//		{
//			tot++;
//		}
//		a = a / 2;
//	}
//	return tot;
//}
//int tj(unsigned int a)
//{
//	int tot = 0,i;   Ҫ�ж� 32��Ч�ʵ�
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			tot++;
//		}
//	}
//	return tot;
//}
// 10000000000000000000000000000011    -3
// 11111111111111111111111111111100
// 11111111111111111111111111111111

// �˷���Ч�ʸ� �������ж��ٸ�1 ��ִ�м���.
int tj(unsigned int a)
{
	int tot = 0;
	while (a)
	{
		a = a & (a - 1);  // unsigned ��һ���ؼ��� ��������һ�� �������� ��Ϊ �޷���������
		tot++;
	}
	return tot;
}
//ͨ�����¹�ʽ�ɵó�  a&(a-1)��ÿ��һ�ξͿ��Լ�һ��1
// a=a&(a-1)
// a = 13;
// 1101    a
// 1100    a-1
// 1100    a
// 1011    a-1
// 1000    a
	//int main()
	//{
	//	int a = 0;
	//	scanf("%d", &a);
	//	int Tj=tj(a);
	//	printf("%d ", Tj);
	//	return 0;
	//}
//������ int ���͵������ڶ�����λ���ж���λ��ͬ
// �� 1999  2299
// ʹ�� ���������� ^ ���ڶ����������� ��λ����
// λ��ͬ��Ϊ 0 ����ͬ��Ϊ1�� 
// ���ͳ�� 1 �ĸ����Ϳ���֪���м�λ����ͬ��
int count_bit(int a, int b)
{
	int bob = a ^ b;
	return tj(bob);
}
		//int main()
		//{
		//	int a, b;
		//	scanf("%d%d", &a, &b);
		//	int tob=count_bit(a, b);
		//	printf("��%dλ��ͬ", tob);
		//	return 0;
		//}
// ��ȡһ�������Ķ����������е�����ż��λ������λ
// ���ֱ��ӡ�����������С�

//  a = 10
// 00000000000000000000000000001010
// �ֱ������ż��λ���Ƶ����λ
// Ȼ��  ��λ��1   �Ϳ��Եõ���λ
void print(int m)
{
	// 00000000000000000000000000001010
	int i = 0;
	printf("��ӡ������λ");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("��ӡ��ż��λ");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
}
		//int main()
		//{
		//	int m = 0;
		//	scanf("%d", &m);
		//	print(m);
		//	return 0;
		//}

// ��ʹ����ʱ������������ int ������ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("\n");
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	a = a ^ b;
//	//	// a = 00000000000000000000000000000011
//	//	// b = 00000000000000000000000000000101
//	//	// a = 00000000000000000000000000000110    6
//	//	b = a ^ b;
//	//	// a = 00000000000000000000000000000110    6
//	//	// b = 00000000000000000000000000000101
//	//	// b = 00000000000000000000000000000011    3
//	//	a = a ^ b;
//	//	// a = 00000000000000000000000000000110    6
//	//	// b = 00000000000000000000000000000011    3
//	//	// a = 00000000000000000000000000000101	   5
//	return 0;
//}

// === дһ��������ӡ��������� ����ʹ�������±ꣻ
// ������һ����������
void DY(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
		//int main()
		//{
		//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
		//	// ���鴫������Ԫ�صĵ�ַ
		//	int sz = sizeof(arr) / sizeof(arr[0]);
		//	DY(arr,sz);
		//	return 0;
		//}
// ��д���� ʵ���ж�һ�����ǲ�������  ���øú�����ӡ100-200������.
// ֻ�ܱ� 1 ������������� �������� ��������
int sushu(int a)
{
	int i = 0;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
				//int main()
				//{
				//	//int a = 6;
				//	int i = 100;
				//	for (i = 100; i <= 200; i++)
				//	{
				//		int ss = sushu(i);
				//		if (ss != 0)
				//		{
				//			printf("%d ",i);
				//		}
		
				//	}
	
				//	return 0;
				//}
// �ж�һ�����ǲ������ꣻ

			//int main()
			//{
			//	int i = 2024;
			//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			//	{
			//		printf("Y");
			//	}
			//	else
			//	{
			//		printf("N");
			//	}
			//	return 0;
			//}
// ʵ��һ����������ӡ�˷��ھ����ھ���������ĺ���
// ���Լ�ָ�� �����12 �����12*12�ھ���;
void cf(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}
					//int main()
					//{
					//	int a = 0;
					//	scanf("%d", &a);
					//	printf("\n");
					//	cf(a);
	
					//	return 0;
					//}
// ʵ��һ����������������������������
int JH(int* a, int* b)
{
	int tst = 0;
	tst = *a;		// �ββ�������ʵ�� �ý��д�ַ��
	*a = *b;
	*b = tst;
	return *a, *b;
}
				//int main()
				//{
				//	int a, b;
				//	scanf("%d%d", &a, & b);
				//	printf("a= %d b= %d", a, b);
				//	printf("\n");
				//	JH(&a, &b);
				//	printf("a= %d b= %d", a, b);
				//	return 0;
				//}

// ʹ�õݹ鷽ʽ��ӡһ��������ÿһλ��
void bit(int a)
{
	//251;
	if (a > 9)
		bit(a / 10);
	printf("%d ", a % 10);
}
					/*int main()
					{
						int a = 0;   
						scanf("%d", &a);
						bit(a);
						return 0;
					}*/

//���õݹ�ͷǵݹ�ķ�ʽ�� n �Ľ׳ˣ�
// n �Ľ׳�Ϊ n*(n-1)!

int JC(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * JC(a - 1);
	}
}
				//int main()
				//{
				//	// �ǵݹ�    4*1  4*4
				//	int n = 0;
				//	scanf("%d", &n);
				//	int i = 0;
				//	int b = 1;
				//	/*for (i = 1; i <= n; i++)
				//	{
				//		 b = b * i;
				//	}
				//	printf("%d", b);*/
				//	b = JC(n);
				//	printf("%d", b);
				//	return 0;  
				//}

// ʹ�õݹ�ͷǵݹ� ģ��ʵ�� srtlen ����
#include <string.h>
int TJ(char* arr)	//���ü�����ͳ�ơ�
{
	int a = 0;
	while (*arr!='\0')
	{
		if (*arr != '\0')
		{
			a++;
			arr++;
		}
	}
	return a;
}
int TJ1(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + TJ1(arr + 1);  // �ݹ�
	}
	return 0;
}
					//int main()
					//{
					//	char arr[] = {"asvasv"};
					//	// ���� �Ǵ���Ԫ�ص��׵�ַ��
					//	int tot=0;
					//	tot = TJ1(arr);
					//	printf("%d", tot);
					//	return 0;
					//}

//		��һ���ַ������������� �� ʹ�õݹ�ͷǵݹ鷽��
void NX(char* arr)
{
	//�����������±���в���
	int z = 0;
	int y = TJ(arr) - 1;
	while (z<y)
	{
		//������ʱ��������       �ǵݹ�
		int tmp = 0;
		tmp = arr[z];
		arr[z] = arr[y];
		arr[y] = tmp;
		z++;
		y--;
	}
}

void NX1(char* arr)
{
	// asvsjbub	
	// �Ȱ� b a ���� d��λ�÷���\0 �ڰ�svsjbu ���򽻻�
	char tmp = arr[0];
	int len = TJ(arr) - 1;
	arr[0] = arr[len];
	arr[len] = '\0';
	if(TJ(arr)>=2)
		NX1(arr + 1);
	arr[len] = tmp;
}
							//int main()
							//{
							//	char arr[] = "asvsjbub";
							//	NX1(arr);
							//	printf("%s", arr);
							//	return 0;
							//}

// дһ���ݹ麯��������һ���Ǹ����������������������֮�͡�
// �� 1792    1+7+9+2=19��
int sum(int a)
{
	int sum3 = 0;
	while (a != 0)     //��ÿһλ�� ������
	{
		sum3 += a % 10;
		a = a / 10;
	}
	return sum3;
}

int sum1(int a)
{
	if (a > 9)
		return sum1(a / 10) + a % 10; //���õݹ� �𿪺�����λ��ʼ + ��
	return a;
}
									//int main()
									//{
									//	printf("������һ���Ǹ�����\n");
									//	int a = 0;
									//	scanf("%d", &a);
									//	// 1792
									//	printf("%d", sum1(a));
									//	return 0;
									//}


									
// �ݹ�ʵ�� n �� k �η���n^k= n * n^(k-1)
double ret(int a, int k)
{
	if (k < 0)
		return (1.0 / (ret(a, a - 1)));
	else if (k == 0)
		return 1;
	else
		return a * ret(a, k - 1);
}
						//int main()
						//{
						//	int a = 0, k = 0;
						//	scanf("%d%d", &a, &k);
						//	printf("�׳�Ϊ��%lf", ret(a, k));
						//	return 0;
						//}

// ����� N ��쳲���������
// 1 1 2 3 5  N ��쳲����������� ǰ������֮��
int FB(int n)
{
	if (n <= 2)
		return 1;
	return FB(n - 1) + FB(n - 2);    // �ظ�������Ч�ʵ�
}

int FB1(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n>2)
	{
		c = a + b;  // 2  3  5
		a = b;		// 1  2  3
		b = c;		// 2  3  5
		n--;
	}
	return c;
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tet = FB(n);
//	printf("%d", FB1(n));
//	return 0;
//}










