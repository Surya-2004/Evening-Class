#include <stdio.h>
#include <stdbool.h>
#define MAX(A,B) (A) > (B) ? (A) : (B)
int max = 0;
void maxXor(int arr[], int N, int i, int c, int xor){
    if(i == N || c >= N/2){
        max = MAX(xor, max);
        return;
    }
    max = MAX(xor, max);
    maxXor(arr, N, i+1, c+1, xor ^ arr[i]);
    maxXor(arr, N, i+1, c, xor);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    maxXor(arr, N, 0, 0, 0);
    printf("%d", max);
}