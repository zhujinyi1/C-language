/*
祝津一
计算机12002
2004240205
这个符号我不会打
*/
#include<stdio.h>
int main()
{
	int n, i,m;
	double k, sum;
	sum = 0;
	printf("enter m");
	scanf_s("%d", &m);
	printf("enter n=");
	scanf_s("%d", &n);
	for (i = m; i <= n; i++)
	{
		k = i * i + 1 / i;
		sum = sum + m;
	}
	printf("和为%.2lf",sum);
	return 0;
}