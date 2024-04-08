#include<stdio.h>
int main(){
    long long N;
    scanf("%lld",&N);
    long long ans = 0;
    long long t = 5;
    while(t <= N){
        ans = ans + N/t;
        t = t*5;
    }
    printf("%lld",ans);
}