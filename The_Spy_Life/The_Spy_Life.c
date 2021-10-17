#include <stdio.h>

char * de(char * str)
{
int noz = 0;
int strz = strlen(str);
static char tmp[128] = {0};
for(int x=0;x<strz;++x)
{
    int dx = strz-1-x;
   if(isalpha(str[dx]) || str[dx] == ' ')
    tmp[noz++] = str[dx];
}

    return tmp;
}
int main() {
char sen[128];
fgets(sen,128,stdin);
printf("%s",de(sen));
    return 0;
}
