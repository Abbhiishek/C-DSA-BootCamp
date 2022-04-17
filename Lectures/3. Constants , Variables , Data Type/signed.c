#include <stdio.h>

int main()

{
    // declare signed variables.
    unsigned char a = -128; 
    // compile time initliased to -128

    // compile time error =>  

    // 
    signed int var1;

    signed short int var2;

    signed long int var3;

    signed long long int var4;

    signed char var5;

    // print the size occupied by the signed variables.

    printf("The size occupied by signed int is: %d\n", sizeof(signed int));

    printf("The size occupied by signed short int is: %d\n", sizeof(signed short int));

    printf("The size occupied by signed long int is: %d\n", sizeof(signed long int));

    printf("The size occupied by signed long long int is: %d\n", sizeof(signed long long int));

    printf("The size occupied by signed char is: %d\n", sizeof(signed char));

    printf("\n\n");

}