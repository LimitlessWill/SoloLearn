import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
Scanner in = new Scanner(System.in);
int sal = in.nextInt();
if(sal*3 == 21)
System.out.println("Broke Even");
else if(sal * 3 < 21)
System.out.println("Loss");
else
System.out.println("Profit");        
    }
}
