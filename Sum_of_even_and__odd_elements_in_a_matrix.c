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
    int even = 0;
    int odd = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] % 2 == 0){
                even = even + arr[i][j];
            }
            else{
                odd = odd + arr[i][j];
            }
        }
    }
    printf("%d %d",even,odd);
}