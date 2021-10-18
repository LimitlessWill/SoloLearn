#include <iostream>
using namespace std;
string months(string month)
{
    if(month =="January")
    return "1";
    else if(month == "February")
    return "2";
    if(month == "March")
    return "3";
    else if(month == "April")
    return "4";
    if(month == "May")
    return "5";
    else if(month == "June")
    return "6";
    if(month == "July")
    return "7";
    else if(month == "August")
    return "8";
    if(month == "September")
    return "9";
    else if(month == "October")
    return "10";
    if(month == "November")
    return "11";
    else if(month == "December")
    return "12";
    else return "";
}
int main() {
string us = "";
getline(cin,us);
if(isalpha(us[0]))
{
int space = us.find(" ")+1;
int comma =us.find(", ")+1;
string month = us.substr(0,space-1);
string day = us.substr(space,comma-space-1);
string year = us.substr(comma+1);
cout<<day<<"/"<<months(month)<<"/"<<year;
}else
{
int slash1 = us.find("/");
int slash2 = us.rfind("/");
string month = us.substr(0,slash1);
string day = us.substr(slash1+1,slash2-slash1-1);
string year = us.substr(slash2+1);
cout<<day+"/"+month+"/"+year;
}
    return 0;
}
