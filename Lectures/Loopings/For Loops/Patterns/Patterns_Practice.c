# include <stdio.h>


int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);


    for(int row = 1 ; row <= n ; row++){    

        for(int col = 1 ; col <= row; col++){

            printf("*");
        }
        printf("\n");
    }


    // n = 5

    for (int row=1; row<=n; row++){   // row = 1

        for(int col = 1 ; col<= n-row+1 ; col++){
                printf("*");

        }
        printf("\n");
 
    }   


    for(int row = 1 ; row <= n ; row++){

        for(int col = 1 ; col <= row; col++){

            printf(" %d " , col);
            
        }
        printf("\n");
    }




    for(int row = 1 ; row <= 2*n-1 ; row++){

        int no_of_cols;

        if(row<=n){
            no_of_cols = row;
        }else{
            no_of_cols= 2*n-row; // 5-6+1 = 0
        }

        for(int col = 1 ; col <= no_of_cols ; col++){

            printf(" + ");

        }
    printf("\n");
}
for(int row = 1 ; row <= n ; row++){

    for(int col = 1 ; col <= row; col++){

        if((col+row)%2 == 0){
            printf(" 1 ");
        }else{
            printf(" 0 ");
        }
        
    }
    printf("\n");
}


    for(int row=1 ; row <= n ; row++){
        for(int col = 1; col<= row+3 ; col++){

            if(col<= n-row+1){
                printf("  ");
            }else{

            printf("+ ");
            }

        }
        printf("\n");
    }



    return 0;
}