/*
ף��һ
�����12002
2004240205
�����n������ȡ��m����
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
		printf("��%d������ȡ��%d��������Ϊ%d��", n, m, x);
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