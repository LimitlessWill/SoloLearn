import java.util.Scanner;
public class Program
{
static public String chk(String str)
{
    int s = str.length();
    int m,t,g;
    m = t = g = 0;
    for(int x=0;x< s;++x)
    {
         if(str.charAt(x) == '$') m = x;
    else if(str.charAt(x) == 'T') t = x;
    else if(str.charAt(x) == 'G') g = x;
    }
    //looking for $ , T
    int max,min;
    if(m < t) {max = t;min = m;}
    else {max = m; min = t;}
    
 if(g >= min && g <= max) return "quiet";

 return "ALARM";
}
    public static void main(String[] args) 
    {
   Scanner inp = new Scanner(System.in);
   String word = inp.nextLine();
   System.out.print(chk(word));
    }
}
