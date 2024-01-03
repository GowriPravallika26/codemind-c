#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,sum = 0;
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    for(i = 0; i < n; i++){
        if(arr[i] == a){
            sum++;
        }
    }
    if(sum >= 1){
        printf("True");
    }
    else{
        printf("False");
    }
}