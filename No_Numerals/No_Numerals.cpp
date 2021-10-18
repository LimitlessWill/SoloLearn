#include <iostream>
using namespace std;

string to(string str)
{
if(str == "0")
   return "zero";
   else if(str == "1")
   return "one";
   else if(str == "2")
   return "two";
   else if(str == "3")
   return "three";
   else if(str == "4")
   return "four";
   else if(str == "5")
   return "five";
   else if(str == "6")
   return "six";
   else if(str == "7")
   return "seven";
   else if(str == "8")
   return "eight";
   else if(str == "9")
   return "nine";
   else if(str == "10")
   return "ten";
return str;
}

int main() {
string msg = "";
while(cin>>msg)
cout<<to(msg)<<" ";
    return 0;
}
