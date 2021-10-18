using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
class Program{
public static int count(string str)
{
    int counter =0;
    int s = str.Length;
    string sp = "!@#$%&*";
    for(int x=0;x<s;++x)
    {
    for(int i =0;i<7;++i)
    {
    if(str[x] == sp[i]) counter++;
    }
    }
    return counter;
}
public static int co(string str)
{
    int co = 0;
    int s = str.Length;
    for(int x= 0; x<s;++x )
    {
        if(Char.IsDigit(str[x])) co++;
    }
    return co;
}
        static void Main(string[] args)
        {
        string word = Console.ReadLine();
        int num = co(word);
        int sp = count(word);
        int len = word.Length;
        if(num < 2 || sp < 2 || len < 7)
        Console.Write("Weak");
        else
        Console.Write("Strong");
        }
    }
}
