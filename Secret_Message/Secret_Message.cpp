#include <iostream>
using namespace std;
string de(string str)
{
    int strz = str.length();
    for(int x = 0; x < strz ;x++)
    {
     if(isalpha(str[x]))
     str[x] = (122-tolower(str[x]))+97;
    }
    return str;
}
int main() {
string msg = "";
getline(cin,msg);
cout<<de(msg);
    return 0;
}
