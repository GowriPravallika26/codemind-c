#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int cnt;
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 0; i < n; i++){
        if(arr[i] < a || arr[i] > b){
            printf("%d ",arr[i]);
            cnt = 1;
        }
    }
    if(cnt == 0){
        printf("-1");
    }
}