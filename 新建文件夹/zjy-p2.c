/*
祝津一
2004240205
三角形
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    double l1,l2,l3,c,s;
    printf("\n请输入第一个点");
    scanf("%d%d",x1,y1);
    printf("\n请输入第二个点");
    scanf("%d%d",x2,y2);
    printf("\n请输入第三个点");
    scanf("%d%d",x3,y3);
    l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l3=sqrt(pow(x3-x1,2)+pow(y3-y2,2));
    if((l1+l2)>l3&&(l2+l3)>=l1&&(l1+l3)>=l2)
    {
        printf("\n可以构成三角形");
        c=l1+l2+l3;
        s=sqrt(c/2*(c/2-l1)*(c/2-l2)*(c/2-l3));
        printf("周长为%lf",c);
        printf("面积为%lf",s);
    }
    else
    printf("不能构成三角形");
    return 0;

}