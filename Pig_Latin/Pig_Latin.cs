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
string[] sen = Console.ReadLine().Split();
foreach(string x in sen)
 Console.Write(x.Substring(1)+x[0]+"ay ");
        }
    }
}
