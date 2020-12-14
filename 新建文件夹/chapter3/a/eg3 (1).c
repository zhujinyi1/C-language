/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int x,y;
	x = 38;
	printf("请输入你猜的数:");
	scanf_s("%d", &y);
	if (x == y) {
		printf("Ok!You are right!\n");
	}
	else{
		if (x >y) {
			printf("你猜小了!");
		}
		else {
			printf("你猜大了!");
		}
	}
	return 0;
}