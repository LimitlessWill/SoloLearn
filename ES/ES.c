#include <stdio.h>

char * months(char * month)
{
    if(!strcmp(month,"January"))
    return "1";
    else if(!strcmp(month,"February"))
    return "2";
    if(!strcmp(month,"March"))
    return "3";
    else if(!strcmp(month,"April"))
    return "4";
    if(!strcmp(month,"May"))
    return "5";
    else if(!strcmp(month,"June"))
    return "6";
    if(!strcmp(month,"July"))
    return "7";
    else if(!strcmp(month,"August"))
    return "8";
    if(!strcmp(month,"September"))
    return "9";
    else if(!strcmp(month,"October"))
    return "10";
    if(!strcmp(month,"November"))
    return "11";
    else if(!strcmp(month,"December"))
    return "12";
    else return "";
}
int find(char * str,char delimiter,unsigned occurence)
{//12/6/1990
int count = 0;
int s = strlen(str);
int in = -1;
for(int x= 0;x<s;++x)
{
    if(str[x] == delimiter)
    {
    count++;
    in = x;
    }
    if(occurence == count) break;
}    
return in;
}

void trim(char* str, unsigned start, unsigned end, char* out)
{/*11/25/2019
0,2
2,5
5,s*/
    int s = strlen(str);//10
    if(end > s) end = s;
    int x_x = (end) - (start);
    int x;
    for (x = 0; x < x_x; x++) {
        out[x] = str[start+x];
    }
    out[x] = '\0';
    /* 0,2
      x_x = 2
      out[0] = str[0] = 1
      out[1] = str[1] = 1
      out[2] = '\0'
      11\0
      _____________________
      2,5
      x_x = 3
      out[0] = str[2] = /
      out[1] = str[3] = 2
      out[2] = str[4] = 5
      out[3] = '\0'
      /25\0
      ______________________
      5,10
      x_x = 5
      out[0] = str[5] = /
      out[1] = str[6] = 2
      out[2] = str[7] = 0
      out[3] = str[8] = 1
      out[4] = str[9] = 9
      out[5] = '\0'
      /2019
    */
}

int main() {
char us[12];
scanf("%s",us);
if(isalpha(us[0]))
{
//us=month,day after",",year after (,)
char day[12],year[12];
scanf("%[^,]",day);
scanf(",%s",year);
printf("%s/%s/%s",day,months(us),year);
}
else
{
char day[128],month[128],year[128];
int first = find(us,'/',1);//2
int second = find(us,'/',2);//5
trim(us,0,first,month);
trim(us,first+1,second,day);
trim(us,second+1,99,year);

printf("%s/%s/%s",day,month,year);
}
    return 0;
}
