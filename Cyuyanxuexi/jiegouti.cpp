#include <stdio.h>
// �ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿһ����Ա
// �����ǲ�ͬ���͵ı�����

// �ṹ��Ĺؼ���Ϊ ( struct ) + ( �ṹ�� ) ���Դ���һ���ṹ��
// ����һ��ѧ������Ϣ��

typedef struct stu
{
	char name[20];	//  ����
	int age;	    //	����
	char sex[5];	//  �Ա�
	char id[20];	//  ѧ��
	long long tel;		//  �绰           // �ṹ��Ƕ�׵��� �ṹ���� + ��������
	xx s8;
}typ;

typedef struct fmxx
{
	char bb[10];
	char mm[10];
	typ s2;
}xx;

// ʹ�� typedef ����Ϊ�ṹ��ȡһ������ ���ӷ������

void prin(typ s)  // ���ṹ�� ͬ����Ҫʹ�� ��ͬ�Ľṹ�� ����
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.sex);
	printf("%s\n", s.id);
	printf("%lld\n", s.tel);
	printf("\n");
}

void prin2(xx* s3) // �����ǵ�ַ ��Ҫʹ��ָ�����
{
	printf("%s\n", s3->bb);
	printf("%s\n", s3->mm);
	printf("%s\n", s3->s2.name);      // ��ַ����ʹ ��ʹ�ü�ͷ�ҵ���ӦԪ�� ->;
	printf("%d\n", s3->s2.age);
	printf("%s\n", s3->s2.sex);
	printf("%s\n", s3->s2.id);
	printf("%lld\n", s3->s2.tel);
}

int main()
{
	typ s = { "����",23,"��","2101031230",13155607036};  //  �ṹ�崫��
	xx s3 = { "wly","ws",{"����",5,"��","521302",13155607039}};
	//printf("%lld", s3.s2.tel); //  ���ʴ�ӡ��
	
	// ��������Զ�������ӡ�ṹ�� ���ο��Դ� ������ Ҳ���Դ���ַ
	// ��ӡ�ṹ������ ���ַ�ʽ��
	prin(s);
	prin2(&s3);
	// ���ִ�ӡ��ʽ���ָ��ţ� �ڶ��� �ڶ��ֲ���Ҫ�����ڴ�ռ䣻�ڽṹ��
	// �ǳ����ʱ����ӷ����Ч;
	return 0;
}