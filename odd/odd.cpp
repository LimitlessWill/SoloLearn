#include <iostream>
using namespace std;

int main() {
int num = 0;
int sum =0;
cin>>num;
for(int x =0;x<num;x++)
{
    int tmp = 0 ;
    cin>>tmp;
    sum += (tmp%2)==0 ? tmp : 0 ;
}
cout<<sum;
    return 0;
}
