
void zhucaidan()
{
	int choice=0;
	while(1)
    {
		printf("\n���������������˵�������������");
		printf("\n�� 1������ȫ��ѧ���ɼ�      ��");
		printf("\n�� 2��ѧ���ɼ���ͣ�ƽ����  ��");
		printf("\n�� 3���������ѧ���ɼ�      ��");
		printf("\n�� 4������                  ��");
		printf("\n�� 5������                  ��");
		printf("\n�� 6��ͳ��                  ��");
		printf("\n�� 0���˳�                  ��");
		printf("\n������������������������������");
		printf("\n�������������ѡ��");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n����%d��ѧ����Ϣ\n",N);
			 input( ); 
			 break;
		case 2:sum_ave( );
		     break;
		case 3: output( );
		      break;
		case 4: paixu_zicaidan();//�����Ӳ˵�				
			break;
		case 5: chazhao_zicaidan();//����
			        break;
		default: printf("\n�˳�\n");exit(0);
		}
		fflush(stdin);//���������ݡ��س�
	}
}