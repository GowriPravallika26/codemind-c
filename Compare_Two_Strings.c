#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101],str2[101];
    scanf("%s %s",str1,str2);
    int res = strcmp(str1,str2);
    if(res == 0){
        printf("Strings are Equal");
    }
    else{
        printf("Strings are not Equal");
    }
}