using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
  public static string de(string str)
{
string res ="";
    foreach(Char x in str)
    {
     if(Char.IsLetter(x))
 res += Convert.ToChar((122-Char.ToLower(x))+97);
 else res += x;
    }
    return res;
}
        static void Main(string[] args)
        {
      string msg = Console.ReadLine();
      Console.Write(de(msg));
        }
    }
}
