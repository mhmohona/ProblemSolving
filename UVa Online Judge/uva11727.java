import java.util.*;
public class uva11727{
  public static void main(String []args){
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    int count=1;
     while(sc.hasNextLong()){
      long a=sc.nextLong();
      long b=sc.nextLong();
      long c=sc.nextLong();
      if(a<b && a>c)
        System.out.println("Case "+count+": " +a);
      else if(b<a && b>c)
        System.out.println("Case "+count+": " +b);
      else if(c<a && c>b)
        System.out.println("Case "+count+": " +c);
//      if((a>b && a<c) || (a>c && a<b))
//        System.out.println("Case "+count+": " +a);
//      else if((b>a && b<c) || (b>c && b<a))
//       System.out.println("Case "+count+": "+b);  
//      else if((c>b && c<a) || (c>a && c<b))
//         System.out.println("Case "+count+": "+a);
       count++;
    } 
    }
  }

    