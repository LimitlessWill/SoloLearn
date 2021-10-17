#include <iostream>
using namespace std;

int main() {
string str;;
getline(cin,str);
int n=0;
for(;str[n]!='\0';++n);
string out(n,'\0');
//garbage = 7
for(int x=0;n >=0;++x)
out[x] = str[--n]; 
cout<<out;
    return 0;
}
