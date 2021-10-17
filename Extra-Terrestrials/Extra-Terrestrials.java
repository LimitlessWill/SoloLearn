import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       String str = in.next();
       StringBuilder out = new StringBuilder();
       out.append(str);
       System.out.println(out.reverse()); 
    }
}
