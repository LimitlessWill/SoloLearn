#include <stdio.h>

int main() {
int sal;
scanf("%d",&sal);
if(sal*3 == 21)
printf("Broke Even");
else if (sal*3 < 21)
printf("Loss");
else
printf("Profit");
    return 0;
}
