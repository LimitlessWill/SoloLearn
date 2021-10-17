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
            int cr = Convert.ToInt32(Console.ReadLine());
if(cr < 5)
Console.WriteLine("I got this!");
else if (cr >4 && cr < 11)
Console.WriteLine("Help me Batman");
else
Console.WriteLine("Good Luck out there!");

        }
    }
}
