

/*
�������ܣ������������� 
��������
����ֵ����
*/
void chazhao_xm()
{
	int i,j;
	char xingming[7]={0};
	printf("\n��������Ҫ���ҵ�ѧ������=");
	fflush(stdin);
	gets(xingming);
	for(i=0;i<N;i++)
	{
		if(strcmp(xingming,xm[i])==0)
			break;
	}
	if(i>=N)
		printf("\nû���ҵ�������\n");
	else
	{
		printf("\n�ҵ��ˣ���ѧ����Ϣ����:\n");
		printf("\n   ѧ��     ����    �Ա�     ����   ��ѧ   ����   �ܷ�  ƽ����\n");
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
	}

}


/*
�������ܣ�����ѧ�Ų���   
��������
����ֵ����
*/
void chazhao_xh()
{
	int i,j;
	char xh[12]={0};
	printf("\n��������Ҫ���ҵ�ѧ��ѧ��=");
	fflush(stdin);
	gets(xh);
	for(i=0;i<N;i++)
	{
		if(strcmp(xh,xuehao[i])==0)
			break;
	}
	if(i>=N)
		printf("\nû���ҵ�������\n");
	else
	{
		printf("\n�ҵ��ˣ���ѧ����Ϣ����:\n");
		printf("\n   ѧ��     ����    �Ա�      ����   ��ѧ   ����  �ܷ�  ƽ����\n");
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
	}

}

/*
�������ܣ����յ��Ƴɼ����� 
��������
����ֵ����
*/
void chazhao_cj()
{
	int i,j,c=0;
	double chengji=0;
	printf("\n��������Ҫ���ҵĿγ̱�ţ�1������  2����ѧ  3�����=");
	fflush(stdin);
	scanf("%d",&c);
	printf("\n��������Ҫ���ҵĳɼ�=");
	fflush(stdin);
	scanf("%lf",&chengji);
	for(i=0;i<N;i++)
	{
		if(chengji==cj[i][c-1])
			break;
	}
	if(i>=N)
		printf("\nû���ҵ�������\n");
	else
	{
		printf("\n�ҵ��ˣ���ѧ����Ϣ����:\n");
		printf("\n   ѧ��     ����    �Ա�      ����   ��ѧ   ���� �ܷ�  ƽ����\n");
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
	}


}
/*
�������ܣ������Ӳ˵�
��������
����ֵ����
*/
void  chazhao_zicaidan()
{
		int c=0;
		while(1)
		{
			printf("\n�������������Ӳ˵�������������");
			printf("\n�� 1��������������          ��");
			printf("\n�� 2������ѧ�Ų���          ��");
			printf("\n�� 3�����յ��Ƴɼ�����      ��");
			printf("\n�� 0���������˵�            ��");
			printf("\n������������������������������");
			printf("\n�������������ѡ��");
			scanf("%d",&c);
			switch(c)
			{
			case 1:chazhao_xm();
				break;
			case 2:chazhao_xh();
				break;
			case 3: chazhao_cj();
				break;
			}
			if(c!=1&&c!=2&&c!=3)
				break;
		}
		
}
