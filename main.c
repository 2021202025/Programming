#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char **argv )
{
   /*
    printf("Hello world!\n");
    printf("A decimal number - %d\n", 5);
    printf("A floating point number - %f\n", 5.0);
    printf("A decimal number - %d\n", 6);
    printf("A floating point number - %f", 6.0);
    */

    /*
    int i = 0;
    bool Manu = false;
    if(Manu){
        for(i=0; i<120;i++){
            printf("%d = %c\n", i,i);
        }
    }
    */

    /*
    int i = 0;
    i++;
    printf(" %d", i+=1);

      return 0;
    */

    /*
    int a;
    int num1 = 5,num2;
    scanf(" %d", &a);
    if(num1 > (num2 = a)){
        printf(" num1 is greater than you");
    }
    */

    char input[100];

    while(fgets(input, 100, stdin)){
        printf("Input: %s\n", input);

    if(strncmp(input, "quit", 4) == 0){
        printf("Exiting the game\n");
        break;
        }

    }



    return 0;
}
