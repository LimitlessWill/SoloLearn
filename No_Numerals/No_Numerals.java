import java.util.Scanner;
public class Program
{
public static String to(String str)
{
if(str.equals("0"))
   return "zero";
   else if(str.equals("1"))
   return "one";
   else if(str.equals("2"))
   return "two";
   else if(str.equals("3"))
   return "three";
   else if(str.equals("4"))
   return "four";
   else if(str.equals("5"))
   return "five";
   else if(str.equals("6"))
   return "six";
   else if(str.equals("7"))
   return "seven";
   else if(str.equals("8"))
   return "eight";
   else if(str.equals("9"))
   return "nine";
   else if(str.equals("10"))
   return "ten";
return str;
}
public static void main(String[] args)
{
Scanner input = new Scanner(System.in);
String [] msg = input.nextLine().split(" ");
for(String x : msg)
{
    System.out.print(to(x)+" ");
}
}
}
