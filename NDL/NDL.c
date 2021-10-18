#include <stdio.h>

int sort(char str,char o1,char o2,char o3,char o4)
{
    char all[5];
    all[0]=str,all[1]=o1,all[2]=o2,all[3]=o3,all[4]=o4;
    int id = -1;
    for(int x = 0 ; x < 5 ; ++x)
    {
       for(int i = x+1; i < 5 ; ++i)
       {char swap = 0;
        if(all[x] > all[i])
        {
            swap = all[i];
            all[i] = all[x];
            all[x] = swap;
        }
       }
       if(all[x] == str) id = x;
    }
    return id;
}

int main() {
char name[48];
scanf("%s",name);
unsigned agent =0;
scanf("%d",&agent);
char other1[48],other2[48],other3[48],other4[48];
scanf("%s %s %s %s",other1,other2,other3,other4);
int ordinal = sort(name[0],other1[0],other2[0],other3[0],other4[0]);
int time = ordinal/agent*20+20;
printf("%d",time);
    return 0;
}
