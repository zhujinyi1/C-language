/*
ף��һ
�����12002
2004240205
����1+2/3+3/5+4/7...ǰn���
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
	printf("��Ϊ%.2lf", sum);
	return 0;
}