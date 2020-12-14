/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main()
{
	int i, choice;
	double price;
	for (i = 1; i <= 5; i++) {
		printf("1.查询苹果价格\n");
		printf("2.查询梨价格\n");
		printf("3.查询橘子价格\n");
		printf("4.查询葡萄价格\n");
		printf("5,退出\n");
		printf("Enter choice:");
		scanf_s("%d", &choice);
		if (choice == 0)
			break;
		switch (choice) {
		case 1:price = 3.0; break;
		case 2:price = 2.5; break;
		case 3:price = 4.1; break;
		case 4:price = 10.2; break;
		default:price = 0.0; break;
		}
		printf("price=%.1lf\n", price);
	}
	printf("Thanks\n");
	return 0;

}