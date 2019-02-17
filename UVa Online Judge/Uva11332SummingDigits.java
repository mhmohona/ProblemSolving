import java.util.Scanner;
public class Uva11332SummingDigits{
  public static void main(String []args){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int sum=0;
     String s=""+n;
    while(sc.hasNext()){
      if(n==0)
        break;
      else{
      for(int i=0; i<s.length(); i++){
          n=n%10;
         sum=sum+n;
        }
        
      }
    }
  }
}