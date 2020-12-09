#include <stdio.h>

int main()
{
  int t=1;
  char ch;
  scanf("%c", &ch);
  if(ch>='a'&&ch<='z')
	ch = ch - 32;
  else if(ch>='A'&&ch<='Z')
    ch = ch + 32;
  else
  {
    t=0;
    printf("%d",t);
  }
  if(t==1)
	printf("%c",ch);
  return 0;
}