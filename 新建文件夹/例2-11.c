/*
ף��һ
�����12002
2004240205
����n�Ľ׳˱�
*/

#include<stdio.h>
double fact(int n);
int main()
{
	int i, n;
	double result;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = fact(i);

		printf("%d�Ľ׳�Ϊ%.0lf\n\n", i, result);
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