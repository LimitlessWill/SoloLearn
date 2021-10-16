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
            int houses;
            houses = Convert.ToInt32(Console.ReadLine());
            
            //your code goes here
            double x = Math.Ceiling((2.0/houses)*100); 
     Console.WriteLine(x);
        }
    }
}
