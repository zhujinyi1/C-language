/*
ѧ���ɼ�����ϵͳ
*/
#include<stdio.h>
#include<string.h>

#define N 5  //ѧ������
#define M 3   //�γ�����

//����1������n��ѧ��ȫ����Ϣ
/*
�������ܣ�����N��ѧ��ȫ����Ϣ
������ѧ��ѧ�����飬�������飬�ɼ����飬�Ա�����
����ֵ����
*/
void input(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n����ѧ��ȫ����Ϣ\n");
	for(i=0;i<N;i++)
	{
		fflush(stdin);//��ռ��̻�����
		printf("\n�������%d��ѧ��ѧ��=",i+1);
		gets(xh[i]);//scanf("%10s",xuehao[i]);

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

//����2:���N��ѧ��ȫ����Ϣ
/*
�������ܣ����N��ѧ��ȫ����Ϣ
������ѧ��ѧ�����飬�������飬�ɼ����飬�Ա�����
����ֵ����
*/
void output(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,j;
	printf("\n   ѧ��     ����   �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
		printf("\n");
	}
}

//����3��n��ѧ���ɼ������ƽ��
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

//����4:����������
/*
�������ܣ�����������
�������������Ա�ѧ�ţ��ɼ�
����ֵ����
*/
void search_name(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	char x[12],i,j,k=0;
	printf("������Ҫ���ҵĶ���:");
	getchar();
	gets(x);
	for(i=0;i<5;i++)
	{
		if(strcmp(x,xm[i])==0)
		{
				if(k==0)
				{
					printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");
					k++;
				}
				printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
				for(j=0;j<M+2;j++)
					printf("%8.2lf",cj[i][j]);
					printf("\n");
		}
	}
		if(k==0)
	printf("\nû���ҵ���ͬѧ\n");
}

//����5:���Ա����
/*
�������ܣ����Ա����
�������������Ա�ѧ�ţ��ɼ�
����ֵ����
*/
void search_sex(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	char x[12],i,j,k=0;
	printf("������Ҫ���ҵĶ�����Ա�:");
						getchar();
	gets(x);
	for(i=0;i<5;i++)
	{
		if(strcmp(x,xb[i])==0)
		{
				if(k==0)
				{
					printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");
					k++;
				}
				printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
				for(j=0;j<M+2;j++)
					printf("%8.2lf",cj[i][j]);
					printf("\n");
		}
	}
	if(k==0)
	printf("\nû���ҵ���ͬѧ\n");
}

//����6:��ѧ�Ų���
/*
�������ܣ���ѧ�Ų���
�������������Ա�ѧ�ţ��ɼ�
����ֵ����
*/
void search_number(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	char x[12],i,j,k=0;
	printf("������Ҫ���ҵĶ����ѧ��:");
						getchar();
	gets(x);
	for(i=0;i<5;i++)
	{
		if(strcmp(x,xh[i])==0)
		{
				if(k==0)
				{
					printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");
					k++;
				}
				printf("%10s %8s  %2c ",xh[i],xm[i],xb[i]);
				for(j=0;j<M+2;j++)
					printf("%8.2lf",cj[i][j]);
					printf("\n");
		}
	}
		if(k==0)
	printf("\nû���ҵ���ͬѧ\n");
}

//����7������������
/*
�������������Ա𣬳ɼ���ѧ��
����ֵ����
*/
void sort_name(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,t,j=0,z=0,s=0,k=0,a[N];
	for(i=0;i<N;i++)
	{
		j=i;
		t=j;
		for(j=i;j<N;j++)
		{
			if(strcmp(xm[j],xm[i])==-1)
			{	
				j=i;
			}
		}
		a[z]=j;
		z++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");	
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[a[i]],xm[a[i]],xb[a[i]]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[a[i]][j]);
		printf("\n");
	}
}

//����8�����ܷ�����
/*
�������������Ա𣬳ɼ���ѧ��
����ֵ����
*/
void sort_sum(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,t,j=0,z=0,s=0,k=0,a[N];
	for(i=0;i<N;i++)
	{
		j=i;
		t=j;
		for(j=i;j<N;j++)
		{
			if(cj[t][4]<cj[j][4])
			{	
				t=j;
			}
		}
		a[z]=t;
		z++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");	
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[a[i]],xm[a[i]],xb[a[i]]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[a[i]][j]);
		printf("\n");
	}
}

//����9����ѧ������
/*
�������������Ա𣬳ɼ���ѧ��
����ֵ����
*/
void sort_number(char xh[][12],char xm[][7],double cj[][M+2],char xb[])
{
	int i,t,j=0,z=0,s=0,k=0,a[N];
	for(i=0;i<N;i++)
	{
		j=i;
		t=j;
		for(j=i;j<N;j++)
		{
			if(strcmp(xh[t],xh[j])==-1)
			{	
				t=j;
			}
		}
		a[z]=t;
		z++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");	
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xh[a[i]],xm[a[i]],xb[a[i]]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[a[i]][j]);
		printf("\n");
	}
}

//����10�����Ա�ͳ��
/*
�������Ա�
����ֵ����
*/
void sum_sex(char xb[])
{
	int m=0,f=0,i;
	for(i=0;i<N;i++)
	{
		if(xb[i]=='m')
		{
			m++;
		}
		else
		{
			f++;
		}
		
	}
	printf("��������Ϊ%d\n",m);
	printf("Ů������Ϊ%d\n",f);
}

