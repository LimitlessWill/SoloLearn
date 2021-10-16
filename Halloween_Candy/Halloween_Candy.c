#include <stdio.h>

#include <math.h>
int main() {
    int houses;
    scanf("%d", &houses);

    //your code goes here
    unsigned x = ceil((2.0/houses)*100); 
    
printf("%u",x);
    return 0;
}
