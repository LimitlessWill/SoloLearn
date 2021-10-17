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
            int sc = Int32.Parse(Console.ReadLine());
            int tic = Int32.Parse(Console.ReadLine());
            if((sc/12)>=tic)
            Console.WriteLine("Buy it!");
            else
            Console.WriteLine("Try again");
            
        }
    }
}
