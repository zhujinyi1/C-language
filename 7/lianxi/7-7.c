/*
ף��һ
2004240205
��������
*/
#include<stdio.h>
int main()
{
    int a[6][6],i,j,m,n,sum=0;
    printf("������n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        a[i][j]=i*n+j+1;
        printf("%2d ",a[i][j]);
        m++;
        if(m%n==0)
        printf("\n");
        if(i!=n-1&&j!=n-1&&i+j!=n-1)
        sum=sum+a[i][j];
    }
    printf("��Ϊ%d",sum);
    return 0;
}