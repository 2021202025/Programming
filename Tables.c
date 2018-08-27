#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main(){

    int i = 1;
    int n,m;

    printf("What number's table to be printed: ");
    scanf("%d", &n);

    printf("How many multiples do you want?\t");
    scanf("%d", &m);

    for(i=1;i<=m;i++){
        printf("\t%d * %d = %d",n,i, n*i);
        printf("\n");
    }


return 0;

}
