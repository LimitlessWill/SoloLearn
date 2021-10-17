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
            int sal = Convert.ToInt32(Console.ReadLine()) * 3;
if(sal == 21)
Console.Write("Broke Even");
else if (sal < 21)
Console.Write("Loss");
else
Console.Write("Profit");
        }
    }
}
