import java.util.*;
import java.math.BigInteger;
public class uva_10083Division{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    while(sc.hasNextInt()){
      int t = sc.nextInt();
      int a = sc.nextInt();
      int b = sc.nextInt();

      System.out.printf("(%d^%d-1)/(%d^%d-1) ", t, a, t, b);

      // solution is not infinity
      if(t == 1){
        System.out.println("is not an integer with less than 100 digits.");
        continue;
      }

      // is not integer
      if(a % b != 0){
        System.out.println("is not an integer with less than 100 digits.");
        continue;
      }

      // is one 
      if(a == b){
        System.out.println("1");
        continue;
      }

      // not less than 100 digits
      if((a - b) * Math.log10(t) > 99.0){
        System.out.println("is not an integer with less than 100 digits.");
        continue;
      }

      //main calculation
      BigInteger t_bi = new BigInteger(Integer.toString(t));
      BigInteger one = BigInteger.ONE;
      BigInteger sum =
        t_bi.pow(a).subtract(one).divide(t_bi.pow(b).subtract(one));

      if(sum.toString().length() >= 100)
        System.out.println("is not an integer with less than 100 digits.");
      else
        System.out.println(sum);
    }
  }
}