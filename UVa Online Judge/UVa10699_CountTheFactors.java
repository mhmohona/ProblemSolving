import java.util.*;
public class uva_10083Division{
  public static void main(String []args){
    Scanner sc=new Scanner(System.in);
   while(sc.hasNextLong()){
     long t=sc.nextLong();
    long a=sc.nextLong();
    long b=sc.nextLong();
     long sum=(t^a ? 1)/(t^b ? 1);
     string s=""+sum;
  if(s.length<100)
    System.out.println(sum);
  else
    System.out.println("is not an integer with less than 100 digits");
   }
  }
}