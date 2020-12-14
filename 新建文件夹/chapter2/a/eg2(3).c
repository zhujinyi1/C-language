/*2004240223
12002°à
ÂÞÃû¼ª
*/
#include<stdio.h>
int main()
{
	int fahr, lower, upper;
	double celsius;
	printf("Enter lower:");
	scanf_s("%d", &lower);
	printf("Enter upper:");
	scanf_s("%d", &upper);
	if (lower <= upper) {
		printf("fahr celsius\n");
		for (fahr = lower; fahr <= upper; fahr++) {
			celsius = (5.0 / 9.0) * (fahr - 32);
			printf("%4d%6.lf\n", fahr, celsius);
		}
	}
	else printf("Invalid Value!\n");
	return 0;

}