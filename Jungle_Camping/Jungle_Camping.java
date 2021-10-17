import java.util.Scanner;

public class Program
{
  public static void main(String[] args) 
{
    Scanner m = new Scanner(System.in);
    String n = m.nextLine();
    String[] t = n.split(" ");
    for(var x : t)
    {
    System.out.print(sta(x)+" ");
    }
}
public static String sta(String n)
{
    if(n.equals("Grr"))
    {
      return "Lion";
    }
    if(n.equals("Rawr"))
    {
      return "Tiger";
    }
    if(n.equals("Ssss"))
    {
      return "Snake";
    }
    if(n.equals("Chirp"))
    {
      return "Bird";
    }
    return "";
}
}
