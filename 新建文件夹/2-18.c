/*
祝津一
计算机12002
2004240205
计算从n个数中取出m个数
*/
#include<stdio.h>
double fact(int n);
int main()
{
	int m, n,a,b,x,c;
	printf("enter n");
	scanf_s("%d", &n);
	printf("enter m");
	scanf_s("%d", &m);
	if (m <= n)
	{
		a = fact (n);
		b = fact(m);
		c = fact(n - m);
		x = a / (b * c);
		printf("从%d个数中取出%d个数方法为%d个", n, m, x);
	}

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