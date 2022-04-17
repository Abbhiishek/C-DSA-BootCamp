
#include<stdio.h>  

#include <string.h>  

// define a "user-defined" structure.

struct book      

{  
    // declare members of the structure.
    int id;      
    char name[25];
    char author[50];
    char genre[20];      
};  

int main( )    

{    

   // declare a variable of the book type.

   struct book b1; 

 

   //store the information of the books.    

   b1.id = 10; 

   strcpy(b1.name, "Dummy");  

   strcpy(b1.author, "Dummy Author"); 

   strcpy(b1.genre, "Science Fiction");

   // print the information.    

   printf( "The id is: %d\n", b1.id);    

   printf( "The name of the book is: %s\n", b1.name);    

   printf( "The author of the book is: %s\n", b1.author);    

   printf( "The genre of the book is: %s\n", b1.genre);     

   printf( "The whole b1 is  %S \n",b1);

   return 0;  

}  