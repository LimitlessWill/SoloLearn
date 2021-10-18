import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
 Scanner input = new Scanner(System.in);
 String link = input.nextLine();
 int x=link.indexOf("e/");
 int xx=link.indexOf("v=");
 if(x>0)
 System.out.print(link.substring(x+2));
 if(xx>0)
 System.out.print(link.substring(xx+2));
 }
}
