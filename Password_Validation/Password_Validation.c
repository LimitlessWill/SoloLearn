#include <stdio.h>
unsigned count(char * str)
{//password19#@
    unsigned counter =0;
    int s = strlen(str);
    char sp[7] = "!@#$%&*";
    for(int x=0;x<s;++x)
    {
    for(int i =0;i<7;++i)
    {
    if(str[x] == sp[i]) counter++;
    }
    }
    return counter;
}
unsigned co(char * str)
{
    unsigned co = 0;
    int s = strlen(str);
    for(int x= 0; x<s;++x )
    {
        if(isdigit(str[x])) co++;
    }
    return co;
}
int main() {
char word[48];
scanf("%[^\n]",word);
int num = co(word);
int sp = count(word);
if(num < 2 || sp < 2 || strlen(word) < 7)
printf("%s","Weak");
else
printf("%s","Strong");
    return 0;
}
