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
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum = sum + arr[j][i];
        }
        printf("%d ",sum);
    }
}