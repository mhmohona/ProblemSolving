#include <bits/stdc++.h>
using namespace std;

int main() {
	 double sum[1000008]; 
double res;  
        int c, n, a, i;  
        int num = 1;  
        memset(sum, 0, sizeof(sum));  
        for(i = 1; i < 1000008; i++)  
            sum[i] = sum[i-1]+log(i);  
        scanf("%d", &c);  
        while(c--)  
        {  
            scanf("%d %d", &n, &a);  
            if(n == 0) printf("Case %d: 1\n", num++);  
            else  
            {  
                res = sum[n];  
                res = res/log(a)+1;  
                printf("Case %d: %d\n", num++, (int)res);  
            }  
        }  
        return 0;  
    }  