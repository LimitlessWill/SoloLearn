#include <iostream>
using namespace std;

int sort(char str,string others[4])
{
    string all(4,4);
    for(int x = 0;x<4;++x)
    all[x] = others[x][0];
    all += str;

    int id = -1;
    for(int x = 0 ; x < 5 ; ++x)
    {
       for(int i = x+1; i < 5 ; ++i)
       {
        char swap;
        if(all[x] > all[i])
        {
            swap = all[i];
            all[i] = all[x];
            all[x] = swap;
        }
       }
       if(all[x] == str) id = x;
    }
    return id;
}

int main() {
string name;
cin>>name;
int agent;
cin>>agent;
string others[4];
for(int x= 0; x<4 ;++x)
{
    cin>>others[x];
}
int pos = sort(name[0],others);
int time = pos/agent*20+20;
cout<<time;
    return 0;
}
