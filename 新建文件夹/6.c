/*
ף��һ
�����12002
2004240205
����1��n�Ľ׳˺�
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
	printf("��1��%d�Ľ׳˺�Ϊ%d\n\n", n, sum);

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
