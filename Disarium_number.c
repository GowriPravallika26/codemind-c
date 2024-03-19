#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    int sum = 0;
    int temp = n;
    while(temp != 0){
        temp = temp / 10;
        count++;
    }
    temp = n;
    while(count != 0){
        int last_digit = temp % 10;
        temp = temp / 10;
        sum = sum + pow(last_digit,count);
        count = count - 1;
    }
    if(sum == n){
        printf("True");
    }
    else{
        printf("False");
    }
}