/*
�ö���ָ���д��11-1
2004240205
ף��һ
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char *color[5]={"red","blue","yellow","green","black"};
    char **pc;/*����ָ��*/
    char str[20];
    pc=color;/*����ָ�븳ֵ*/
    printf("Input a color:");
    scanf("%s",&str);
    for(i=0;i<5;i++)
    {
       if(strcmp(str,*(pc+i))==0)
        {
            break;
        }
    } 
    
        if(i<5)
        {
            printf("position:%d\n",i+1);
        }
        else
        {
            printf("Not Found!\n");
        }
        return 0;
}