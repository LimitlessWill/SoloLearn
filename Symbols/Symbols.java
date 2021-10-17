import java.util.Scanner;

public class Program
{
public static String re(String str)
{
int strz = str.length();
String res = "";
for(int x = 0; x < strz;x++)
if(Character.isLetter(str.charAt(x)) || Character.isDigit(str.charAt(x)) || str.charAt(x) == ' ')
res += str.charAt(x);

return res;
}
 public static void main(String[] args)
{
Scanner input = new Scanner(System.in);
String msg = input.nextLine();
System.out.print(re(msg));
}
}
