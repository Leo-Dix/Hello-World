//各种数据类型的字节长度
#include<stdio.h>

void main()
{
	int a;
	long b;
	float f;
	double d;
	char c;
	printf("\nint:%d\nlong:%d\nfloat:%d\ndouble:%d\nchar:%d\n", sizeof(a), sizeof(b), sizeof(f), sizeof(d), sizeof(c));
}