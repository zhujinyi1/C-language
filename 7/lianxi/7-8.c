/*
ף��һ
2004240205
����ѭ��
*/
#include<stdio.h>
int main()
{
    int a[6][6],m,c,n,i,j;
    printf("������n\n");
    scanf("%d",&n);
    printf("������m\n");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        a[i][j]=i*n+j+m+1;
        printf("%2d ",a[i][j]);
        c++;
        if(c%n==0)
        printf("\n");
    }
    return 0;

}