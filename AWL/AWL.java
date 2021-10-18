import java.util.Scanner;

public class Program
{
public static int co(String str)
{
    int totalsize = str.length();
    int word = 0;
    int letters = 0;
    for(int x =0;x <totalsize;x++)
    {
   if(str.charAt(x) == ' ')
        word++;
else if(Character.isLetter(str.charAt(x)))
        letters++;
    }
  double avg = Double.valueOf(letters)/(word+1);
  int res = (int)Math.ceil(avg);
  return res;
}
 public static void main(String[] args)
  {
     Scanner in = new Scanner(System.in);
     System.out.print(co(in.nextLine()));
  }
}
