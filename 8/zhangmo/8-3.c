/*
ף��һ
2004240205
ѭ������
*/
#include<stdio.h>
void mov(int *x,int n,int m);
int main()
{
    int i,m,n;
    int a[80];
    printf("���������ĸ����ͺ��Ƶĵ�Ԫ����");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mov(a,n,m);
    printf("After move:");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
}
void mov(int *x,int n,int m)
{
    int i,j,k;

    for(i=1;i<=m;i++){
        k=x[n-1];
        for(j=n-1;j>0;j--)
        x[j]=x[j-1];
        x[0]=k;
    }
}