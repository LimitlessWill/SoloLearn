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
int num = Convert.ToInt32(Console.ReadLine());
int sum =0;
for(int x=0;x<num;x++)
{
int tmp = Convert.ToInt32(Console.ReadLine());
sum += (tmp%2)== 0 ? tmp: 0;
}
Console.Write(sum);
        }
    }
}
