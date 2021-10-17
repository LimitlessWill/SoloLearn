#include <stdio.h>

char * re(char * str)
{
int noz = 0;
int strz = strlen(str);
static char tmp[128] = {0};
for(int x=0;x<strz;++x)
{
   if(isalpha(str[x]) || isdigit(str[x]) || str[x] == ' ')
    tmp[noz++] = str[x];
}

    return tmp;
}
int main() {
char sen[128];
fgets(sen,128,stdin);
printf("%s",re(sen));
    return 0;
}
