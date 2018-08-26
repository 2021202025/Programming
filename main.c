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

    /*
    char input[100];

    while(fgets(input, 100, stdin)){
        printf("Input: %s\n", input);

    if(strncmp(input, "quit", 4) == 0){
        printf("Exiting the game\n");
        break;
        }

    }
    */

    /*
    int i =0;
    char input[100];
    int numEntered = 0;
    int array[100];
    int totalEntered = 0;

    for(i=0; i<6; i++){

        printf("Enter a number:  ");
        fgets(input, 100, stdin);

        if(strncmp(input, "q", 1) == 0){
            break;
        }

        numEntered = atoi(input);
       // printf("You entered %d \n", numEntered);

        array[i] = numEntered;
        totalEntered++;
    }

    printf("Stored numbers are:\t");
    for(i=0; i<totalEntered; i++){
        printf("%d\t", array[i]);
    }
    */

    /*int a = 3;
    int b = 5;
    int c = a;

    int *pa, *pb;

    printf("Value of a = %d \n", a);
    printf("Value of b = %d \n", b);

    pa = &a;
    pb = &b;

    printf("Location of a = %d \n", *pa);
    printf("Location of b = %d \n", *pb);

    a += 7;

     printf("Location of a = %d \n", *pa);
     printf("Value of C = %d \n", c);
    */

    /*
    char mychar[] = "Shelby Gt350R is the best car in the world";
    int i = 0;
    char *pchar = &mychar[0];

    while( *pchar ){
            printf("Position: %c Address: %p \n", *pchar, pchar);
            pchar++;
            i++;

            if(i == 9){
                *pchar = '5';
            }

    }

    printf("%s", mychar);

    */

    int Switch_A = 13; //1101
    int Switch_B = 7; //0111

    if((Switch_A & Switch_B) != 0){
        printf("Switch on");
    }

    else printf("Switch off");

    int switch_c = Switch_A | Switch_B;
    int switch_d = Switch_A & Switch_B;

    printf("\n\nSwitch C = %d \nSwitch D = %d\n", switch_c, switch_d);


    return 0;
}
