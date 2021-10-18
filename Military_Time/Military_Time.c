#include <stdio.h>

int main() {
char hr[4];
char mn[4];
char del[4];

scanf("%[^:]",hr);
scanf(":%s",mn);
scanf("%s",del);

if(!strcmp(del,"PM"))
{
int t = atoi(hr) + 12;
printf("%d:%s",t,mn);
}
else
printf("%s:%s",hr,mn);

    return 0;
}
