#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
 
int L, N, c[52], memo[52][52];
 
int cut(int left, int right){
     if(left + 1 == right) return 0;
     if(memo[left][right] != -1) return memo[left][right];
     int cost = 1<<30;
     for(int i = left + 1; i < right; i++)
          cost = min(cost, cut(left, i) + cut(i, right) + (c[right] - c[left]));
     return memo[left][right] = cost;
}
 
int main(){
     while(scanf("%d %d", &L, &N) == 2){
          c[0] = 0; c[N + 1] = L;
          for(int i = 1; i <= N; i++) scanf("%d", &c[i]);
          memset(memo, -1, sizeof(memo));
          printf("The minimum cutting is %d.\n", cut(0, N + 1));
     }
}