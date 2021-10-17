#include <stdio.h>

char * trim(const char * str)
{
    //hello
    int si = strlen(str);
   static char res[128]={0};
    for(int x=0;x<si;++x)
    res[x] = str[x+1];
    
    return res;
}

int main() {
char sen[256];
while(scanf("%s",sen) == 1)
{
printf("%s",trim(sen));
printf("%c",sen[0]);
printf("ay ");
}
    return 0;
}
