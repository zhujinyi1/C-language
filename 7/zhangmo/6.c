/*
ף��һ
2004240205
ͳ�ƴ�д������ĸ
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
  char str[80];
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)
  {
  if(str[i]>'A'&&str[i]<'Z'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
    count++;
  }
  printf("%d\n",count);
	return 0;
}