#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main() {

    int i, n;

    printf("Number to be computated: ");
    scanf("%d", &n);

    printf("Factors are: ");

    for(i=1;i<=n;i++){
        if(n%i == 0){
            printf("%d  ", i);
        }
    }



return 0;
}
