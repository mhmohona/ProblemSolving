#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,num,son,sum;
    int i,j,k,l;
    double real;
    char str[10004],a,b,s;
    typedef struct news
    {
        char ch[102];
        int  val[102];
    }news;
    news cal;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%c",&num,&a);
        for(j=0;j<num;j++)
         scanf("%c %d%c",&cal.ch[j],&cal.val[j],&s);
         scanf("%d%c",&son,&b);
         sum = 0;
         for(k=1;k<=son;k++)
         {
             gets(str);
             for(j=0;j<num;j++)
             {
                 for(l=0;str[l];l++)
                 {
                    if(str[l]==cal.ch[j])
                    sum+=cal.val[j];
                 }

             }
         }
         real = (double)sum/100;
         printf("%.2lf$\n",real);
    }
    return 0;
}
