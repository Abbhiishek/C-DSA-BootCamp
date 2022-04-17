#include <stdio.h>

int main()

{

    int arr[4] = {50, 100, 150, 200};    //  array size => 4

    int *ak;   // pointer decalre *


    // ak = arr;  //  ak = &arr[0];

    ak = arr; // ak =  {50, 100, 150, 200}; 
    
    // *ak  = > varaible value and uska address dono store 
    // ak= 50 ka addresss

    for (int i = 0; i < 4; i++)
    {
        printf("Value of *ak = %d\n", *ak);  // 
        printf("Value of ak = %p \n\n", ak); 
        // increment pointer ptr by 1.
        ak++;
    }

}