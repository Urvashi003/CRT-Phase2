#include<bits/stdc++.h>
using namespace std;

int fibo(int n,vector<int> &dp){
    if(n==0) return 0;
    if(n==1) return 1;
    //bc ke baad
    if(dp[n] != -1) return dp[n];
    int a = fibo(n-1,dp);
    int b = fibo(n-2,dp);
    return dp[n]= a+b; 
}

int main(){
    int n=5;
    vector<int>dp(n+1, -1);
    // cout<<fibo(n,dp);
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=2; i<=n; i++){
    //     int a = dp[i-1];
    //     int b = dp[i-2];
    //     dp[i]= a+b;
        
    // }
    // cout<<dp[n];
    int prev2=0;
    int prev1 = 1;
    for(int i=2; i<=n; i++){
        int a = prev1+prev2;
        prev2 = prev1;
        prev1= a;
    }
    cout<<prev1;
}