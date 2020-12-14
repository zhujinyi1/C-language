/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main(void) 
{
	int x, y,z,n,a,b;
	b = 0;
	printf("车程：");
	scanf_s("%d", &x);
	if (x <= 3) {
		z = 10;
	}
	else if (x > 3 && x <= 10) {
		z = 10 + 2*(x - 3);
	}
	else {
		z = 24 + 3 * (x-10);
	}
	printf("因路阻及乘客要求停车时间:");
	scanf_s("%d", &n);
	if (n< 5) {
		printf("\n");
	}
	else {
		for (a = 5; a <= n; a = a + 5) {
			b = b + 2;
		}
	}
	y = z + b;
	printf("车费=%d", y);
	return 0;
}