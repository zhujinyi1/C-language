/*
��������
ף��һ
2004240205
*/
#include<stdio.h>
int main()
{
    int c,i;
    char str[80];
    printf("enter a string:");
    i=0;
    while((str[i]=getchar())!='\n')
    {
        i++;
    }
    str[i]='\0';
    c=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9')
        c++;
    }
    printf("��������Ϊ%d\n",c);
    return 0;
}