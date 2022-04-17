#include <stdio.h>

// define enum flags.

enum color { red, blue, green };         // set is {0, 1, 2}.

enum fruit { mango  , pineapple, peer , apple = 20000, grapes = 2  };


enum shoes{ nike=1000000, adidas=245245644}; // set is {0, 20000, 20001}. 

int main()

{

    enum color c1;

    enum fruit f1, f2;

    c1 = blue;  // default value i.e. 1 will be assigned.

    f1 = peer; // 11 will be assigned. 
    f2 = grapes; // 11 will be assigned. 

    printf("The second value in enum set is: %d\n",c1);

    printf("The second value (peer) in enum set is: %d\n",f1); 
    printf("The second value in(grapes) enum set is: %d\n",f2); 

    return 0;

}