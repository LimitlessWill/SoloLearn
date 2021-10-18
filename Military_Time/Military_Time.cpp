#include <iostream>
using namespace std;

int main() {
char hr[4] = "";
char mn[4] ="";
char del[4] = "";

cin.getline(hr,4,':');
cin>>mn;
cin>>del;

if(string(del) == string("PM"))
{
    int t = atoi(hr) + 12 ;
    cout<<t<<":"<<mn;
}
else
cout<<hr<<":"<<mn;
    return 0;
}
