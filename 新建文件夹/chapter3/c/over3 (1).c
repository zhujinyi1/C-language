#include<stdio.h>
int main()//x<y<z
{
	int x, y, z, t;
	printf("请输入三个整数：");
	scanf_s("%d%d%d", &x, &y, &z);
	if (x < y) {
		t = y; y = x; x = t;
	}
	if (x < z) {
		t = z; z = x; x = t;
	}
	if (y < z) {
		t = z; z = y; y = t;
	}
	printf("%d<%d<%d", z,y,x);
	return 0;
}