import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int ps = in.nextInt();
        int dl = in.nextInt();
        if(ps * 0.02 < dl)
        System.out.println("Pesos");
        else
        System.out.println("Dollars");
    }
}
