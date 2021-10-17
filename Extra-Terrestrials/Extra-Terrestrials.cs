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
            string str = Console.ReadLine();
char[] out1 = str.ToCharArray();
Array.Reverse(out1);
Console.WriteLine(out1);
        }
    }
}
