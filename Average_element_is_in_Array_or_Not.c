#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    int i;
    int average = sum / n;
    for(i = 0; i < n; i++){
    if(average == arr[i]){
        printf("True");
        break;
      }
    }
   if(average != arr[i]){
        printf("False");
    }
}