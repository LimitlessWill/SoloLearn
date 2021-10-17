import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
  Scanner input = new Scanner(System.in);
  String [] sen = input.nextLine().split(" ");
  for(String x : sen)
  {
  System.out.print(x.substring(1)+x.charAt(0)+"ay ");
  
  }
}
}
