/*
祝津一
计算机12002
2004240205
输出华氏度摄氏度转化表
*/
#include<stdio.h>
int main()
{
	double f, c, t, l, i;

	printf("请输入温度下限");
	scanf_s("%lf", &l);
	printf("请输入温度上限");
	scanf_s("%lf", &t);
	for (i = l; i <= t; i=i+2)
	{
		f = i;
		c = 5 * (f - 32) / 9;
		printf("华氏度=%.2lf,摄氏度=%.2lf\n", f, c);
	}
	return 0;
}