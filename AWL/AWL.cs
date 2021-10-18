using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
class Program
{
public static double co(string str)
{
    int totalsize = str.Length;
    int word = 0;
    int letters = 0;
    for(int x =0;x <totalsize;x++)
    {
   if(str[x] == ' ')
        word++;
   else if(Char.IsLetter(str[x]))
        letters++;
    }
  double avg = Convert.ToDouble(letters)/(word+1);

  return Math.Ceiling(avg);
}
        static void Main(string[] args)
        {
     string sen =  Console.ReadLine();
     Console.Write(co(sen));
        }
    }
}
