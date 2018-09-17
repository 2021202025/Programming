#include<stdlib.h>

void main(){

/*  int rows;
    int i = 0, j = 0, k = 1;

    scanf(" %d", &rows);
    printf("\n");

    for(i=1; i<rows+1; i++){
        for(j=1; j<i+1; j++){

            printf("%d", k);
            k++;

            if(i!=j){
                printf("*");
            }
        }

        printf("\n");

    }

*/
/*
    int rows;
    int i = 0, j = 0;
    int k = 1;

    scanf("%d", &rows);
    printf("\n");

    for(i=1; i<rows+1; i++){
        for(j=1; j<rows-i+1; j++){
            printf(" ");
        }
        for(j=1; j<i+1; j++){
            printf("%d ", j);
        }

        printf("\n");
    }
*/

/*
int i,j,n=6,c=n-1;
for(i=1;i<=n;i++)
{
    if(i%2==0)
        printf("%d",c++);
    for(j=1;j<=n;j++)
    {
        printf("%d",i);
    }
    if(i%2!=0)
        printf("%d",c++);
        printf("\n");
}
*/

/*  int i, j;
    int k;

    for(i=1; i<=4; i++){
        for(j=1; j<=4; j++){

            k = i + j - 1;
            if(k>4){
                k = k-4;
            }

            printf("%d ", k);

        }
        printf("\n");
    }
*/


// Diamond

/*    int rows;
    int i = 0, j = 0;
    int k = 1;

    scanf("%d", &rows);
    printf("\n");

    for(i=1; i<rows+1; i++){
        for(j=1; j<rows-i+1; j++){
            printf(" ");
        }
        for(j=1; j<2*i; j++){
            printf("*");
        }

        printf("\n");
    }

    for(i=rows-1; i>=1; i--){

        for(j=1; j<rows-i+1; j++){
            printf(" ");
        }
        for(j=1; j<2*i; j++){
            printf("*");
        }

        printf("\n");


    }
*/

return 0;
}
