using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
static public string chk(string str)
{
    int s = str.Length;
    int m,t,g;
    m = t = g = 0;
    for(int x=0;x< s;++x)
    {
        if(str[x] == '$') m = x;
        else if(str[x] == 'T') t = x;
        else if(str[x] == 'G') g = x;
    }
    //looking for $ , T
    int max,min;
    if(m < t) {max = t;min = m;}
    else {max = m; min = t;}
    
 if(g >= min && g <= max) return "quiet";

 return "ALARM";
}
        static void Main(string[] args)
        {
  string word = Console.ReadLine();
  Console.Write(chk(word));
        }
    }
}
