/*
祝津一
计算机12002
2004240205
计算1-1/4+1/7-1/10...前n项和
*/
#include<stdio.h>
int main()
{
	double i, sum, n, a;
	sum = 0;
	a = 1;
	printf("enter n");
	scanf_s("%lf", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1 / (i * 3- 2) * a;
		a = -a;

	}
	printf("和为%.2lf", sum);
	return 0;
}