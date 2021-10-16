#include <stdio.h>

int main() {
int yards;
scanf("%d",&yards);

     if(yards > 10)
     printf("High Five");
     else if(yards < 1)
     printf("shh");
     else { 
     for(int x=0;x<yards;x++)
     printf("Ra!");
      }
    return 0;
}
