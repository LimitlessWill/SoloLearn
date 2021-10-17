#include <iostream>
using namespace std;
string re(string str)
{
    int strz = str.length();
    string re;
    for(int x =0 ; x < strz; x++)
    {
if(isalpha(str[x]) || isdigit(str[x])||str[x]== ' ')
re.push_back(str[x]);
    }
    return re;
}
int main() {
string msg;
getline(cin,msg);
cout<<re(msg);
    return 0;
}
