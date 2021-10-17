using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
public static string re(string str)
{
int strz = str.Length;
string res="";
foreach(char x in str)
if(Char.IsLetter(x) || Char.IsDigit(x) || x == ' ')
res += x;
return res;
}
        static void Main(string[] args)
        {
      string msg = Console.ReadLine();
      Console.Write(re(msg));
        }
    }
}
