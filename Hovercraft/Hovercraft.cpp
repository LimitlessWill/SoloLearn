#include <iostream>
using namespace std;

int main() {
int sal;
cin>>sal;
if(sal*3 == 21)
cout<<("Broke Even");
else if (sal*3 < 21)
printf("Loss");
else
printf("Profit");
    return 0;
}
