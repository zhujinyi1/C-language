/*
ף��һ
2004240205
�������
*/
#include<stdio.h>
int main()
{
    int number,i;
    char str[10];
    printf("enter a string:\n");
    i=0;
    while((str[i]=getchar())!='\n')
    {
        i++;
    }
    str[i]='\0';
    number=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9')
        number=number*10+str[i]-'0';
    }
    printf("%d",number);
    return 0;
}