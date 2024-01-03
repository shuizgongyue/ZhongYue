#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;			//存放地址的变量 数据类型得使用*修饰。
//	printf("%p\n%p",&a,p);//&取地址符
//	return 0;
//}

//struct Book
//{
//	char nama[20];
//	int ID;
//	short JG;
//
//};
//int main()
//{
//	struct Book b1 = { "C语言", 2101031230, 55 };
//	struct Book b2 = { "Python设计", 20231203, 35 };
//	printf("书名：%s\n标号：%d\n价格:%d元\n", b1.nama,b1.ID,b1.JG);
//	b1.JG = 14;
//	printf("修改后的价格为：%d\n", b1.JG);                 指针
//	struct Book * pd = &b2;
//	printf("名字为： %s\n", (*pd).nama);
//	//printf("书名为：%s\n", pd->nama);
//	
//	
//	/*int a = 12, b = 3;
//	、、float x = 18.5, y = 4.6;
//	printf("%f\n", (float)(a * b) / 2);
//	printf("%lf\n", (int)x%(int)y);				*/int x = 245, b2, b1, b0, sum;
//												b2 = x / 100;
//												b1 = (x -b2*100)/10;
//												b0 = x % 10;
//												sum = b2 + b1 + b0;
//												printf("%d %d %d\n%d",b2,b1,b0,sum );      
//												把一个数按位提取出来并分别输出 并计算之和
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//从键盘获取一个三位数 并逆序输出
//int main()
//{
//	int b = 0, s = 0, g = 0, js = 0;
//	char sum [4];
//	printf("请输入一个三位数:");						//提示用户输入符合要求的数字。
//	scanf_s("%d", &js);									//接收用户输入的数字并赋值给 js。
//	b = js / 100;										//分离百位。
//	s = (js - b * 100) / 10;							//分离十位。
//	g = js % 10;										//分离个位。
//	sum[0] = g + '0';
//	sum[1] = s + '0';		//转换为字符类形用于方式用户输入最后的一位数为0.
//	sum[2] = b + '0';
//	sum[3] = '\0';
//	printf("获取用户的数值为：%d\n", js);
//	printf("提取的百位为：%d\n", b);
//	printf("提取的十位为：%d\n", s);
//	printf("提取的个位为：%d\n", g);
//	printf("逆序输出为：%s\n", sum);
//
//	return 0;
//}













