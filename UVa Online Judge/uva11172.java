import java.util.*;
public class uva11172{
  public static void main(String []args){
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
     while(sc.hasNextLong()){
      long a=sc.nextLong();
      long b=sc.nextLong();
      if(a<b)
        System.out.println("<");
       else if(a>b)
       System.out.println(">");  
       else
         System.out.println("=");
    } 
    }
  }

    