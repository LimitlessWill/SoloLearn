#include <stdio.h>
char * fast(char * n)
{
    if(n[0] == 'G')
    {
      return "Lion";
    }
    if(n[0] == 'R')
    {
      return "Tiger";
    }
    if(n[0] == 'S')
    {
      return "Snake";
    }
    if(n[0] == 'C')
    {
      return "Bird";
    }
    return "";
}
int main()
{
char in[256];
short ch = 0;
while(scanf("%s", in)==1)
{
printf("%s",fast(in));
printf(" ");
}
    return 0;
}
