#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    while(scanf("%d",&tc)==1){
        int arr[5];
        int c =0 ;
        for(int i = 0 ; i < 5; i ++ ){
            scanf("%d",&arr[i]);
            if(tc == arr[i]){
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

