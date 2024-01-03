#include <stdio.h>
//函数递归 
//=========== 接受一个整形（无符号），按照顺序打印他的每一位=========
//void my_len(int p)				//123
//{
//	if (p > 10)				 //如果 接收的变量p>9那么说明至少是一个两位数
//		my_len(p / 10);		//第一次传 my_len值为123 递归第二次传的my_len值为12 递归第三次传的my_len值为1
//	printf("%d ", p % 10);	//在第三次条件不满足开始回传参数 1%10=1   12%10=2 123%10=3 逐次打印 。
//}
//int main()
//{
//	/*int p = 123456;
//	my_len(p);*/
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//=========== 编写函数 不允许创建临时变量，求字符串的长度=======
//int my_string(char* str)			  //传的地址 使用指针变量接收
//{
//	if (*str != '\0')					//判断第一个元素等不等于 \0 如不是则代表有一个元素
//		return 1 + my_string(str + 1); //利用 递归方法 调用 my_string 函数实现循环判断。
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello hefeixueyuan";
//	int len = my_string(arr);			arr是数组。数组传参 不会整个传过去 而是传一个元素的地址
//	printf("arr = %d", len);
//	return 0;
//}





















