/*
ף��һ
2004240205
���Ҳ����λ��
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char *color[5]={"red","blue","yellow","green","black"};
    /*ָ�������ʼ��*/
    char str[20];
    printf("Input a color:");
    scanf("%s",str);
    for(i=0;i<5;i++)
        if(strcmp(str,color[i])==0)
            break;
    if(i<5)
        printf("position:%d\n",i+1);
    else
    {
        printf("Not Found!");
    }
    return 0;
    
}