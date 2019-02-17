#include <bits/stdc++.h>
using namespace std;
    int t;
    long long i;
long long num[1000001];
 //    typeof unsined long long ll;
    bool func(long long val,long long amt){
    long long sum=0;
        for(int i=0;i<t;i++){
            if(num[i]>val){
                sum+=(num[i]-val);
            }
        }
        return sum>=amt;
    }
int main() {
    scanf("%d%lld",&t,&i);
    for(int x=0;x<t;x++)
    scanf("%lld",&num[x]);
    
    sort(num,num+t);
    long long mx=num[t-1];
long long lo=0; 
long long hi=mx+10;
     while((hi-lo)>1){
     long long mid=(hi+lo)/2;
         if(func(mid,i))
     lo=mid;
         else hi=mid;
         
     }
long long ans=(hi+lo)/2;
    printf("%lld",ans);
    
    return 0;
}