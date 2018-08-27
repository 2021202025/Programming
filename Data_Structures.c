#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


/*typedef struct {
    char *name;
    int not_to_60;
    int topSpeed;
}car;


void printCar( car me_car ){
    printf("%s does not to 60 in %d seconds and has a top speed of %d mp/h \n", me_car.name, me_car.not_to_60, me_car.topSpeed);
}

*/

int main(){

    char c = '*';
    int n;
    scanf("%d", &n);
    printf("\n");

    for(int i =1; i<=n ; i++)
    {
        for(int j = 1; j<=i; j++)
            {
            printf("%c",c);
            }

        printf("\n");
    }



    return 0;
}
