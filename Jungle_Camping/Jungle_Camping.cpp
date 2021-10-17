#include <iostream>
#include <string>
using namespace std;
string sta(string& n);
int main()
{
    string in,out;
    while(cin>>in)
    {
     out += sta(in)+" ";
    }
    cout<<out;
}

string sta(string & n)
{
    if(n == "Grr")
    {
      return "Lion";
    }
    if(n == "Rawr")
    {
      return "Tiger";
    }
    if(n == "Ssss")
    {
      return "Snake";
    }
    if(n == "Chirp")
    {
      return "Bird";
    }
    return "";
}
