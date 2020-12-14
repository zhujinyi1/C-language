/*2004240223
罗名吉
12002班*/
#include<stdio.h>
int main(void) {
	int n,i,m;
	printf("输入学生人数：");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("输入学生成绩：");
		scanf_s("%d", &m);
		if (m>= 90) {
			printf("A\n");
		}
		else if (m >= 80) {
			printf("B\n");
		}
		else if (m>= 70) {
			printf("C\n");
		}
		else if (m >= 60) {
			printf("D\n");
		}
		else {
			printf("E\n");
		}
	}
	return 0;
}