#include<stdio.h>
int main()
{
    int j,i,t,a[5]={1,5,6,3,4};
    int n=5;
    for(i=1;i<n;i++)
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t; 
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}