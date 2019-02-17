#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int a,ax,ay,bx,by,cx,cy,dx,dy,i,q;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=cx+ax-bx;
        dy=cy+ay-by;
        q=.5*abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        printf("Case %d: %d %d %d\n",i+1,dx,dy,q);
    }
	return 0;
}