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
            int yards = Int32.Parse(Console.ReadLine());
            if(yards > 10)
             Console.WriteLine("High Five");
             else if(yards < 1)
             Console.WriteLine("shh");
             else
             {
                 for(int i=0; i<yards;i++)
                 Console.WriteLine("Ra!");
             }
        }
    }
}
