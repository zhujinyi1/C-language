/*
ף��һ
2004240205
�ַ�������
*/
#include<stdio.h>
#include<string.h>
char *stract(char *s,char *t)
{
    int i=0,j=0;
    for(i=strlen(s);i<=(strlen(s)+strlen(t));i++,j++)
        *(s+i)=*(t+j);
    *(s+i-1)='\0';
        return s;
}
int main()
{
    char s[160],t[80];
    printf("enter string s:");
    gets(s);
    printf("enter string t:");
    gets(t);
    printf("%s\n",stract(s,t));
    return 0;
}