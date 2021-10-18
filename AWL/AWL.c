#include <stdio.h>
int co(char * str)
{
    int totalsize = strlen(str);
    int word = 0;
    int letters = 0;
    for(int x =0;x <totalsize;x++)
    {
        if(str[x] == ' ')
        word++;
        else if(isalpha(str[x]))
        letters++;
    }
  return ceil((double)letters/(word+1));
}
int main() {
char sen[128];
scanf("%[^\n]",sen);
printf("%d",co(sen));
    return 0;
}
