/*
ף��һ
2004240205
����ڼ���
*/
#include<stdio.h>
int day_of_year(int year,int month,int day);
int y(int year);
int main()
{
    int d,m,y,t;
    printf("������������\n");
    scanf("%d%d%d",&y,&m,&d);
    t=day_of_year(y,m,d);
    printf("����һ���еĵ�%d��",t);
    return 0;
}
int day_of_year(int year,int month,int day)
{
    int s,k,f=0,a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    if(y(year))
      f=1;
    for(k=0;k<month;k++){
        printf("%d\n",s);
        s=s+a[f][k];
    }
    s=s+day;
    return s;
}
int y(int year){
    if(year%400==0||(year%4==0&&year%100!=0))
        return 1;
    else
        return 0;
}