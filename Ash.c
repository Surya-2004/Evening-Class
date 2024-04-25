#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    char s[100];
    scanf("%s",s);
    int mul = 1;
    int dec = 0;
    for(int i=n-1; i>=0; i--){
        dec += mul*((int)(s[i]-'0'));
        mul *= 2;
    }
    long ans = 0;
    for(int i=dec; i>=1; i--){
        int num = i;
        int bitMask = 1;
        int zero = 0;
        while(num != 0){
            if((num&bitMask) == 0)
                zero++;
            num >>= 1;
        }
        ans = (ans + (((long)pow(2, zero)%10000000007) - 1))%10000000007;
    }

    printf("%ld", ans*2);
}