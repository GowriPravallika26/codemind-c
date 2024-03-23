#include <stdio.h>
#include <string.h>
int main()
{
    char str1[51];
    scanf("%[^
]",&str1);
    char str2[51];
    strcpy(str2,str1);
    printf("%s",str2);
}