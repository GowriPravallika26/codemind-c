#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && arr[i] % 2 != 0){
            res++;
        }
    }
    if(res >= 1){
        printf("False");
    }
    else{
        printf("True");
    }
}