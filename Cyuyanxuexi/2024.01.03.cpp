#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//   利用递归的形式把一个字符串逆序；
int my_strlen(char* arr)
{
	int tmp = 0;
	while (*arr)
	{
		if (*arr != '\0')
		{
			tmp++;
			arr++;
		}
	}
	return tmp;
}

void nx(char* arr)
{
	//  abcdefgh  
	//  把 a h 进行交换 h 的位置放上 \0；把 a 暂存起来
	//  在把 bcdefg 进行逆序
	int tmp = 0;
	tmp = arr[0];
	int sz = my_strlen(arr);
	arr[0] = arr[sz - 1];
	arr[sz - 1] = '\0';
	if (my_strlen(arr)>=2 )    // 递归法
		nx(arr+1);
	arr[sz - 1] = tmp;
}
void nx1(char* arr)
{
	int z = 0;
	int y = my_strlen(arr) - 1;
	while (z<y)
	{
		int tmo = 0;
		tmo = arr[z];
		arr[z] = arr[y];		// 交换法
		arr[y] = tmo;
		z++;
		y--;
	}
}

					//int main()
					//{
					//	char arr[] = "abcdefgh";
					//	//int sz = my_strlen(arr);
					//	nx1(arr);
					//	printf("%s",arr);
					//	return 0;
					//}

// 调用DigitSum(1792)  输入一个非负的整数 返回它组成数字之和 
// 如 1792 返回 1+7+9+2 = 19 ；

int DigitSum(int a)
{
	int tmp = 0;
	while (a)
	{
		// 1792
		tmp += a % 10;   
		a = a / 10;
	}
	return tmp;
}

int DigitSum1(int a)
{
	//int tmp = 0;
	if (a > 9)
	{
		return a % 10 + DigitSum1(a / 10);
	}
	return a;
}

					//int main()
					//{
					//	int a = 0;
					//	scanf("%d", &a);
					//	int f = DigitSum1(a);
					//	printf("%d", f);
					//	return 0;
					//}

// 编写一个函数 实现 n 的 k 次方  n ^ k = n * n ^ (k-1);

int cf(int n, int k)
{
	int b = 1;
	// 2^3 = 2 * 2 * 2 = 8
	while (k!=0)
	{
		b *= n ;
		--k;
	}
	return b;
}

double cf1(int n, int k)
{
	if (k < 0)
		return (1.0 / (cf1(n, n - 1)));
	else if (k == 0)
		return 1;						//  递归方式
	else
		return n * cf1(n, k - 1);
	//return ;
}
						//int main()
						//{
						//	int n = 0, k = 0;
						//	scanf("%d%d", &n, &k);
						//	double a = cf1(n, k);
						//	printf("%lf", a);
						//	return 0;
						//}

void JH(int* a, int* b)
{
	*a = *a + *b; // 30
	*b = *a - *b; // 10;
	*a = *a - *b;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	JH(&a, &b);
	printf("a = %d b = %d", a, b);
	return 0;
}