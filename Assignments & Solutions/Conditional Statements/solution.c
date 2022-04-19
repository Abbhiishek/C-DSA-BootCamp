# include <stdio.h>
# include <math.h>
// Write a program in C which is a Menu-Driven Program to perform a simple calculation.

// + - *  / % pow sqrt
int main(){

    float first_number , second_number;
    char operator;
    puts("Enter the first number");
    scanf("%f",&first_number);
    puts("Enter the operator for calculation: ");
    puts("Available operators are + => ADDITION ; - => Subtraction ; * => Multiplication  ; / => division  ; % => Modulo Divison  ; p =>  power  ; s => square root");
    scanf(" %c" , &operator);
    puts("Enter the second number : ");
    scanf("%f",&second_number);

    

    if (operator == '+' ){
        
        printf("%.1f %c %.2f = %f  " , first_number, operator , second_number , first_number+second_number );

    }else if (operator == '-'){

        printf("%.1f %c %.2f = %f  " , first_number, operator , second_number , first_number-second_number );

    }else if (operator ==  '*'){
        printf("%.1f %c %.2f = %f  " , first_number, operator , second_number , first_number*second_number );

    }else if (operator == '/' ){
        printf("%.1f %c %.2f = %f  " , first_number, operator , second_number , first_number/second_number );

    }else if (operator =='%' ){
        printf("%.1f %c %.2f = %f  " , first_number, operator , second_number , (int)first_number%(int)second_number );

    }else if (operator == 'p' ){
        printf("%.1f %c %.2f = %f  " , first_number, operator , second_number , pow(first_number,second_number) );

    }else if (operator == 's' ){
        printf("square root of %f = %f \n" , first_number,  sqrt(first_number) );
        printf("square root of %f = %f \n" , second_number,sqrt(second_number) );

    }else{
        puts("Invalid Operator Try Again !!!");

    }
    










    return 0;
}