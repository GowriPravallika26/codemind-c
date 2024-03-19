#include <stdio.h>
int main()
{
	int n,i,k,j;
	scanf("%d",&n);
	int star = 1;
	for(i = 1; i <= n; i++){
		for(k = n - i; k > 0; k--){
			printf(" ");
		}
		for(j = 1; j <= star; j++){
			printf("* ");
		}
		star++;
		printf("
");
	}
}