#include <stdio.h>
//1:写一个函数可以判断一个数是不是素数
//		把0-100的素数打印出来
///*int sushup(int i)
//{
//	for (int j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	retu*/rn 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(sushup(i)== 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//==================2:写一个函数判断一年是不是闰年。==================================
//int nian(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 2024;
//	int b =nian(a);
//	if (b == 1)
//		printf("%d是闰年", a);
//	else
//		printf("%d不是闰年", a);
//	return 0;
//}
//============3:写一个函数，实现一个整形有序数组的二分查找。==================================
//int erfen(int arr[], int k, int zof)
//{
//	//确定左右下标。
//	int zuo = 0;
//	int you=zof-1;
//	while (zuo<=you)
//	{
//		int zj = (you + zuo) / 2;//中间下标
//		if (k < arr[zj])
//			you=zj-1;
//		else if (k > arr[zj])
//			zuo=zj+1;
//		else
//			return zj;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 13;//查找的值
//	int zof = sizeof(arr) / sizeof(arr[0]);//求右下标
//	int f = erfen(arr,k,zof);
//	if (f != -1)
//		printf("找到了下标为%d", f);
//	else
//		printf("NO");
//	return 0;
//}
//============  4:写一个函数 没调用一次 num就加一  ==================================
//void add(int * num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	for(int i = 0;i<=3;i++)
//		add(&num);
//	printf("%d", num);
//	return 0;
//}
//=========== 接受一个整形（无符号），按照顺序打印他的每一位=========
//void ping(int b)
//{
//	//假设是 123
//	if (b > 9)
//		ping(b / 10);
//	printf("%d ", b % 10);
//}
//int main()
//{
//	int b;
//	scanf("%d", &b);
//	ping(b);
//	return 0;
//}
//=========== 编写函数 不允许创建临时变量，求字符串的长度=======
//int len(char * arr)
//{
//	if (*arr != '\0')
//		return 1 + len(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello hefeixueyuan";
//	len(arr);
//	printf("%d", len(arr));
//	return 0;
//}
//=================  求 N 的阶乘  =========================
// N的阶乘为 N*（N-1）的阶乘
//int jc(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * jc(n - 1);
//}
//int main()
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = jc(n);
//	printf("阶乘为 %d ",ret);
//	return 0;
//}
//======================  描述第 n 个斐波那契数
//int Fib(int n) //效率低
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
	//利用递归方式计算 会造成大量重复的计算 效率太慢了
//long long Fib2(long long n)
//{
//	long long a = 1;
//	long long b = 1;	// 创建三个变量其中 a b 为前两位斐波那契数的第 1 2 个
//	long long c = 0;   // c为交换变量
//	while (n > 2)
//	{				//前五个为 1 1 2 3 5
//		c = a + b; //2  3  5
//		a = b;	   //1  2  3
//		b = c;	   //2  3  5
//		n--;       //每次减一 知道循环完成
//	}
//	return c;
//}
//int main()
//{
//	long long ret;
//	long long n;
//	scanf("%lld", &n);
//	ret = Fib2(n);
//	printf("ret = %lld", ret);
//	return 0;
//}
