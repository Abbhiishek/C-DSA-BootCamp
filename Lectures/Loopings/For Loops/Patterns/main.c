// WAP in &#39;C&#39; to implement the following series
// a. Sum= 1+ 1/2 +1/3+ ... +1/n b. Sum =1+ 1/2^2+1/3^3+... +1/n^n
// c. 1+2/2!+3/3!...+n/n! 11.


// 10 

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n, i ; float sum = 0;
//     float fact = 1;
//     printf("Enter the value of n: ");  // n = 2
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++){  // i = 1,  2,
//         fact = fact * i;  // fact =  1,  2
//         sum = sum + 1/fact; // sum = 1 , 1+1/2 = 
//     }
//     printf("Sum = %f\n", sum);
//     return 0;
// }

// 12. Print the below triangle 

    //         *        => row = 1 gap => 3 excutiuon = > 1
    //       * * *      => row = 2 gap => 2 excutiuon = > 3
    //     * * * * *    => row = 3 gap => 1 excutiuon = > 5
    //   * * * * * * *  => row = 4 gap => 0 excutiuon = > 7


//  row , n 

#include <stdio.h>

int main(){


    int n ;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++){
        /* code */
        int no_of_stars =  n + row-1 ;
        for (int  col = 1; col <= no_of_stars; col++)
        {
            /* code */
            // printf("* ");
            if (col <= n-row){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }


    for (int row = 1; row <= n; row++)
    {
        /* code */
        for (int col = 1; col <= n; col++)
        {
            /* code */
            // printf("* ");
            if(col<=n-row){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
        
    }

    for (int row = 1; row <= n; row++)
    {
        /* code */
        for (int col = 1; col <= row; col++)
        {
            /* code */
            // printf("* ");
            if((col+row)%2==0){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
        
    }
    
    




    return 0;
}