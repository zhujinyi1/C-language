/*
祝津一
计算机12002
2004240205
计算四个数平均值
*/
#include<stdio.h>
int main()
{

	float x, a, b, c, d;
	printf("请分别输入abcd");
	scanf_s("%f%f%f%f", &a, &b, &c, &d);
	x = (a + b + c + d) / 4;
	printf("%.0f,%.0f,%.0f,%.0f的平均值为%.1f", a, b, c, d, x);
	return 0;
}