
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main() {

    int n;


    printf("Upto how many nos. sum is to be calculated: ");
    scanf("%d", &n);
    int result = (n*(n+1))/2;
    printf("Sum = %d", result);



return 0;

}
