/*
ף��һ
2004240205
������Ϸ
*/
#include<stdio.h>
int main()
{
    int num[100],i,m,n,no,*p,count;
    printf("enter n:");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        num[i]=i+1;           //��n���˱��
    }
    printf("enter m");
    scanf("%d",&m);
    while(m>=n)
    {
        printf("mӦ��С��n");
    printf("enter m");
    scanf("%d",&m);
    }                          //����
    p=num;
    count=no=0;
    while(no<n){               
        if(*p!=0)  
            count++;             //ѭ�����Ѿ��������˲�����
        if(count==m){
            no++;
            printf("NO.%d:%d\n",no,*p);
            *p=0;                //�������������ֹ���
            count=0;             //���¼���
        }
        p++;
        if(p==num+n)
        {
            p=num;               //���������ĩβ�����¿�ʼ
        }
    }
    return 0;                    
}