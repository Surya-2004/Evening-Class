#include <stdio.h>
#include <stdbool.h>
bool isSubsetSum(int arr[], int N, int i, int sum, int target){
    if(sum == target){
        return true;
    }
    if(i == N || sum > target){
        return false;
    }
    return isSubsetSum(arr, N, i+1, sum + arr[i], target) || isSubsetSum(arr, N, i+1, sum, target);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    printf("%d", isSubsetSum(arr, N, 0, 0, target));
}