#include <iostream>
using namespace std;

int main() {
     
     int yards;
     cin >> yards;
     if(yards > 10)
     cout<< "High Five";
     else if(yards < 1)
     cout<< "shh";
     else { 
     for(int x=0;x<yards;x++)
     cout<< "Ra!";
      }
    return 0;
}
