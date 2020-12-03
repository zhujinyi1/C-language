#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    memset(a,'\0',1);
    printf("%d",strlen(a));
    puts(a);
    return 0;
}