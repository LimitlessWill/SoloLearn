#include <stdio.h>
int find(char * str,char * substr)
{
    int s = strlen(str);
    int sb = strlen(substr);
   /* 
   "A B C D E F G H I J K"
   "HI"
    
    "The rain"
    "Hi"
    
    "HiHiHiHi"
    "Hi"
    */
for(int x = 0 ;x<s; ++x)
{
int found = 1;
for(int i = 0 ;i<sb; ++i)
{
if(str[x+i] != substr[i]){found=0;break;}
}
if(found) return x;
}
    return -1;
}

int main() {
char link[128];
scanf("%s",link);
int x = find(link,"e/");
int xx = find(link,"v=");
if(x>0)
printf("%s",link+x+2);
if(xx>0)
printf("%s",link+xx+2);
    return 0;
}
