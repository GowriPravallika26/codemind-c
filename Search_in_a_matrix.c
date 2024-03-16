#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    scanf("%d",&k);
    int count;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == k){
                count = 1;
            }
        }
    }
    if(count == 1){
        printf("1");
    }
    else{
        printf("0");
    }
}