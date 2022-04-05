# include <stdio.h>



int sum(int a, int b , int c)
{
    return a + b + c;
}

int main (){



    
        int a, b, c;


        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        printf("Enter the third number: ");
        scanf("%d", &c);
    
        printf("The sum of %d, %d and %d is %d\n", a, b, c, sum(a,b,c));
    
        return 0;
}