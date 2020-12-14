/*
祝津一
计算机12002
2004240205
计算1+2/3+3/5+4/7...前n项和
*/
#include<stdio.h>
int main()
{
	double i, sum, n;
	sum = 0;

	printf("enter n");
	scanf_s("%lf", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i/ (i*2-1);


	}
	printf("和为%.2lf", sum);
	return 0;
}