//����11������Ŀͳ��
/*
��������Ŀ�ɼ�
����ֵ����
*/
int sum_score(double cj[N][M+2])
{
	int k,i,bujige,you,liang,zhong,cha;
	bujige=you=liang=zhong=cha=0;
	while(1)
	{
		bujige=you=liang=zhong=cha=0;
		printf("\n���������������������ɼ�ͳ�Ʃ�����������������");
		printf("\n�� 1������Ŀһ              ��");
		printf("\n�� 2������Ŀ��              ��");
		printf("\n�� 3������Ŀ��              ��");
		printf("\n�� 4�����ܷ�                ��");
		printf("\n�� 0���˳�                  ��");
		printf("\n�� ע���ţ�90-100��         ��");
		printf("\n��     ����80-89��          ��");
		printf("\n��     �У�70-79��          ��");
		printf("\n��     �60-69��          ��");
		printf("\n��     ������0-59��       ��");
		printf("\n�� 0������                  ��");
		printf("\n��������������������������������������������������������");			
		printf("\n�������������ѡ��");
		scanf("%d",&k);
		if(k!=1&&k!=2&&k!=3&&k!=4)
		{
			return 1;	
		}
		for(i=0;i<N;i++)
		{
			if(cj[i][k-1]>=90&&cj[i][k-1]<=100)
				you++;
			else if (cj[i][k-1]>=80&&cj[i][k-1]<=89)
				liang++;
			else if (cj[i][k-1]>=70&&cj[i][k-1]<=79)
				zhong++;
			else if(cj[i][k-1]>=60&&cj[i][k-1]<=69)
				cha++;
			else
				bujige++;
		}
		printf("ͳ����ɣ�\n");
		printf("�ɼ�Ϊ�ŵ���%d��\n",you);
		printf("�ɼ�Ϊ������%d��\n",liang);
		printf("�ɼ�Ϊ�е���%d��\n",zhong);
		printf("�ɼ�Ϊ�����%d��\n",cha);
		printf("  ���������%d��\n",bujige);
	}
}

/*������*/
int main()
{
	char xh[N][12],xm[N][7],xb[N]; //'f'-Ů 'm'-��   "��"��xb[N][3]
	double cj[N][M+2]={0};  //���ѧ��M�ŵ��Ƴɼ����ܷ֡�ƽ����
	int choice=0,k=0,n=0;
start:	while(1)
    {
		k=0;
		printf("\n���������������������������˵�����������������������");
		printf("\n�� 1������ȫ��ѧ����Ϣ       ��");
		printf("\n�� 2��ѧ���ɼ���ͣ�ƽ����   ��");
		printf("\n�� 3���������ѧ���ɼ�       ��");
		printf("\n�� 4������                   ��");
		printf("\n�� 5������(�Ӵ�С)         ��");
		printf("\n�� 6��ͳ��                   ��");		
		printf("\n�� 0���˳�                   ��");
		printf("\n����������������������������������������������������������");
		printf("\n�������������ѡ��");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n����%d��ѧ����Ϣ\n",N);
			 input(xh,xm,cj,xb);
			 break;
		case 2:sum_ave(cj);
		     break;
		case 3: output(xh,xm,cj,xb);
		      break;
		case 4:
			while(1)
			{
				k=0;
				printf("\n�����������������������������ҩ���������������������");
				printf("\n�� 1��������                ��");
				printf("\n�� 2����ѧ��                ��");
				printf("\n�� 3�����Ա�                ��");
				printf("\n�� 0������                  ��");
				printf("\n��������������������������������������������������������");
				printf("\n�������������ѡ��");
				scanf("%d",&k);
				switch(k)
				{
					case 1:search_name(xh,xm,cj,xb);
							break;
					case 2:search_number(xh,xm,cj,xb);
							break;
					case 3:search_sex(xh,xm,cj,xb);
					        break;
					default:printf("\n�˳�\n");goto start;
				}
			}
			switch(k)
			getchar();
			k=0;
			break;
		case 5:
			while(1)
			{
				printf("\n�����������������������������򩥩�������������������");
				printf("\n�� 1��������                ��");
				printf("\n�� 2�����ܷ�                ��");
				printf("\n�� 3����ѧ��                ��");
				printf("\n�� 0������                  ��");
				printf("\n��������������������������������������������������������");
				printf("\n�������������ѡ��");
				scanf("%d",&k);
				switch(k)
				{
					case 1:sort_name(xh,xm,cj,xb);
							break;
					case 2:sort_sum(xh,xm,cj,xb);
							break;
					case 3:sort_number(xh,xm,cj,xb);
							break;
					default:printf("\n�˳�\n");goto start;
				}
			}
			switch(k)
			getchar();
			k=0;
			break;
		case 6:
			while(1)
			{
				k=0;
				printf("\n��������������������������ͳ�Ʃ���������������������");
				printf("\n�� 1�����Ա�                ��");
				printf("\n�� 2�����ɼ�                ��");
				printf("\n�� 0������                  ��");
				printf("\n��������������������������������������������������������");			
				printf("\n�������������ѡ��");
				scanf("%d",&k);
				switch(k)
				{
					case 1:sum_sex(xb);
							break;
					case 2:
						while(1)
							sum_score(cj);
						break;
						default:printf("\n�˳�\n");goto start;
				}
			}
			switch(k)
			getchar();
			k=0;
			break;
			default: printf("\n�˳�\n");exit(0);
		}
		switch(choice)
		getchar();//���������ݡ��س�
	}
	return 0;
}