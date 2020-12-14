/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int m, n, i, a,b,c,d;
	printf("请输入范围：");
	scanf("%d%d", &m, &n);
	d = 0; c = 0;
	for (i = m; i <= n; i++)
	{
		a = i;
		for (b = 2; b <= a / 2; b++) {
			if (a % b == 0)
			{
				break;
			}
		}
		if (b > a / 2 && b != 1&&a!=1)
		{
			c++; d = d + a;
		}
	}
	printf("素数个数=%d，素数和=%d", c, d);
	return  0;
}