#include <iostream>
using namespace std;

int main() {
string link = "";
getline(cin,link);
int x = link.find("e/");
int xx = link.find("v=");
if(x != string::npos)
cout<<link.substr(x+2);
if(xx != string::npos)
cout<<link.substr(xx+2);
    return 0;
}
