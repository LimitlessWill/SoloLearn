import java.util.Scanner;

public class Program
{
public static boolean dub(String str)
{
    int strz = str.length();
    for(int x=0;x<strz;++x)
    {
        for(int i=x+1;i<strz;i++)
        {
  if(str.charAt(i) == str.charAt(x)) return true;
        }
    }
    return false;
}
 public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        String word = inp.nextLine();
        if (dub(word))
        System.out.print("Deja Vu");
        else
        System.out.print("Unique");
    }
}
