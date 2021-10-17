#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned ct,tax,co;
    
    cin>>co;
    
    ct=(co*5)+40;
    
    tax=round(10.00/100.00*ct);
    
    cout<<tax + ct;
}
