#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int even = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 != 0 && arr[i] % 2 == 0){
            even++;
        }
    }
    if(even >= 1){
        printf("False");
    }
    else{
        printf("True");
    }
}