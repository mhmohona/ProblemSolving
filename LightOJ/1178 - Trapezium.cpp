#include <bits/stdc++.h>
using namespace std;

int main() {
	
double a,b,c,d,p,r;
    int t, i;
    i=1;
    scanf("%d",&t);
   while(t--){
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        p=(a+c)/(4.0*abs(c-a));
        r=p*sqrt((-a+c+b+d)*(a-c+b+d)*(a-c+b-d)*(a-c-b+d));
        printf("Case %d: %.10lf\n",i,r);
        i++;
    }
    return 0;
}