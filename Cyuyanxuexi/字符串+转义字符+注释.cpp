//#include <stdio.h>
//#include <string.h>
//�ַ����ַ���,ת���ַ���
//int main()
//{
//	//"abxdfsa" ��˫���ŵ��ַ����ַ�������ֵ����ַ�����
//	//�ַ���������־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������ݡ�
//	char arr[] = "abvsdff";
//	char arr1[] = {'a','b','c','r','\0'};
//	/*printf("%s\n", arr);
//	printf("%s\n", arr1);*/
//	printf("%d\n", strlen(arr));    //strlenͳ���ַ����ַ������� ʹ��ʱ������<string.h>�ļ�
//	printf("%d\n", strlen(arr1));
//	
//	return 0;
//}
//ת���ַ���һ��б��\ ��\n��ʾ���� \t ��ʾ�Ʊ����Tab����\r �س���\v ��ֱ�Ʊ����
//int main()
//{
//	//printf("c:test\test1\tst\n");
//		 //������Ϊ��c:test  est1    st ��Ϊ��\���� ʹ��ת�����������������
//		//Ҫ��ʹ�������ȷ�����	(�ڷ�б��ǰ���ڼ�һ����б��)	ʹ������������ת��Ч����
//	//printf("c:test\\test1\\tst\n");
//	//printf("%d",""");		���������ʹ�䱨���������������Ϊȱ��һ��˫���� Ҫ������ý���ת�塣
//	//printf("%S", "\"");
//	//printf("%c\n",'\132');
//	//printf("%d\n", strlen("abcsdfsf"));
//	//printf("%d\n", strlen("c:\tste1\tst89\321\tst"));//�ü�����ĳ���Ϊ16λ����\t��һλ\321��һλ
//	//		\ddd������1-3���˽������֡��� \123    \xdd(��ʾ����ʮ�����Ƶ����֡���:\x30 0)
//	//printf("%c\n", '\x61');
//	return 0;
//}�ַ�����˫���� �ַ��õ�����
//#include <stdio.h>
//#include <string.h>
/////**/ΪC����ע�ͷ�� ȱ��Ϊ����Ƕ��ע��
////ΪC++ע�ͷ��
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
//	printf("Ϊ�˿���Ϸ�ѧԺ\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0) >: ");
//	scanf_s("%d",&input);
//	if (input == 1)
//		printf("�ú�ѧϰ\n");
//	else
//		printf("�ؼ�����\n");
//
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int dm = 0;
//	printf("����õĹ�˾\n");
//	while (dm<20001)
//	{
//		printf("дһ�д���:%d\n",dm);
//		dm++;
//	}
//	if(dm >= 20001)
//		printf("�õĸ�λ\n");
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
//	printf("%d\n",sun);*/			//ͨ���Զ��庯��ʵ�� ������������������
//	/*int arr[10] = { 1,2,5,4,11,6,7,40,90,10 };
//	printf("%d\n", arr[7]);			ͨ���±��������               */
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
//		printf("\n");									����žų˷���
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
//	printf("%d %d %d\n%d",b2,b1,b0,sum );      ��һ������λ��ȡ�������ֱ���� ������֮��
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

































































