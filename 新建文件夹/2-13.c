/*
ף��һ
�����12002
2004240205
����1+1/2+1/3...ǰn���
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
		sum = sum + 1 / i ;
	

	}
	printf("��Ϊ%.2lf", sum);
	return 0;
}