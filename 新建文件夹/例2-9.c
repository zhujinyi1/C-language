/*
ף��һ
�����12002
2004240205
����n�Ľ׳�
*/
#include<stdio.h>
int main()
{
	int m,i,n;
	m = 1;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		m = m * i;
	}
	printf("��1��%d�Ľ׳�Ϊ%d", n, m);
	return 0;
}