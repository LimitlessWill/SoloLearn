#include <stdio.h>
char * de(char * str)
{
    int strz = strlen(str);
    for(int x = 0; x < strz ;x++)
    {
     if(isalpha(str[x]))
     str[x] = (122-tolower(str[x]))+97;
    }
    return str;
}
int main() {
char msg[128];
fgets(msg,128,stdin);
printf("%s",de(msg));
    return 0;
}
