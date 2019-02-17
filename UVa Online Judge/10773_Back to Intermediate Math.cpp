#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double u, v, d, t1, t2;
	int t, i;
	scanf("%d", &t);
	for(i=1; i<=t; i++){
	scanf("%lf %lf %lf", &d, &v, &u);
         if(v>=u || u==0 || v==0){
            printf("Case %d: can't determine\n",i);
            continue;
        }
        
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        
        printf("Case %d: %.3lf\n",i,fabs(t2-t1));
		
	}
	
	return 0;
}
