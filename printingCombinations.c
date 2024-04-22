#include <stdio.h>
#include <stdbool.h>
void isSubsetSum(int arr[], int N, int i, int ans[], int k){
    if(i == N){
        if(k == 3){
            for(int j=0; j<k; j++){
                printf("%d ",ans[j]);
            }
            printf("\n");
        }
        return;
    }
    ans[k] = arr[i];
    isSubsetSum(arr, N, i+1, ans, k+1);
    isSubsetSum(arr, N, i+1, ans, k);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N], ans[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    isSubsetSum(arr, N, 0, ans, 0);
}