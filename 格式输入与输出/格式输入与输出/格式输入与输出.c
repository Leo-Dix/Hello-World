//��������Сд��ĸ�������Ӧ��ascii��ֵ�ʹ�д��ĸ
#include<stdio.h>

int main()
{
	char a,b,c;
	printf("input a,b,c\n");
	scanf_s("%c %c %c", &a,1,&b,1,&c,1);
	printf("%d,%d,%d\n%c,%c,%c\n", a,b,c,a-32,b-32,c-32);
}