/*
ף��һ
�����12002
2004240205
����1-1/4+1/7-1/10...ǰn���
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
	printf("��Ϊ%.2lf", sum);
	return 0;
}