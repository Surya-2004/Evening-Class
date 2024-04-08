#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int mat[n][n];
    int len = floor(log10(n*n)) + 1;
    int u=0, b=n-1, l=0, r=n-1, val=n*n;
    if((n&1) == 0){
        while(val > 0){
            for(int i=l; i<=r; i++){
                mat[b][i] = val--;
            }
            b--;
            for(int i=b; i>=u; i--){
                mat[i][r] = val--;
            }
            r--;
            for(int i=r; i>=l; i--){
                mat[u][i] = val--;
            }
            u++;
            for(int i=u; i<=b; i++){
                mat[i][l] = val--;
            }
            l++;
        }
    }else{
        while(val > 0){
            for(int i=r; i>=l; i--){
                mat[u][i] = val--;
            }
            u++;
            for(int i=u; i<=b; i++){
                mat[i][l] = val--;
            }
            l++;
            for(int i=l; i<=r; i++){
                mat[b][i] = val--;
            }
            b--;
            for(int i=b; i>=u; i--){
                mat[i][r] = val--;
            }
            r--;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%*d ",len,mat[i][j]);
        }
        printf("\n");
    }
}