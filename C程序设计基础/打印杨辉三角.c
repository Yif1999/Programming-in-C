#include<stdio.h>
 
int main(){
    const int maxn = 10;
    int ans[maxn][maxn];
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-i-1;j++){
            printf(" ");
        }
        for(int j = 0;j < i+1;j++){
            if(i >= 2 && (j >= 1 && j < i)){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
            else{
                ans[i][j] = 1;
            }
 
            printf("%4d",ans[i][j]);
 
        }
            printf("\n");
 
    }
    return 0;
}
