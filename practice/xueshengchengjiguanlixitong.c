/*
ѧ���ɼ�����ϵͳ
*/
#include<stdio.h>
#include<string.h>
#define N 5  //ѧ������
#define M 3   //�γ�����
/*
�������ܣ�����N��ѧ��ȫ����Ϣ
������ѧ��ѧ�����飬�������飬�ɼ����飬�Ա�����
����ֵ����
*/
void input(char xuehao[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n����ѧ��ȫ����Ϣ\n");
	for(i=0;i<N;i++)
	{
		fflush(stdin);//��ռ��̻�����
		printf("\n�������%d��ѧ��ѧ��=",i+1);
		gets(xuehao[i]);//scanf("%10s",xuehao[i]);

		fflush(stdin);
		printf("\n�������%d��ѧ������=",i+1);
		gets(xm[i]);

		fflush(stdin);
		printf("\n�������%d��ѧ���Ա�=",i+1);
		xb[i]=getchar();
		while(xb[i]!='m'&&xb[i]!='f')
		{
			printf("\n�������ֻ��m/f\n");
			fflush(stdin);
			printf("\n�������%d��ѧ���Ա�=",i+1);
			xb[i]=getchar();
		}

		fflush(stdin);
		printf("\n�������%d��ѧ���ɼ���",i+1);
		for(j=0;j<M;j++)
		{
			printf("\n��%d�ſ�=",j+1);scanf("%lf",&cj[i][j]);
		}
	}
}
/*
�������ܣ����N��ѧ��ȫ����Ϣ
������ѧ��ѧ�����飬�������飬�ɼ����飬�Ա�����
����ֵ����
*/
void output(char xuehao[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
		printf("\n");
	}
}
/*
�������ܣ�N��ѧ���ɼ���͡���ƽ��
�������ɼ�����
����ֵ����
*/
void sum_ave(double cj[][M+2])
{
	int i,j;
	printf("\nѧ���ɼ���ͣ�ƽ����\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cj[i][M]+=cj[i][j];
		cj[i][M+1]=cj[i][M]/M;
	}
	printf("\nѧ���ɼ���ͣ�ƽ���� ��ɣ���\n");
}
/*������*/
int main()
{
	char xuehao[N][12],xm[N][7],xb[N]; //'f'-Ů 'm'-��   "��"��xb[N][3]
	double cj[N][M+2]={0};  //���ѧ��M�ŵ��Ƴɼ����ܷ֡�ƽ����
	int choice=0;
	while(1)
    {
		printf("\n���������������������������˵�����������������������");
		printf("\n�� 1������ȫ��ѧ����Ϣ      ��");
		printf("\n�� 2��ѧ���ɼ���ͣ�ƽ����  ��");
		printf("\n�� 3���������ѧ���ɼ�      ��");
		printf("\n�� 0���˳�                  ��");
		printf("\n��������������������������������������������������������");
		printf("\n�������������ѡ��");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n����%d��ѧ����Ϣ\n",N);
			 input(xuehao,xm,cj,xb);
			 break;
		case 2:sum_ave(cj);
		     break;
		case 3: output(xuehao,xm,cj,xb);
		      break;
		default: printf("\n�˳�\n");exit(0);
		}
		getchar();//���������ݡ��س�
	}
	return 0;
}