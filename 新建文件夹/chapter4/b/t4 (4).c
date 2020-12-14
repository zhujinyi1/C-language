/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int n, a,i,b,c,t;
	printf("请输入次数：");
	scanf("%d", &n);
	printf("请输入整数：");
	scanf("%d", &b);
	c = b;
	for (i = 2; i <= n; i++)
	{
		scanf_s("%d", &b);
		if (b < c) {
			t = b; b = c; c = t;
		}
	}
	printf("最小值=%d", c);
	return 0;

}