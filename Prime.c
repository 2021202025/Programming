#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main() {

    int i,n,count=0;

    printf("Enter the number to be checked: ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++){
        if(n%i == 0){
            count++;
        }
    }

    if(count){
        printf("Number is not prime ;)");
    }
    else{
        printf("Number is prime :(");
    }


return 0;

}
