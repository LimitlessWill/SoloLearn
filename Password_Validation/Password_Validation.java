import java.util.Scanner;
public class Program
{
public static int count(String str)
{
    int counter =0;
    int s = str.length();
    String sp = "!@#$%&*";
    for(int x=0;x<s;++x)
    {
    for(int i =0;i<7;++i)
    {
   if(str.charAt(x) == sp.charAt(i)) counter++;
    }
    }
    return counter;
}
public static int co(String str)
{
    int co = 0;
    int s = str.length();
    for(int x= 0; x<s;++x )
    {
   if(Character.isDigit(str.charAt(x))) co++;
    }
    return co;
}
public static void main(String[] args) {
Scanner inp = new Scanner(System.in);
String word = inp.nextLine();
int num = co(word);
int sp = count(word);
int len = word.length();
if(num < 2 || sp < 2 || len < 7)
System.out.print("Weak");
else
System.out.print("Strong");
        
    }
}
