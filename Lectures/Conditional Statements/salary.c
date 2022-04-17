
// wap to check if the user salary is greater than 10000 if yes then increase the
//  salary by 2000 or else increase the salary by 1000.

#include <stdio.h>

int main()
{

    int salary;
    printf("Enter the User Salary: ");
    scanf("%d", &salary);
    printf("The salary you input is %d ........ \n", salary);

    if (salary > 10000){

        salary += 2000;
        printf("the user salary after bonus is %d  after adding a bonus of 2000", salary);
        int b = 100;
    }
    else{
        salary += 1000;
        printf("the user salary after bonus is %d  after adding a bonus of 1000", salary);
    }

    // 10000  => 1000

    // 20000  => 2000

    // else = > 3000

    return 0;
}