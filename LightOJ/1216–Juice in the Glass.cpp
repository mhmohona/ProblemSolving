#include <bits/stdc++.h>

	using namespace std;
 
    int main(){
    		// your code goes here
        int t,i,r1,r2,h,p;
        double R,V;
        scanf("%d",&t);
i=1;
        while(t--) {
                scanf("%d%d%d%d",&r1,&r2,&h,&p);
                R = r2+ (r1-r2)*((double)(p)/h);
                V = ((M_PI*p)*(R*R+R*r2+r2*r2))/3.0;
                printf("Case %d: %lf\n",i+1,V);


                }
        return 0;


        }
