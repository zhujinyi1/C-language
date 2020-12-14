/*2004240223
ÂŞÃû¼ª
12002°à*/
#include<stdio.h>
int main()
{
	int x, y;
	printf("ÇëÊäÈëx£º");
	scanf_s("%d", &x);
	if (x < 0) {
		y = -1;
		printf("y=%d", y);
	}
	else {
		if (x == 0) {
			y = 0;
			printf("y=%d", y);
		}
		else {
			y = 1;
			printf("y=%d", y);
		}
	}
	return 0;
}