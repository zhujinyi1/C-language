/*
ף��һ
2004240205
������
*/
#include<stdio.h>
struct books{
    char name[80];
    float price;
}b[10];
int main()
{
    int i,l=0,h=0;
    for(i=0;i<10;i++)
    {
        printf("�������%d���������:",i+1);
        scanf("%s",&b[i].name);
        printf("������۸�:");
        scanf("%f",&b[i].price);
    }
    for(i=0;i<10;i++)
    {
        if(b[i].price>=b[h].price)
        h=i;
        if(b[i].price<=b[l].price)
        l=i;
    }   
    printf("�۸���ߵ��飺\n");
    printf("����\t\t�۸�\n");
    printf("%s\t\t%.2f\n",b[h].name,b[h].price);
    printf("�۸���͵��飺\n");
    printf("����\t\t�۸�\n");
    printf("%s\t\t%.2f\n",b[l].name,b[l].price);
    return 0;
}