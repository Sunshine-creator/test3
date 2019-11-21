
package geyqeqru.java;
import java.util.*;
public class GeyqeqruJava {
    public static void main(String[] args) {
      Scanner input =  new Scanner (System.in);
      System.out.print(" enter a number :");
      long number = input.nextLong();
      System.out.print(number+ "的各位数字之和为：" + sumDigits(number));
    }
    public static int sumDigits(long number)
{
      if(number <9)
       {
         return number;
        }
      else
        return (number /10) + (number %10);
}



   
    

