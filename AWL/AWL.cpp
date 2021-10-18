#include <iostream>
#include <cmath>
using namespace std;
int co(string str)
{
    int totalsize = str.length();
    int word = 0;
    int letters = 0;
    for(int x =0;x <totalsize;x++)
    {
        if(str[x] == ' ')
        word++;
        else if(isalpha(str[x]))
        letters++;
    }
  return ceil((double)letters/(word+1));
}
int main() {
string sen ="";
getline(cin,sen);
cout<<co(sen);
    return 0;
}
