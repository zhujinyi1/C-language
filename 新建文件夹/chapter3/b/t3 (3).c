/*2004240223
ÂÞÃû¼ª
12002°à*/
#include<stdio.h>
int main()
{
	int x;
	printf("ÇëÊäÈë³É¼¨£º");
	scanf_s("%d", &x);
	if (x >= 90)
	{
		printf("A");
	}
	else if(x>=80){
		printf("B");
	}
	else if (x >= 70) {
		printf("C");
	}
	else if (x >= 60) {
		printf("D");
	}
	else {
		printf("E");
	}
	return 0;
}