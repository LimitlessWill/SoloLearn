import java.util.Scanner;

public class Program
{
public static void main(String[] args) 
{
Scanner input = new Scanner(System.in);
String [] line =input.nextLine().split(" ");
String [] tm = line[0].split(":");

if(line[1].equals("PM"))
{
int t = Integer.parseInt(tm[0])+12;
System.out.print(t+":"+tm[1]);
}else
System.out.print(tm[0]+":"+tm[1]);
}
}
