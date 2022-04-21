```
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
```
```c

for(int row = 1 ; row <= n ; row++){

    for(int col = 1 ; col <= row; col++){

        printf("*");
    }
    printf("\n");
}

```
```
*  *  *  *  *            `row`     `col`     `n = 5`
*  *  *  *                  1      5      5-1+1   => n-row+1       
*  *  *                     2      4      5-2+1  
*  *                        3      3      5-3+1
*                           4      2 
                            5      1
```
```c
for (int row=1; row<=n; row++){

    for(int col = 1 ; col<= n-row+1 ; col++){
            printf("*");

    }
    printf("\n");

}
```
```c

                                               row          col
1                                               1            1 
1 2                                             2            2
1 2 3
1 2 3 4
1 2 3 4 5

```
```c
for(int row = 1 ; row <= n ; row++){

    for(int col = 1 ; col <= row; col++){

        printf(" %d " , col);
        
    }
    printf("\n");
}
```
```c
                  row      col    n=5
+                  1        1
+ +                2        2
+ + +                                              row <=5 : increasing ; row>5 : decreasing
+ + + +
+ + + + +          5        5
+ + + +            6        4            
+ + +              7        3
+ +                8        2         2n-row     n-(n-row)
+                  9        1
```
```c

for(int row = 1 ; row <= 2n-1 ; row++){

    int no_of_cols;

    if(row<=n){
        no_of_cols = row;
    }else{
        no_of_cols= 2*n-row ;
    }

    for(int col = 1 ; col <= no_of_cols ; col++){

        

    }
    printf("\n");
}

```


1     r1c1= 1
0 1   r2c1= 0   r2c2=1
1 0 1  r3c1= 1   r3c2= 0  r3c3 = 1
0 1 0 1  r4c1 = 0  r4c2= 1      r4c3= 0       r4c4= 1


```c

for(int row = 1 ; row <= n ; row++){

    for(int col = 1 ; col <= row; col++){

        if((col+row)%2 == 0){
            printf("1");
        }else{
            printf("0");
        }
        
    }
    printf("\n");
}

```

   n=4?              row     col   spaces

   *                 1        4      3
  ***                2        5      2
 *****               3        6      1
*******              4        7      0


for(int row=1 ; row <= n ; row++){
    for(int col = 1; col<= row+3 ; col++){

        if(col<= n-row+1){
            printf(" ");
        }else{

        printf("+");
        }

    }
    printf("\n");
}

```
    ++++
    ++++            
    ++++

```
14

                                            row        col  
```c
                           A                 1           1
                           A B               2           2
                           A B C             3           3
                           A B C D           4           4
                           A B C D E         5           5
                           ..........        n           n

````


for(int row= 1; row <= n ; row++){

    char character = 'A';  

    for(int col = 1 ; col <= row+1 ; col++){

        printf(" %c"  , character);
        character ++;

    }
    printf("\n");



}



```c
               row      col
1               1       1
1 2             2       2
1 2 3           3       3
1 2 3 4
1 2 3 4 5 

```



for(int row = 1 ; row <= n ; row++){

    for(int col= 1 ; col <= row ; col++){

        printf("%d", col);



    }
    printf("\n");
}



```c
                         row               col         spaces
 ******                  1 -1                 6            0
  *****                  2 -1                 6            1
   ****                   3 -1
    ***                   4 -1                6             3  
     **
      *


```


++++++
++++++
++++++
++++++
++++++
++++++



for(int row= 1 ; row <= n ; row++){

    for(int col = 1 ; col <=n; col++){
        printf("+");

        if(col<=row-1){
            printf(" ");
        }else{
            printf("*")
        }

    }
    printf("\n");
}