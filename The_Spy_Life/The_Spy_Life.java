import java.util.Scanner;

public class Program
{
public static String de(String str)
{
int strz = str.length();
String res ="";
for(int x =0;x<strz;x++)
{
int dx = strz-x-1;
if((str.charAt(dx) >= 'a' && str.charAt(dx) <= 'z') || (str.charAt(dx) >= 'A' && str.charAt(dx) <= 'Z') || str.charAt(dx) == ' ')
res += str.charAt(dx);
}
return res;
}
 public static void main(String[] args) 
{
  Scanner input = new Scanner(System.in);
  String msg = input.nextLine();
  System.out.print(de(msg));
}
}
