#include<stdio.h>
int fibo(int N, int dp[]){
    if(N == 1 || N == 2){
        return 1;
    }
    if(dp[N-1] != -1){
        return dp[N-1];
    }
    dp[N-1] = fibo(N-1, dp) + fibo(N-2, dp);
    return dp[N-1];
}
int main(){
    int n;
    scanf("%d",&n);
    int dp[n];
    for(int i=0; i<n; i++){
        dp[i] = -1;
    }
    printf("%d",fibo(n, dp));
}