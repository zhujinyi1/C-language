/*2004240223
罗名吉
12002班
*/
#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	c = 0;
	printf("请输入正整数个数：");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("请输入数字：");
		scanf_s("%d", &a);
		if (a <= 0) {
			break;
		}
		if (a % 2 == 1) {
			c = c + a;
		}
	}
	printf("%d", c);
	return 0;
}