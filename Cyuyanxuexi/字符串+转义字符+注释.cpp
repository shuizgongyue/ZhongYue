//#include <stdio.h>
//#include <string.h>
//字符，字符串,转义字符。
//int main()
//{
//	//"abxdfsa" 用双引号的字符叫字符串字面值简称字符串。
//	//字符串结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容。
//	char arr[] = "abvsdff";
//	char arr1[] = {'a','b','c','r','\0'};
//	/*printf("%s\n", arr);
//	printf("%s\n", arr1);*/
//	printf("%d\n", strlen(arr));    //strlen统计字符、字符串长度 使用时需引入<string.h>文件
//	printf("%d\n", strlen(arr1));
//	
//	return 0;
//}
//转义字符是一个斜杠\ 如\n表示换行 \t 表示制表符（Tab），\r 回车，\v 垂直制表符。
//int main()
//{
//	//printf("c:test\test1\tst\n");
//		 //输出结果为：c:test  est1    st 因为有\存在 使其转义输出不了理想结果。
//		//要想使其输出正确结果得	(在反斜杠前面在加一个反斜杠)	使编译器不读成转义效果。
//	//printf("c:test\\test1\\tst\n");
//	//printf("%d",""");		这样输出会使其报错。编译器编译会认为缺少一个双引号 要想输出得进行转义。
//	//printf("%S", "\"");
//	//printf("%c\n",'\132');
//	//printf("%d\n", strlen("abcsdfsf"));
//	//printf("%d\n", strlen("c:\tste1\tst89\321\tst"));//该计算出的长度为16位其中\t算一位\321算一位
//	//		\ddd（代表1-3个八进制数字。如 \123    \xdd(表示两个十六进制的数字。如:\x30 0)
//	//printf("%c\n", '\x61');
//	return 0;
//}字符串用双引号 字符用单引号
//#include <stdio.h>
//#include <string.h>
/////**/为C语言注释风格 缺陷为不能嵌套注释
////为C++注释风格
///*
//int main()
//{
//	//printf("%f", strlen("\t"));
//
//	return 0;
//}
//*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int input = 0;
//	printf("为了考入合肥学院\n");
//	printf("你要好好学习吗?(1/0) >: ");
//	scanf_s("%d",&input);
//	if (input == 1)
//		printf("好好学习\n");
//	else
//		printf("回家种田\n");
//
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int dm = 0;
//	printf("加入好的公司\n");
//	while (dm<20001)
//	{
//		printf("写一行代码:%d\n",dm);
//		dm++;
//	}
//	if(dm >= 20001)
//		printf("好的岗位\n");
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int add(int a, int b)
//{
//	int c = a * b;
//	return c;
//}
//int main()
//{
//	/*int sun = 0;
//	int A = 45;
//	int B = 47;
//	sun = add(A, B);
//	printf("%d\n",sun);*/			//通过自定义函数实现 函数调用来进行运算
//	/*int arr[10] = { 1,2,5,4,11,6,7,40,90,10 };
//	printf("%d\n", arr[7]);			通过下标访问数组               */
//	int a = 0;
//	while(a < 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%d*%d=%d ", j, i, j * i);
//			if (i == j) {
//				break;
//			}
//		}
//		printf("\n");									输出九九乘法表
//	}
//	return 0;
//}

//int main()
//{
//	printf("These values are :\n");
//	float x = 2.5, y = 2.5, z = 2.5;
//	printf("x =%0.f\n", x);
//	printf("y =%0.1f\n", y);
//	printf("z=%0.1f\n", z);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%d ", j, i, j * i);
//			if (i == j) {
//				break;
//			}
//				
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//int main()
//{
//	int x = 245, b2, b1, b0, sum;
//	b2 = x / 100;
//	b1 = (x -b2*100)/10;
//	b0 = x % 10;
//	sum = b2 + b1 + b0;
//	printf("%d %d %d\n%d",b2,b1,b0,sum );      把一个数按位提取出来并分别输出 并计算之和
//
//	return 0;
//
//}

//int main()
//{
//	double r;
//	printf("lnput r:");
//	//double r = 5.3;
//	scanf_s("%lf", &r);
//	printf("cfe =%f\n",2*3.14159*r);
//	printf("area =%f\n", 3.14159 * r * r);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>

































































