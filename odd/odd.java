import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int num = input.nextInt();
    int sum= 0;
    for(int x =0 ; x < num ; x++)
    {
    int tmp = input.nextInt();
    sum += (tmp%2)==0 ? tmp : 0 ;
    }
    System.out.print(sum);
}
}
