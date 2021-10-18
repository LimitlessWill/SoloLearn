using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Sololearn
{
    class Program
    {
public static int sort(char str,string[] others)
{
    char[] all = new char[5];
    for(int x = 0; x< 4;++x)
    all[x] = others[x][0];
    all[4] = str;

    int id = -1;
    for(int x = 0 ; x < 5 ; ++x)
    {
       for(int i = x+1; i < 5 ; ++i)
       {
        char swap;
        if(all[x] > all[i])
        {
            swap = all[i];
            all[i] = all[x];
            all[x] = swap;
        }
       }
       if(all[x] == str) id = x;
    }
    return id;
}
        static void Main(string[] args)
        {
    string name = Console.ReadLine();
int agent = Convert.ToInt32(Console.ReadLine());
string[] others = Console.ReadLine().Split();
int pos = sort(name[0],others);
int time = pos/agent*20+20;
Console.Write(time);
        }
    }
}
