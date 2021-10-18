#include <stdio.h>

int main() {
int num = 0;
int sum =0;
scanf("%d",&num);
for(int x =0;x<num;x++)
{
    int tmp = 0 ;
    scanf("%d",&tmp);
    sum += (tmp%2)==0 ? tmp : 0 ;
}
printf("%d",sum);
    return 0;
}
