#include <iostream>
using namespace std;
bool dub(string str)
{
    int strz = str.length();
    for(int x=0;x<strz;++x)
    {
        for(int i=x+1;i<strz;i++)
        {
      if(str[i] == str[x]) return true;
        }
    }
    return false;
}

int main() {
string word ="";
cin >> word;
if(dub(word))
cout << "Deja Vu";
else
cout << "Unique";
    return 0;
}
