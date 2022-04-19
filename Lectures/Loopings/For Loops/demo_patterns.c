// 6. WAP in &#39;C&#39; to print the given * triangle using nested loop. The range or size is taken from
// user input.


# include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);   // 5

    for (int row = 1; row <= n; row++)  // outer for loop will run the times row is there in the patterns   // 1 2 
    {
        for (int col = row; col <= n ; col++)  // relationship between col and row elements in regards of numbers
        {
            /* code */
            printf(" * ");
             // what do we want to print .
        }
        printf("\n"); 
    }

    
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    



    return 0;
}