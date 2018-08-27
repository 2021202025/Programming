#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main(){

    int i;
    int n;
    int result = 1;

    printf("Factorial value to be computated: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        result = result*i;
    }

    printf("Factorial of %d: %d", n,result);

return 0;

}
