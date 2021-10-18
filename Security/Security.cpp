#include <iostream>
using namespace std;
string chk(string str)
{
    int s = str.length();
    int m,t,g;
    m = t = g = 0;
    for(int x=0;x< s;++x)
    {
        if(str[x] == '$') m = x;
        else if(str[x] == 'T') t = x;
        else if(str[x] == 'G') g = x;
    }
    //looking for $ , T
    int max,min;
    if(m < t) {max = t;min = m;}
    else {max = m; min = t;}
    
 if(g >= min && g <= max) return "quiet";

 return "ALARM";
}

int main() {
string word;
getline(cin,word);
cout<<chk(word);
    return 0;
}
