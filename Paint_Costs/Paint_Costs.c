#include<stdio.h>
#include<math.h>

int main() {
    int ct,tax,co;
    
    scanf("%d",&co);
    
    ct=(co*5)+40;
    
    tax=round(10.00/100.00*ct);
    int o = tax + ct;
    printf("%d",o);
    return 0;
}
