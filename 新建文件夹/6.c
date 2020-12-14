/*
祝津一
计算机12002
2004240205
计算1到n的阶乘和
*/
#include<stdio.h>
double fact(int n);
int main()
{
	int m, i, n, sum;
	sum = 0;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = fact(i);
		sum = sum + m;
	}
	printf("从1到%d的阶乘和为%d\n\n", n, sum);

	return 0;
}

double fact(int n)
{
	int i;
	double product;
	product = 1;
	for (i = 1; i <= n; i++)
	{
		product = product * i;
	}
	return product;
}
