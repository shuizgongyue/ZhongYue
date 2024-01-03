//  char    字符数据类型   cha a
// short	短整形       shao t
// int		整形										%d	打印整形
// long		长整形		lao								%c	打印字符
// long long 更长的整形   lao lao						%f	打印浮点数字--打印小数
// float	单精度浮点数  佛洛可						%p	以地址的形式打印
// double	双精度浮点数  达波	、						%x	打印16进制数字
//#include <stdio.h>                                    %s  打印字符串数值
/*int main()
{
	/*char tst = 'A';
	printf ("%c \n",tst);   //%c---打印字符格式数据
	
	int age = 50;
	printf("%d \n", age); //%d---打印整形十进制数据
	
	float B = 5.252456;
	printf("%f\n", B);
	double S = 3.14;
	printf("%lf\n", S);     //使用%f打印也可但是不精准   lf更加精准
	return 0;
}

int a = 10;//全局变量
int main() {
	int a = 20;//局部变量   和全局变量同名的时候局部变量优先考录（不建议两个同名）
	printf("%d\n",a);
	return 0;
	
}

//计算两个数的和
#include <stdio.h>
int main() {
	int num1 = 9;
	int num2 = 3;
	int a = 0;
	a = num1 + num2;
	printf("a = %d\n", a);

}
*/
//#include <stdio.h>
//int main() {
//	int num1 = 0;
//	int num2 = 0;           //两个数的和计算
//	int sum = 0;   //使用scanf_s方法可以是用用户定义数值（参数前面需带上&符号）
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d",sum);
//
//	return 0;
//}
//局部变量不是都放在main函数里面  在大括号里面的变量都是局部变量
//变量的作用域：概念：一段程序代码中所用到的变量不是总有效的、
// 可用的，而限定这个变量的可用性的代码范围就是这个变量的作用域
//1：局部变量的作用域是变量所在的局部范围     
//2: 全局变量的作用域是整个工程 不同源文件也可以使用（需要声明）





























