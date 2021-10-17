#include <stdio.h>

int dub(char * str)
{
    int strz = strlen(str);
    for(int x=0;x<strz;++x)
    {
        for(int i=x+1;i<strz;i++)
        {
      if(str[i] == str[x]) return 1;
        }
    }
    return 0;
}
int main() {
char word[64];
scanf("%s",word);
if(!dub(word))
printf("%s","Unique");
else
printf("%s","Deja Vu");
    return 0;
}
