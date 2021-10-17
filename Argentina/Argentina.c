#include <stdio.h>

int main() {
int ps,dl;
scanf("%d%d",&ps,&dl);
if(ps * 0.02 < dl)
printf("Pesos");
else
printf("Dollars");
    return 0;
}
