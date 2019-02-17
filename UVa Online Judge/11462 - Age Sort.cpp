#include <bits/stdc++.h>
using namespace std;


int a[105];

int main()
{
    int n, x, i, cnt;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            scanf("%d", &x);
            a[x]++;
        }
        cnt=0;
        for(i=1; i<=100; i++)
        {
            while(a[i])
            {
                printf("%d", i);
                cnt++;
                if(cnt!=n)
                    printf(" ");
                a[i]--;
            }
        }
        printf("\n");
    }
    return 0;
}
