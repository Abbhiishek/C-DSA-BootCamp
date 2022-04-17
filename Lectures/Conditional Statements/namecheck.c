// take the name as user from input and check for first alphabet and  
// if its a vowels then print your have voweled name else print you 
// nice name .


#include <stdio.h>

int main(){

    printf("Enter the name: ");
    char ch;
    scanf(" %c", &ch);

    if (  ch == 97 || ch == 101 || ch == 105 || ch == 'o' || ch == 117  ){

        printf(" You have a voweled name !!! \n");
    }else{
        printf("You have a nice name !!!.");
    }

}