/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
int main()
{
	int a, b, i, n;
	double c, d;
	printf("Enter n:");
	scanf_s("%d", &n);
	b = 1;
	a = 1;
	d = 0;
	for (i = 1; i <= n; i++) {
		c = b * 1.0 / a;
		d = d + c;
		b = -b;
		a = a + 2;
	}
	printf("d=%f\n", d);
	return 0;
}