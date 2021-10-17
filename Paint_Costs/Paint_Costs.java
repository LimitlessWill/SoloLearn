import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
    int ct=0;
    long tax=0;
    
Scanner input = new Scanner(System.in);
    int co = input.nextInt();
    
    ct=(co*5)+40;
    
    tax= Math.round(10.00/100.00*ct);
    
    System.out.println(tax + ct);
    }
}
