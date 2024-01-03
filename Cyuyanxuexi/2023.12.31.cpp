#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//  === 编写一个程序统计一个数在二进制序列中的1的个数 ===
//int tj(int a)
//{
//	int tot = 0;     如果判断的是负数就会有错误
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
//		if (a % 2 == 1)     可以统计负数 效率低
//		{
//			tot++;
//		}
//		a = a / 2;
//	}
//	return tot;
//}
//int tj(unsigned int a)
//{
//	int tot = 0,i;   要判断 32次效率低
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

// 此方法效率高 数里面有多少个1 就执行几次.
int tj(unsigned int a)
{
	int tot = 0;
	while (a)
	{
		a = a & (a - 1);  // unsigned 是一个关键字 用于修饰一个 整数类形 成为 无符号类型数
		tot++;
	}
	return tot;
}
//通过以下公式可得出  a&(a-1)后每与一次就可以减一个1
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
//求两个 int 类型的整数在二进制位中有多少位不同
// 如 1999  2299
// 使用 异或操作符（ ^ ）在二进制序列中 按位异或后
// 位相同则为 0 不相同则为1； 
// 最后统计 1 的个数就可以知道有几位不相同。
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
		//	printf("有%d位不同", tob);
		//	return 0;
		//}
// 获取一个整数的二进制序列中的所有偶数位和奇数位
// 并分别打印出二进制序列。

//  a = 10
// 00000000000000000000000000001010
// 分别把奇数偶数位右移到最低位
// 然后  按位与1   就可以得到起位
void print(int m)
{
	// 00000000000000000000000000001010
	int i = 0;
	printf("打印的奇数位");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("打印的偶数位");
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

// 不使用临时变量交换两个 int 变量的值
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

// === 写一个函数打印数组的内容 ，不使用数组下标；
// 数组是一个整形数组
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
		//	// 数组传参是首元素的地址
		//	int sz = sizeof(arr) / sizeof(arr[0]);
		//	DY(arr,sz);
		//	return 0;
		//}
// 编写函数 实现判断一个数是不是素数  利用该函数打印100-200的素数.
// 只能被 1 或者这个数本身 整除的数 叫素数。
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
// 判断一个数是不是闰年；

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
// 实现一个函数，打印乘法口诀表，口诀表的行数的和列
// 数自己指定 如输出12 则输出12*12口诀表;
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
// 实现一个函数用来交换两个整数的内容
int JH(int* a, int* b)
{
	int tst = 0;
	tst = *a;		// 形参不能音响实参 得进行传址；
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

// 使用递归方式打印一个整数的每一位；
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

//利用递归和非递归的方式求 n 的阶乘；
// n 的阶乘为 n*(n-1)!

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
				//	// 非递归    4*1  4*4
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

// 使用递归和非递归 模拟实现 srtlen 函数
#include <string.h>
int TJ(char* arr)	//利用计数器统计。
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
		return 1 + TJ1(arr + 1);  // 递归
	}
	return 0;
}
					//int main()
					//{
					//	char arr[] = {"asvasv"};
					//	// 传参 是传的元素的首地址；
					//	int tot=0;
					//	tot = TJ1(arr);
					//	printf("%d", tot);
					//	return 0;
					//}

//		把一个字符串完成逆序操作 ， 使用递归和非递归方法
void NX(char* arr)
{
	//利用做左右下标进行操作
	int z = 0;
	int y = TJ(arr) - 1;
	while (z<y)
	{
		//利用临时变量交换       非递归
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
	// 先把 b a 交换 d的位置放上\0 在把svsjbu 逆序交换
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

// 写一个递归函数，输入一个非负整数，返回组成它的数字之和。
// 如 1792    1+7+9+2=19；
int sum(int a)
{
	int sum3 = 0;
	while (a != 0)     //把每一位拆开 最后相加
	{
		sum3 += a % 10;
		a = a / 10;
	}
	return sum3;
}

int sum1(int a)
{
	if (a > 9)
		return sum1(a / 10) + a % 10; //利用递归 拆开后从最高位开始 + ；
	return a;
}
									//int main()
									//{
									//	printf("请输入一个非负整数\n");
									//	int a = 0;
									//	scanf("%d", &a);
									//	// 1792
									//	printf("%d", sum1(a));
									//	return 0;
									//}


									
// 递归实现 n 的 k 次方；n^k= n * n^(k-1)
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
						//	printf("阶乘为：%lf", ret(a, k));
						//	return 0;
						//}

// 计算第 N 个斐波那契数；
// 1 1 2 3 5  N 个斐波那契数等于 前两个数之和
int FB(int n)
{
	if (n <= 2)
		return 1;
	return FB(n - 1) + FB(n - 2);    // 重复计算多次效率低
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










