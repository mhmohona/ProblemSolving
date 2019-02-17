#include <bits/stdc++.h>
using namespace std;

int main(){

    long long a, b, rem_a, rem_b, add, carry;
    while(scanf("%lld%lld", &a, &b)==2){
        if(a==0 && b==0)
            break;
        carry=0;
        add=0;
        while(a>0 || b>0)
        {
            rem_a = a%10;
            a = a/10;
            rem_b = b%10;
            b = b/10;
            if((rem_a+rem_b)+add>9){
               carry++;
                add=1;
            }
            else
                add=0;
        }
        if(carry==0)
              printf("No carry operation.\n");
        else if(carry==1)
            printf("%lld carry operation.\n", carry);
        else
             printf("%lld carry operations.\n", carry);
}
    return 0;
}