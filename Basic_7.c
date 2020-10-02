// TASK
// Write code to reverse a string.
// Code Below
import java.util.*;

public class str_rev
{
  public static void main(String[] args)
  { 
   String s="Shubham";
   char[] ch=s.toCharArray();
   for(int i=ch.length-1;i>=0;i--)
   {
    System.out.print(ch[i]);
   }
  }
}
   
