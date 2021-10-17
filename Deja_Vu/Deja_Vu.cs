using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
  public static bool dub(string str)
{
    int strz = str.Length;
    
    for(int x=0;x<strz;++x)
    {
        for(int i=x+1;i<strz;i++)
        {
      if(str[i] == str[x]) return true;
        }
    }
    return false;
}
        static void Main(string[] args)
        {
            string word = Console.ReadLine();
            if(dub(word))
            Console.Write("Deja Vu");
            else
Console.Write("Unique");
        }
    }
}
