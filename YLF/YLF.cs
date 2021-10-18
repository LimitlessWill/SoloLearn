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
   string link = Console.ReadLine();
   int x = link.IndexOf("e/");
   int xx = link.IndexOf("v=");
   if(x>0) 
   Console.Write(link.Substring(x+2));
   if(xx>0)
   Console.Write(link.Substring(xx+2));
         
        }
    }
}
