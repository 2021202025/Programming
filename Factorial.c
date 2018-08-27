#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int Factorial(int n);

void main(){

    int i;
    int n;

    printf("Factorial value to be computated: ");
    scanf("%d", &n);

    printf("Factorial of %d: %d", n,Factorial(n));

return 0;

}


int Factorial(int n){

    int i, result=1;
    for(i=1;i<=n;i++){
        result = result*i;
    }

return result;

}
