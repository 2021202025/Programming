#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main() {

    int i,n, pow;
    int result =1;

    printf("Enter the number and the power to which it is to be calculated: ");
    scanf(" %d %d", &n, &pow);

    for(i=1; i<=pow; i++){
        result = result*n;
    }

    printf("%d", result);



return 0;

}
