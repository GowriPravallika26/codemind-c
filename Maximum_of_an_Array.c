#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int sum = arr[0];
    for(i = 0; i < n; i++){
        if(sum <= arr[i]){
            sum = arr[i];
        }
    }
    printf("%d",sum);
}