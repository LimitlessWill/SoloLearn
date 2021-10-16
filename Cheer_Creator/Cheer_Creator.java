import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     int yards = input.nextInt();
     if(yards > 10)
     System.out.println("High Five");
     else if(yards < 1)
     System.out.println("shh");
     else { 
     for(int x=0;x<yards;x++)
     System.out.println("Ra!");
      }
    }
}
