import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int sc = in.nextInt();
    int tic = in.nextInt();
    if((sc/12)>=tic)
    System.out.println("Buy it!");
    else
    System.out.println("Try again");
        
    }
}
