/*2004240223
ÂŞÃû¼ª
12002°à*/
#include<stdio.h>
#include<math.h>
int main()
{
	int money, year;
	double rate, sum;
	printf("Enter money:");
	scanf_s("%d", &money);
	printf("Enter year:");
	scanf_s("%d", &year);
	printf("Enter rate:");
	scanf_s("%lf", &rate);
	sum = money * pow(1 + rate, year);
	printf("sum=%.2f\n", sum);
	return 0;


}