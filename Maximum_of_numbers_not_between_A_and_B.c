#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max;
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 0; i < n; i++){
        if(arr[i] < a || arr[i] > b){
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    if(max == 0){
    printf("-1");
    }
    else{
        printf("%d",max);
    }
}