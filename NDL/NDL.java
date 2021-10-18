import java.util.Scanner;
public class Program
{
public static int sort(char str,String[] others)
{
    char[] all = new char[5];
    for(int x = 0; x< 4;++x)
    all[x] = others[x].charAt(0);
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

public static void main(String[] args) 
{
Scanner inp = new Scanner(System.in);
String name = inp.nextLine();
int agent = Integer.parseInt(inp.nextLine());
String[] others = inp.nextLine().split(" ");
int pos = sort(name.charAt(0),others);
int time = pos / agent * 20 + 20;
System.out.print(time);
}
}
