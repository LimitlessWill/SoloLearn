import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int cr = in.nextInt();
if(cr < 5)
System.out.println("I got this!");
else if (cr >4 && cr < 11)
System.out.println("Help me Batman");
else
System.out.println("Good Luck out there!");
    }
}
