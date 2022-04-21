

# include <stdio.h>


int main(){

    int n;

    printf("Enter no of rows: ");
    scanf("%d", &n);   // n= 5
    for(int row= 1; row <= n ; row++){   // row = 1  2  3

        int character = 65;      // character = 97

        for(int col = 1 ; col <= row ; col++){  // col = 1  2 3 4

            printf(" %c"  , character);   // A
                                         //  A B
                                         //  A B C

            character ++;  // 99

        }
        printf("\n");



    }

    for(int row = 1 ; row <= n ; row++){

        for(int col= 1 ; col <= row ; col++){

            printf("%d", col);



        }
        printf("\n");
    }

    for(int row= 1 ; row <= n ; row++){

        for(int col = 1 ; col <=n; col++){

            if(col<=row-1){
                printf(" ");
            }else{
                printf("*");
            }

        }
        printf("\n");
    }


    return 0;
}