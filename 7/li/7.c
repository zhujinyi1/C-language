/*
ף��һ
2004240205
�ҳ��������ֵ�Լ��Ǳ�
*/
#include<stdio.h>
int main()
{
    int a[3][2],i,j,m,n;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter :");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    m=n=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {        
            if(a[i][j]>a[m][n])
            {
                m=i;
                n=j;
            }
        }
    }
    printf("��������Ϊ%d\n",a[m][n]);
    printf("���±�Ϊ[%d][%d]\n",m,n);
    return 0;
}