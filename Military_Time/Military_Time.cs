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
string[] line = Console.ReadLine().Split();
    string[] tm = line[0].Split(":");
    if(line[1] == "PM")
        Console.Write(Convert.ToString(Convert.ToInt32(tm[0])+12)+":"+tm[1]);
        else
Console.Write(tm[0]+":"+tm[1]);
        }
    }
}
