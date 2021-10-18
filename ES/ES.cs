using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
class Program
{
public static string months(string month)
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
        static void Main(string[] args)
        {
          string us = Console.ReadLine();
          if(Char.IsLetter(us[0]))
          {
  string month = months(us.Split()[0]);
string day = us.Split()[1].TrimEnd(',');
string year = us.Split()[2];
        Console.Write(day+"/"+month+"/"+year);
          }else
{
    string [] tmp = us.Split("/");
    string month = tmp[0];
    string day = tmp[1];
    string year = tmp[2];
    Console.Write(day+"/"+month+"/"+year);
}
        }
    }
}
