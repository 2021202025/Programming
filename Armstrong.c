#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int is_armstrong(int n);

void main(){

    int n,m,rem;
    int result = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    /*m = n;

    while(m>0){
        rem = m%10;
        m = m/10;
        result = result + rem*rem*rem;
    }
    */


    if((is_armstrong(n)) == n){
        printf("Number is armstrong number \n");
    }
    else{
        printf("Number is not an armstrong number");
    }




return 0;

}

int is_armstrong(int n){

    int m = n;
    int result = 0;
    int rem;

    while(m>0){
        rem = m%10;
        m = m/10;
        result = result + rem*rem*rem;
    }
    return result;
}
