
/*
�������ܣ������ֽܷ��������Ӻ���
��������
����ֵ����
*/
void paixu_zongfen()
{
//1�������ֽܷ������ 	
	char xuehao_temp[12],xm_temp[7],xb_temp;
	double cj_temp[M+2];
	int  i,j;
	for(i=1;i<N;i++)
		for(j=0;j<N-i;j++)
			if(cj[j][M]<cj[j+1][M])
			{
				//����ѧ��ȫ����Ϣ:char xuehao[N][12]				
				strcpy(xuehao_temp,xuehao[j]);
				strcpy(xuehao[j],xuehao[j+1]);
				strcpy(xuehao[j+1],xuehao_temp);
				//xm[N][7]
				strcpy(xm_temp,xm[j]);
				strcpy(xm[j],xm[j+1]);
				strcpy(xm[j+1],xm_temp);
				//xb[N]
				xb_temp=xb[j],xb[j]=xb[j+1],xb[j+1]=xb_temp;
				//double cj[N][M+2]
				memcpy(cj_temp,cj[j],(M+2)*sizeof(double));
				memcpy(cj[j],cj[j+1],(M+2)*sizeof(double));
				memcpy(cj[j+1],cj_temp,(M+2)*sizeof(double));
				
			}
	printf("\n�����ֽܷ��򡪡������\n");
}

/*
�������ܣ������������������Ӻ���
��������
����ֵ����
*/
void paixu_xingming()
{
//2�����������������    
	 char xuehao_temp[12],xm_temp[7],xb_temp;
	double cj_temp[M+2];
	int  i,j;
	for(i=1;i<N;i++)
		for(j=0;j<N-i;j++)
			if(strcmp(xm[j],xm[j+1])>0)
			{
				//����ѧ��ȫ����Ϣ:char xuehao[N][12]				
				strcpy(xuehao_temp,xuehao[j]);
				strcpy(xuehao[j],xuehao[j+1]);
				strcpy(xuehao[j+1],xuehao_temp);
				//xm[N][7]
				strcpy(xm_temp,xm[j]);
				strcpy(xm[j],xm[j+1]);
				strcpy(xm[j+1],xm_temp);
				//xb[N]
				xb_temp=xb[j],xb[j]=xb[j+1],xb[j+1]=xb_temp;
				//double cj[N][M+2]
				memcpy(cj_temp,cj[j],(M+2)*sizeof(double));
				memcpy(cj[j],cj[j+1],(M+2)*sizeof(double));
				memcpy(cj[j+1],cj_temp,(M+2)*sizeof(double));
				
			}  
	printf("\n�����������򡪡������\n");
}


/*
�������ܣ������Ա��������Ӻ���
��������
����ֵ����
*/
void paixu_xingbie()
{
// 3�������Ա������   
	  char xuehao_temp[12],xm_temp[7],xb_temp;
	double cj_temp[M+2];
	int  i,j;
	for(i=1;i<N;i++)
		for(j=0;j<N-i;j++)
			if(xb[j]<xb[j+1])
			{
				//����ѧ��ȫ����Ϣ:char xuehao[N][12]				
				strcpy(xuehao_temp,xuehao[j]);
				strcpy(xuehao[j],xuehao[j+1]);
				strcpy(xuehao[j+1],xuehao_temp);
				//xm[N][7]
				strcpy(xm_temp,xm[j]);
				strcpy(xm[j],xm[j+1]);
				strcpy(xm[j+1],xm_temp);
				//xb[N]
				xb_temp=xb[j],xb[j]=xb[j+1],xb[j+1]=xb_temp;
				//double cj[N][M+2]
				memcpy(cj_temp,cj[j],(M+2)*sizeof(double));
				memcpy(cj[j],cj[j+1],(M+2)*sizeof(double));
				memcpy(cj[j+1],cj_temp,(M+2)*sizeof(double));
				
			}  
		printf("\n�����Ա��򡪡������\n");
}


/*
�������ܣ������Ӳ˵�
��������
����ֵ����
*/
void  paixu_zicaidan()
{		
	    int c=0;
		while(1)
		{
			printf("\n�������������Ӳ˵�������������");
			printf("\n�� 1�������ֽܷ������      ��");
			printf("\n�� 2�����������������      ��");
			printf("\n�� 3�������Ա������      ��");
			printf("\n�� 0���������˵�            ��");
			printf("\n������������������������������");
			printf("\n�������������ѡ��");
			scanf("%d",&c);
			switch(c)
			{
			case 1:paixu_zongfen();
				break;
			case 2:paixu_xingming();
				break;
			case 3: paixu_xingbie();
				break;
			}
			if(c!=1&&c!=2&&c!=3)
				break;
		}
}