/*
ף��һ
�����12002
2004240205
��һ��n�ĺ�
*/
#include<stdio.h>
int main()
{
	int n, i,sum;
	sum = 0;
	printf("enter n=");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("��1��%d�ĺ�Ϊ%d",n, sum);
	return 0;
}