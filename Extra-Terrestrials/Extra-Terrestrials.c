#include <stdio.h>

int main() {
char str[100];
scanf("%s",&str);
int n=0;
for(;str[n]!='\0';++n);
char out[100];
//garbage = 7
for(int x=0;n >=0;++x)
out[x] = str[--n]; 
printf("%s",out);
    return 0;
}
