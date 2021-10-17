#include <iostream>
using namespace std;

string de(string str)
{
    int strz = str.length();
    string res;
    int no =0;
    for(int x =0;x<strz;x++)
    {
    int dx = strz - x-1 ;
    if(isalpha(str[dx]) || str[dx]== ' ')
    res.push_back(str[dx]);
    }
    return res;
}
int main() {
string msg ="";
getline(cin,msg);
cout<<de(msg);
    return 0;
}
