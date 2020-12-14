/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int n;
	printf("请输入一个整数：");
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("是偶数");
	}
	else {
		printf("是奇数");
	}
	return 0;

}