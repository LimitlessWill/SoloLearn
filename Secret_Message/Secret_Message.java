import java.util.Scanner;

public class Program
{
public static String de(String str)
{
String res= "";
for(char x : str.toCharArray())
{
if(Character.isLetter(x))
res += (char)((122-Character.toLowerCase(x))+97);
else res += x;
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
