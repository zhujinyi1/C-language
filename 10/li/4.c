/*
ף��һ
2004240205
��ŵ������
*/
#include<stdio.h>
int i=0;                                      //��¼�ݹ�Ĳ������
hanoi(n,a,b,c)
{
	char a,b,c;
	int n;
	if(n>0)
	{
		if (n==1)  printf("%c��%c\n",a,c);
		else
		{
			hanoi(n-1,a,c,b);                 //��һ��
			++i;
			printf("%c��%c\n",a,c);      //�ڶ���
			hanoi(n-1,b,a,c);                  //������
		}
	}
	else printf("n<=0 is err.!");
}

int main()
{
	int n;
	printf("��������̵�����:");
	scanf("%d",&n);
	printf("\n%d�����ƶ��Ĳ�����:\n",n);
	hanoi(n,'a','b','c');
	printf("�ܹ��еݹ�:%d   ��!\n",i);
}
