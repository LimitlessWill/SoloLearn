using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
    public static string de(string str)
    {
        int strz = str.Length;
        char[] tmp = str.ToCharArray();
        Array.Reverse(tmp);
        
        string res = "";
        foreach(char x in tmp)
        {
        if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') || x == ' ')
            res += x;
        }
        
        return res;
    }
        static void Main(string[] args)
        {
     string msg = Console.ReadLine();
     Console.Write(de(msg));
        }
    }
}
