import java.util.Scanner;

public class Program
{
public static String months(String month)
{
    if(month.equals("January"))
    return "1";
    else if(month.equals("February"))
    return "2";
    if(month.equals("March"))
    return "3";
    else if(month.equals("April"))
    return "4";
    if(month.equals("May"))
    return "5";
    else if(month.equals("June"))
    return "6";
    if(month.equals("July"))
    return "7";
    else if(month.equals("August"))
    return "8";
    if(month.equals("September"))
    return "9";
    else if(month.equals("October"))
    return "10";
    if(month.equals("November"))
    return "11";
    else if(month.equals("December"))
    return "12";
    else return "";
}
 public static void main(String[] args) 
 {
 Scanner input = new Scanner(System.in);
 String us = input.nextLine();
 if(Character.isLetter(us.charAt(0)))
          {
String [] tmp = us.split(" ");
String month = months(tmp[0]);
String day = tmp[1].substring(0,tmp[1].length()-1);
String year = tmp[2];
 System.out.print(day+"/"+month+"/"+year);
          }else
{
    String [] tmp = us.split("/");
    String month = tmp[0];
    String day = tmp[1];
    String year = tmp[2];
System.out.print(day+"/"+month+"/"+year);
}
 }
}
