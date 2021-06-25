// 输入三角形的三边长，求三角形的面积
//面积公式:area=√s(s-a)(s-b)(s-c)
//其中s=(a+b+c)/2

#include<math.h>
#include<stdio.h>

void main()
{
	float a, b, c, s, area;
	printf("输入三角形三条边长\n");
	scanf_s("%f %f %f", &a,&b,&c);
	s = 1.0/2*(a + b + c);
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f\n,", a, b, c, s);
	printf("area=%7.2f\n", area);

}