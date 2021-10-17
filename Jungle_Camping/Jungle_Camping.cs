using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
       string []n = Console.ReadLine().Split();
       foreach(string x in n)
       {
       Console.Write(sta(x)+" ");
       }
        }
public static string sta(string n)
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
    }
}
