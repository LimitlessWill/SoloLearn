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
    int ct,co;
    double tax;
    
    co = Convert.ToInt32(Console.ReadLine());
    
    ct = (co*5)+40;
    
    tax = Math.Ceiling(10.00/100.00*ct);
    
    Console.WriteLine((ct + tax));
        }
    }
}
