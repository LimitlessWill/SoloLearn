using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int ps,dl;
ps = Convert.ToInt32(Console.ReadLine());
dl = Convert.ToInt32(Console.ReadLine());
if(ps * 0.02 < dl)
Console.WriteLine("Pesos");
else
Console.WriteLine("Dollars");
        }
    }
}
