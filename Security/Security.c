#include <stdio.h>
char * chk(char* str)
{
    int s = strlen(str);
    int m,t,g;
    m = t = g = 0;
    for(int x=0;x< s;++x)
    {
        if(str[x] == '$') m = x;
        else if(str[x] == 'T') t = x;
        else if(str[x] == 'G') g = x;
    }
    //looking for $ , T
    int max,min;
    if(m < t) {max = t;min = m;}
    else {max = m; min = t;}
    
 if(g >= min && g <= max) return "quiet";

 return "ALARM";
}

int main() {
char word[48];
scanf("%[^\n]",word);
printf("%s",chk(word));
    return 0;
}
