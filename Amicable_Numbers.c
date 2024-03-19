#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int d1 = 0;
    int d2 = 0;
    for(int i = 1; i < a; i++){
        if(a % i == 0){
            d1 = d1 + i;
        }
    }
    for(int j = 1; j < b; j++){
        if(b % j == 0){
            d2 = d2 + j;
        }
    }
    if(a == d2 && b == d1){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}