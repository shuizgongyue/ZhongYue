#include <stdio.h>
//1:дһ�����������ж�һ�����ǲ�������
//		��0-100��������ӡ����
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

//==================2:дһ�������ж�һ���ǲ������ꡣ==================================
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
//		printf("%d������", a);
//	else
//		printf("%d��������", a);
//	return 0;
//}
//============3:дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�==================================
//int erfen(int arr[], int k, int zof)
//{
//	//ȷ�������±ꡣ
//	int zuo = 0;
//	int you=zof-1;
//	while (zuo<=you)
//	{
//		int zj = (you + zuo) / 2;//�м��±�
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
//	int k = 13;//���ҵ�ֵ
//	int zof = sizeof(arr) / sizeof(arr[0]);//�����±�
//	int f = erfen(arr,k,zof);
//	if (f != -1)
//		printf("�ҵ����±�Ϊ%d", f);
//	else
//		printf("NO");
//	return 0;
//}
//============  4:дһ������ û����һ�� num�ͼ�һ  ==================================
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
//=========== ����һ�����Σ��޷��ţ�������˳���ӡ����ÿһλ=========
//void ping(int b)
//{
//	//������ 123
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
//=========== ��д���� ����������ʱ���������ַ����ĳ���=======
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
//=================  �� N �Ľ׳�  =========================
// N�Ľ׳�Ϊ N*��N-1���Ľ׳�
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
//	printf("�׳�Ϊ %d ",ret);
//	return 0;
//}
//======================  ������ n ��쳲�������
//int Fib(int n) //Ч�ʵ�
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
	//���õݹ鷽ʽ���� ����ɴ����ظ��ļ��� Ч��̫����
//long long Fib2(long long n)
//{
//	long long a = 1;
//	long long b = 1;	// ���������������� a b Ϊǰ��λ쳲��������ĵ� 1 2 ��
//	long long c = 0;   // cΪ��������
//	while (n > 2)
//	{				//ǰ���Ϊ 1 1 2 3 5
//		c = a + b; //2  3  5
//		a = b;	   //1  2  3
//		b = c;	   //2  3  5
//		n--;       //ÿ�μ�һ ֪��ѭ�����
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
