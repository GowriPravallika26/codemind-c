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
    for(i = 1; i < n; i++){
        if(i % 2 == 0){
            sum = sum + arr[i];
        }
        else{
            continue;
        }
    }
    printf("%d",sum);
}