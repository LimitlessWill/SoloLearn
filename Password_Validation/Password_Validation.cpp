#include <iostream>
using namespace std;
unsigned count(string str)
{
    unsigned counter =0;
    int s = str.length();
    char sp[] = "!@#$%&*";
    for(int x=0;x<s;++x)
    {
    for(int i =0;i<7;++i)
    {
    if(str[x] == sp[i]) counter++;
    }
    }
    return counter;
}
unsigned co(string str)
{
    unsigned co = 0;
    int s = str.length();
    for(int x= 0; x<s;++x )
    {
        if(isdigit(str[x])) co++;
    }
    return co;
}

int main() {
string word;
getline(cin,word);
int num = co(word);
int sp = count(word);
int length = word.length();
if(num < 2 || sp < 2 || length < 7)
cout<<"Weak";
else
cout<<"Strong";
    return 0;
}
