import java.util.Scanner;
import java.lang.Math;

public class Program
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int houses = input.nextInt();
        
        //your code goes her
        
int x = (int) Math.ceil((2.0/houses)*100);
       
System.out.println(x);
    }
}
