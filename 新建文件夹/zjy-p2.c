/*
ף��һ
2004240205
������
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    double l1,l2,l3,c,s;
    printf("\n�������һ����");
    scanf("%d%d",x1,y1);
    printf("\n������ڶ�����");
    scanf("%d%d",x2,y2);
    printf("\n�������������");
    scanf("%d%d",x3,y3);
    l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3=sqrt(pow(x3-x1,2)+pow(y3-y2,2));
    if((l1+l2)>l3&&(l2+l3)>=l1&&(l1+l3)>=l2)
    {
        printf("\n���Թ���������");
        c=l1+l2+l3;
        s=sqrt(c/2*(c/2-l1)*(c/2-l2)*(c/2-l3));
        printf("�ܳ�Ϊ%lf",c);
        printf("���Ϊ%lf",s);
    }
    else
    printf("���ܹ���������");
    return 0;

}