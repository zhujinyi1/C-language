/*
ף��һ
2004240205
��ǰ������ĸ�ƶ������
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char line[100],str[4],a[100];
int i,j=0;
printf("enter a string:\n");
gets(line);
  while(1)
  {
   if(strlen(line)<3)
      printf("������Ҫ��\n");
   else
	   break;
      printf("enter the string:");
	  gets(line); 
  }
      for(i=0;i<3;i++)
         str[i]=line[i];
         str[i]='\0';
         for(i=3;i<strlen(line);i++)
		 {
             a[j]=line[i];
             j++;
		 }
             a[j]='\0';
             strcat(a,str);
             puts(a);
return 0;
}