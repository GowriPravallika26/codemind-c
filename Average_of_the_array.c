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
        sum = sum + arr[i];
    }
    float average = sum * 1.0/n * 1.0;
    printf("%.2f",average);
}