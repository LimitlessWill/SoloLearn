#include <iostream>
using namespace std;

int main() {
    int siblings, popsicles;
    //take input
    cin>>siblings>>popsicles;

    //your code goes here
    
if((popsicles % siblings)==0)
    cout<<"give away";
    else
    cout<<"eat them yourself";
    return 0;
}
