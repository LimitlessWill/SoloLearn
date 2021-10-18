#include <stdio.h>
char * to(char * str)
{
if(!strcmp(str,"0"))
   return "zero";
   else if(!strcmp(str,"1"))
   return "one";
   else if(!strcmp(str,"2"))
   return "two";
   else if(!strcmp(str,"3"))
   return "three";
   else if(!strcmp(str,"4"))
   return "four";
   else if(!strcmp(str,"5"))
   return "five";
   else if(!strcmp(str,"6"))
   return "six";
   else if(!strcmp(str,"7"))
   return "seven";
   else if(!strcmp(str,"8"))
   return "eight";
   else if(!strcmp(str,"9"))
   return "nine";
   else if(!strcmp(str,"10"))
   return "ten";
return str;
}
int main() {
char msg[128];
while(scanf("%s",msg)==1)
{
printf("%s",to(msg));
printf(" ");
}
    return 0;
}
