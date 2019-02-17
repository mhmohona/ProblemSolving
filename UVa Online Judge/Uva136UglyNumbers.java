public class Uva136UglyNumbers{
  public static void main(String []args){
    int c=0;
     int count=0;
     int t=0;
     int a=1;
     while(t<1){
     if(a%2==0 || a%3==0 || a%5==0){
     if(count==1500){
        System.out.print(a);
        break;
        }
    else
       count++;
     }
     t++;
      }
  }
}