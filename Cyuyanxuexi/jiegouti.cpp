#include <stdio.h>
// 结构体是一些值的集合，这些值成为成员变量。结构的每一个成员
// 可以是不同类型的变量。

// 结构体的关键字为 ( struct ) + ( 结构名 ) 可以创建一个结构体
// 描述一个学生的信息；

typedef struct stu
{
	char name[20];	//  名字
	int age;	    //	年龄
	char sex[5];	//  性别
	char id[20];	//  学号
	long long tel;		//  电话           // 结构体嵌套调用 结构体名 + 变量名；
	xx s8;
}typ;

typedef struct fmxx
{
	char bb[10];
	char mm[10];
	typ s2;
}xx;

// 使用 typedef 可以为结构体取一个名字 更加方便调用

void prin(typ s)  // 传结构体 同样需要使用 相同的结构体 接受
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	printf("%s\n", s.id);
	printf("%lld\n", s.tel);
	printf("\n");
}

void prin2(xx* s3) // 传的是地址 需要使用指针接收
{
	printf("%s\n", s3->bb);
	printf("%s\n", s3->mm);
	printf("%s\n", s3->s2.name);      // 地址调用使 需使用箭头找到相应元素 ->;
	printf("%d\n", s3->s2.age);
	printf("%s\n", s3->s2.sex);
	printf("%s\n", s3->s2.id);
	printf("%lld\n", s3->s2.tel);
}

int main()
{
	typ s = { "李四",23,"男","2101031230",13155607036};  //  结构体传参
	xx s3 = { "wly","ws",{"旺财",5,"公","521302",13155607039}};
	//printf("%lld", s3.s2.tel); //  访问打印；
	
	// 如果利用自定函数打印结构体 传参可以传 变量名 也可以传地址
	// 打印结构体数据 两种方式；
	prin(s);
	prin2(&s3);
	// 两种打印方式那种更优； 第二种 第二种不需要开辟内存空间；在结构体
	// 非常大的时候更加方便高效;
	return 0;
}