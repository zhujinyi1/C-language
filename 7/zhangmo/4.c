/*
2004240205
ף��һ
��������Ԫ�غ�
*/
#include<stdio.h>
int main()
{
    int a[6][6],i,j,m,n,sum;
    printf("enter i,j:\n");
    scanf("%d%d",&i,&j);
    for(m=0;m<i;m++)
        for(n=0;n<j;n++)
        {
            scanf("%d",&a[m][n]);
        }
    for(m=0;m<i;m++){
        sum=0;
        for(n=0;n<j;n++)
        {
            sum=sum+a[m][n];
        }
        printf("��%d�к�Ϊ%d\n",m+1,sum);
    }
    return 0;
}