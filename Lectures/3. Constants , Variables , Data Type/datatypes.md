
# ```Datatypes```

Every day we meet names and numbers—at home, at work, at school, or at play. A person’s name is
a type of data; so is a number. We can thus speak of the two data types called “name” and “number.”
Consider the statement:
Caroline bought 3 dresses for $199.95
Here, we can find:

-  An example of a name: Caroline.

- An example of a number: 3.

- Two examples of numbers: 3 and 199.95.

<br>
<br>

##  In C we have bunch of `Datatypes`


- we can divide `Datatypes` into three categories .
    1. `Primitive Datatypes`
    2. `Derived Datatypes`
    3. `User Defined Datatypes`

<br>
<br>

## <u> `Primitive Datatypes` </u>

<br>


- `Primitive Datatypes` are the datatypes which are not user defined .

- Each primitive datatype has its own rules and conventions for naming variables.

    - `int`    // integer datatype
    - `long`   // integer datatype
    - `float`  // floating point datatype
    - `char`   // integer datatype
    - `double`  //  floating point datatype


<table><tbody>
<tr>
<td>
<h3>DATA TYPE</h3>
</td>
<td>
<h3>MEMORY (bytes)</h3>
</td>
<td>
<h3>RANGE</h3>
</td>
<td>
<h3>FORMAT SPECIFIER</h3>
</td>
</tr>
<tr>
<td>
<p>int</p>
</td>
<td>
<p>4</p>
</td>
<td>
<p>-231 to 231 - 1&nbsp;&nbsp;</p>
</td>
<td>
<p>%d&nbsp;</p>
</td>
</tr>
<tr>
<td>
<p>char</p>
</td>
<td>
<p>1</p>
</td>
<td>
<p>-128 to 127</p>
</td>
<td>
<p>%c</p>
</td>
</tr>
<tr>
<td>
<p>float</p>
</td>
<td>
<p>4</p>
</td>
<td>
<p>1.2E-38 to 3.4E+38</p>
</td>
<td>
<p>%f</p>
</td>
</tr>
<tr>
<td>
<p>double</p>
</td>
<td>
<p>8</p>
</td>
<td>
<p>2.3E-308 to 1.7E+308</p>
</td>
<td>
<p>%lf</p>
</td>
</tr>
</tbody></table>

<br>
<br>

- Primary data types are also known as the `fundamental data types` because they are pre-defined or they already `exist` in the C language. All the other types of data types `(derived and user-defined data types)` are derived from these data types. Primary data types in C are of 4 types: `int`, `char`, `float`, and `double`.

<br>
<br>



### ``Int Datatypes``

<br>
<br>

- The int data type is used to store the integer values. Any number that falls in the range of `-∞ to +∞ `is said to be an `integer`. 
- For example 0, 10, 105, -15, -103, etc are all integers. `However, integers can be either negative or positive. And that’s where we use data type modifiers`, which we will be going to discuss later in this article.

- In C language, the integers `cannot be represented as floating or decimal point numbers`. They can only be operated by/on integers themselves. For example, 4/3 is fine but 4/3.0 is not fine.  However, if the operation of two integers `results in a fraction number`, `the integer part will be stored as the final result`.

    `Syntax`
```c
int variable_name;
```

#### `Example` 


```c

#include <stdio.h>    

// header file 

int main()
{
    int a = 10; 
    // here we are declaring the variable a and assigning the value 10 to it.
    int b = 20; 
    // here we are declaring the variable b and assigning the value 20 to it.
    int c = a + b;  
    // doing the sum of a and b and storing the result in c.
    printf("%d", c);
    // printing the value of c.
    return 0;
}

```


#### `Char Data Type`
- The char data type is used to store the characters. The characters stored in a variable of char data type have a value equivalent to its integer code. 
- These codes are often called American Standard Code For Information Interchange or ASCII codes. The ASCII code for upper case characters A to Z starts from 65 to 90 and for lower case characters a to z, it starts from 97 to 122.

- The general size of a character is 1 byte. However, just like the integers the size of a char can vary according to the data type modifiers. Since all characters and symbols can be represented in their numerical ASCII value, the char type is often considered as an int type.

    `Syntax`
```c
char variable_name;

```

`Example
`The following example illustrates the char data types in C.
```c
#include <stdio.h>

int main()

{
    //variable ch is initialised as char
    char ch = 'A';
    //storing same ASCII code in int
    int num = ch;
    //print the ASCII value of ch

    printf("The ASCII code for %d", ch);
    printf(" is %d", num);
    printf("\n");

    printf("Adding 1 to the character code \n"); 

    //Adding 1 to the char variable ch
    ch += 1;

    //num stores the corresponding
    //ASCII value of ch

    num = ch;
    //print the ASCII value of ch+1

    printf("The ASCII code for %d", ch);

    printf(" is %d", num);
}
```

- In the above example, we have initialized a variable ch with character A. Then, we have initialized an int variable with ch. Now, this variable is holding the ASCII value of character A. This has proven when we added 1 in the num and printed it, we got 66 as output. 



### `Float Data Type`
<br>
<br>

- The float data type is used to store the floating-point numbers. The numbers that have a fractional part are called floating-point numbers. For example, 3.0, 5.57, -31.2, -3.12, etc are all floating-point numbers. Moreover, it should be noticed carefully that 8 is an integer but 8.0 is a floating-point number. 
- Although the value of both the digits is the same, 8.0 has a decimal number which differentiates it with 8.

- The major advantage of floating point numbers over integers is that they can represent a much larger and wider range of digits as compared to int data type.

     `Syntax`
```c
float varaible_name;
```

`Example`
The following example illustrates the float data types in C.
```c

#include <stdio.h>

int main()

{

    //variable radius is initialised as float

    float radius = 10.0; 

    //print the radius

    printf("Radius of the circle is: %f", radius);

    printf("\n");

    //variable area is initialised as float

    float area;

    area = 3.14 * radius * radius; 

    //print the area of the circle

    printf("Area of the circle is :%f", area);

}
```


- In the above example, we are calculating the area of a circle. Note that, we are multiplying only the variables having float data type with each other and storing the final result in another float type variable.

#### `Double Data Type`
<br>
<br>

- The double data type is also used to store floating-point numbers. But still, it is considered as a distinct data type because of two reasons. 
- The first one is that it occupies twice as much memory as type float. 
- The second reason is that it is used to store a much larger range of floating-point numbers than a float data type.

- The double stores almost double the number of significant digits after the decimal point or precision of the float. However, the double data type consumes more memory and it  is also slower as compared to float. So, it is advisable to use a smaller data type as much as possible for the sake of optimization of code.

     `Syntax`
```c
double variable_name;
```

`Example`
The following example illustrates the double data type in C.
```c
#include <stdio.h>

// function to calculate surface area and volume

// of a sphere

void sphere(int radius)  // this is the function 

{
    // variables to hold double values

    double surfaceArea, sphereVolume;

    //Calculating the surface area 

    //and surface volume of the sphere

    surfaceArea = 4 * 3.14 * radius * radius;

    sphereVolume = (surfaceArea * radius) / 3; 

    printf("The surface area of the sphere is: %lf", surfaceArea);

    printf("\n\nThe volume of the sphere is:  %lf", sphereVolume);
} 

int main()

{

    int radius = 6; // giving the radius of the sphere
    sphere(radius);   // calling the function to calculate the surface area and volume of the sphere

    printf("\n\n");

    return 0;
}

```


- In the above example, we are calculating the area and volume of a sphere. Here, we have used the double-type variables. One thing to note here is that after the final answer, the remaining significant digits have automatically set to 0.



## `Derived Datatypes`


- `Derived data types are derived from the primitive or fundamental data types.`
- There are mainly 3 types of derived data types in C that we are going to discuss in this section.

### `Arrays`
- An array is a group of `similar kinds of finite entities of the same type`. These entities or elements can be referred to by their `indices` respectively.
- The indexing starts from `0 to (array_size-1)` conventionally. 
- `An array can be one-dimensional, two-dimensional, or multidimensional`.

    `Syntax`
```c
    data_type arr_name[size];
```

#### `Description of the syntax`

- `data_type:` This is the data type that specifies the type of elements to be stored in the array. It can be int, float, double, and char.
- `array_name:` This is the name of the array. To specify the name of an array, you must follow the same rules which are applicable while declaring a usual variable in C.
- `size:` The size specifies the number of elements held by the array. If the size is n then the number of array elements will be n-1.

<br>
<br>

`Example`
The following example illustrates the array data types in C.
```c
#include <stdio.h>

int main()

{

    int idx, element;

    // initialize an array.

    int my_array[10] = {10, 0, 29, 8, 52, 14, 16, 100, 2, 27};

    printf("Enter element to be searched:\n");

    // input element to be searched.

    scanf("%d", &element);

    // traverse the array to search the element.

    for (idx = 0; idx <= 9; idx++)

    {

        if (my_array[idx] == element)

        {

            // print the index at which

            // the element is found.

            printf("Element found at idxex %d", idx);

            break;

        }

    } 

    // if the element is not found.

    if (idx == 10)

    {

        printf("\nElement not found!");

    }

     return 0;

}

```

- The above example is to check if the input element exists in the array or not. Here, we have declared an integer type array for size 10. We are iterating over the array and checking if the given element is found in the array. 

### `Functions`
- A function is a piece of code that` performs some specific task` when invoked in the program. It can be called from `anywhere and any number of times` in the program. The return value i.e., what type of value it will `return depends upon the return type of the function`.

- In C, a function can be called by types: `call by value and call by reference. `When the function is called by value, a copy of the variable is passed as the argument whereas when the function is called by the reference, the address or reference of variable itself is passed to the function.

    `Syntax`
```c
return_type function_name(parameters);
```

`Description of the Syntax`

- `return_type:` This is the data type that specifies the type of value to be returned by the function. If the return type is void, then it is not mandatory for the function to return a value.
- `function_name:` This is the name of the function. To specify the name of a function, you must follow the same rules which are applicable while declaring a usual variable in C.
- `parameters:` The parameters are optional. They are passed according to the type of the function call.
`Example`
The following example illustrates functions in C.
```c

#include <stdio.h>

// function returning the maximum

// numbers between two integers.

int max_num(int num1, int num2)

{

    // local variable declaration

    int res; 

    if (num1 > num2)

        res = num1;

    else

        res = num2; 

    return res;

} 

int main()

{

    // local variable definition.

    int num1 = 225;

    int num2 = 250;

    int res;

     // function call.

    res = max_num(num1, num2); 

    // print the result.

    printf("Maximum number is : %d\n", res);

    return 0;

}
```

- The above example is comparing two numbers and finding the greatest among them. Here, we have passed two numbers that need to be compared, to the function by value. The function has an int return type so, it is returning the greater number after making a comparison.

### `Pointers`
- A pointer can be defined as a variable that stores the address of other variables. This address signifies where that variable is located in the memory. If a is storing the address of b, then a is pointing to b. The data type of a pointer must be the same as the variable whose address it is storing. 

    `Syntax`
```c
type *pointer_name;
```
`Description of the syntax`
- type: This is the data type that specifies the type of value to which the pointer is pointing.
- pointer_name: This is the name of the pointer. To specify the name of a pointer, you must follow the same rules which are applicable while declaring a usual variable in C. Apart from these rules, a pointer must always be preceded by an asterisk(*).
`Example`
The following example illustrates pointers in C.
```C
#include <stdio.h>

int main()

{

    // array declaration and initialization.

    int arr[4] = {50, 100, 150, 200}; 

    // int type pointer variable declaration.

    int *ptr; 

    // Assign the address of arr[0] to ptr.

    ptr = arr;

    for (int i = 0; i < 4; i++)

    {

        printf("Value of *ptr = %d\n", *ptr);

        printf("Value of ptr = %p\n\n", ptr); 

        // increment pointer ptr by 1.

        ptr++;

    }

}
```

- In the above example, we have declared a pointer ptr that is holding the address of the array arr. We have looped through the array and printed the value at each index along with the address of the element.




## <u>`User-Defined Data Types` </u>

## `Structure`
<br>
<br>

- A structure is a user-defined data type in C that allows you to combine members of different types under a single name (or the struct type). The reason why it is called a user-defined data type is that the variables of different types are clubbed together under a single structure, which can be defined according to the user’s choice. 

- Consider a situation where you want to store a record of a book. The book will have properties like name, author, and genre. You can create three variables to store this information. But what if you need to store records of 10 books. Then creating 3 separate variables for each book would not be a practical solution. This is where a structure can be a great solution. A single structure book can be created having three members: name, author, and genre. This structure can be used for all 10 books. 

   `Syntax` 
// define a structure.
```c
struct structure_name 

{

    data_type var1;

    data_type var2;    

};
```
`Description of the Syntax`

- `struct:` The definition of a structure includes the keyword struct followed by its name. All the items inside it are called its members and after being declared inside a structure. 
- `data_type:` Each variable can have a different data type. Variables of any data type can be declared inside a structure.
- The definition of a structure ends with a semicolon at the end.
`Example`

The following example illustrates structure in C.
```c

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

   return 0;  

}  
```

- In the above example, a structured book is defined with 4 member variables: id, name, author, and genre. Now a separate copy of these 4 members will be allocated to any variable of the book type. So, the variable b1 also has its own copy of these 4 variables which are used to store the information about this book.

## `Union`
- A union is also a user-defined data type. It also holds members of different data types under a single name. A union sounds similar to a structure and they are similar in conceptual terms. But there are some major differences between the two. While a structure allocates sufficient memory for all its members, a union only allocates memory equal to its largest member. 

`Syntax` 
```c

union structure_name 
{

    data_type var1;

    data_type var2;   

};
```

`Description of the Syntax`
- `union:` The union keyword is written at the beginning of the definition of a union in C. After it,  the name of the union is specified.
- `data_type:` It is the data type of the member variable of the union. Members of different types can be defined inside a union.
- To understand the major difference between a structure and a union, consider the following definitions of a structure and a union:

#### `Structure definition`
```c
struct book      

{  

    int price;      // 4 bytes

    char name[10];  // 1*10 = 10 bytes    

};  
```
#### `Union definition`

```c
union book      

{  

    int price;      // 4 bytes

    char name[10];  // 1*10 = 10 bytes    

};
```
An object of the structure book would be allocated 14 bytes for both the int and char members. However, an object of the union book would only be allocated 10 bytes (equal to the memory required by the char member) which is the maximum size.

`Example`
The following example illustrates union in C.
```c

#include<stdio.h>

#include<string.h>

// define the union. 

union city

{

    int pinCode;

    char name[20];

}; 

int main( )

{  

   // object of the type "city".

   union city c1; 

   c1.pinCode = 110090;

   strcpy( c1.name, "Delhi");

   // print the information.

   printf("The pin code of the city: %d\n", c1.pinCode);   

   printf("The name of the city is: %s\n", c1.name); 

}

```

- In the above example, the char array name is printed correctly whereas the pinCode gives a corrupted value. This happened because the name occupied the space allocated for object c1. 

###  `Enumeration `
Enumeration or simply enum is one of the user-defined data types in C which provides a special type of flexibility of defining variables. An enum consists of a set of integer constants that can be replaced by user-defined names. 

   `Syntax`
```c
enum flag {const_name1, const_name2, ..., const_nameN};

```

`Description of the Syntax`

enum: The keyword enum is written at the beginning of the definition.
flag: This is the default name of the enumeration set. It can be replaced by another name or can be used as it is. 
const_name: It is the integral identifier inside the enum set. The default values of this set are- {0, 1, 2, ….}.


`Example`
The following example illustrates enumeration in C.
```c
#include <stdio.h>

// define enum flags.

enum color { red, blue, green };         // set is {0, 1, 2}.

enum fruit { mango = 10, apple, grapes }; // set is {10, 11, 12}. 

int main()

{

    enum color c1;

    enum fruit f1;

    c1 = blue;  // default value i.e. 1 will be assigned.

    f1 = apple; // 11 will be assigned. 

    printf("The second value in enum set is: %d\n",c1);

    printf("The second value in enum set is: %d\n",f1); 

    return 0;

}
```

- In the above example, two enum flags are defined. The first enum flag color{red, blue, green} has a constant with default values i.e. {0, 1, 2}. So, when the second constant blue is printed, 1 will be displayed in the output. Whereas, in the second enum flag fruit{mango, apple, grapes}, the first constant i.e. mango is initialized with 10. So, the values of the following constants will automatically get updated. Hence, when the second constant of the enum fruit is printed, 11 is displayed in the output.


## `Data Type Modifiers`
<table><tbody>
<tr>
<td>
<h3>DATA TYPE</h3>
</td>
<td>
<h3>MEMORY (bytes)</h3>
</td>
<td>
<h3>RANGE</h3>
</td>
<td>
<h3>FORMAT SPECIFIER</h3>
</td>
</tr>
<tr>
<td>
<p>short int</p>
</td>
<td>
<p>2</p>
</td>
<td>
<p>-32,768 to 32,767&nbsp;</p>
</td>
<td>
<p>%hd&nbsp;</p>
</td>
</tr>
<tr>
<td>
<p>unsigned int</p>
</td>
<td>
<p>4</p>
</td>
<td>
<p>0 to 4,294,967,295&nbsp;</p>
</td>
<td>
<p>%u</p>
</td>
</tr>
<tr>
<td>
<p>long int</p>
</td>
<td>
<p>4</p>
</td>
<td>
<p>-231 to 231 - 1&nbsp;&nbsp;</p>
</td>
<td>
<p>%ld</p>
</td>
</tr>
<tr>
<td>
<p>long long int</p>
</td>
<td>
<p>8</p>
</td>
<td>
<p>-(263) to (263)-1</p>
</td>
<td>
<p>%lld&nbsp;</p>
</td>
</tr>
<tr>
<td>
<p>unsigned long int</p>
</td>
<td>
<p>4</p>
</td>
<td>
<p>0 to 4,294,967,295&nbsp;</p>
</td>
<td>
<p>%lu</p>
</td>
</tr>
<tr>
<td>
<p>unsigned long long int</p>
</td>
<td>
<p>8</p>
</td>
<td>
<p>0 to 2^64-1&nbsp;</p>
</td>
<td>
<p>%llu</p>
</td>
</tr>
<tr>
<td>
<p>signed char</p>
</td>
<td>
<p>1</p>
</td>
<td>
<p>-128 to 127&nbsp;</p>
</td>
<td>
<p>%c</p>
</td>
</tr>
<tr>
<td>
<p>unsigned char</p>
</td>
<td>
<p>1</p>
</td>
<td>
<p>0 to 255&nbsp;</p>
</td>
<td>
<p>%c</p>
</td>
</tr>
<tr>
<td>
<p>long double</p>
</td>
<td>
<p>16</p>
</td>
<td>
<p>3.4E-4932 to 1.1E+4932</p>
</td>
<td>
<p>%Lf</p>
</td>
</tr>
</tbody></table>



## `Signed`
When a signed variable is declared, it indicates that it can have both negative and positive values. This modifier can be applied to data types like int, char, short, and long. In C, the value stored in a variable is signed by default. For example in the declaration, int var = 10, the int variable is a signed int by default and the variable var can hold both negative and positive values.

`Syntax` 
```c
signed type var_name;
```
Examples
```c
signed int var1;

signed short int var2;

signed long int var3;

signed long long int var4;

signed char var5;
```
```diff
-Note: Since all data types are signed by default, the best practice is to declare variables without using the suffix “signed”.
```
- An n-bit variable can contain 2n  possible values. So, an 8-bit signed integer can store 28 i.e. 256 possible values.

<table><tbody>
<tr>
<td>
<p>Bits</p>
</td>
<td>
<p>Range</p>
</td>
</tr>
<tr>
<td>
<p>8 bit signed</p>
</td>
<td>
<p>-128 to 127</p>
</td>
</tr>
<tr>
<td>
<p>16 bit signed</p>
</td>
<td>
<p>-32,768 to 32,767</p>
</td>
</tr>
<tr>
<td>
<p>32 bit signed</p>
</td>
<td>
<p>-2,147,483,648 to 2,147,483,647</p>
</td>
</tr>
<tr>
<td>
<p>64 bit signed</p>
</td>
<td>
<p>-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807</p>
</td>
</tr>
</tbody></table>

<hr>


 The following example illustrates the size occupied by signed variables.
```c
#include <stdio.h>

int main()

{

    // declare signed variables.

    signed int var1;

    signed short int var2;

    signed long int var3;

    signed long long int var4;

    signed char var5;

    // print the size occupied by the signed variables.

    printf("The size occupied by signed int is: %d\n", sizeof(signed int));

    printf("The size occupied by signed short int is: %d\n", sizeof(signed short int));

    printf("The size occupied by signed long int is: %d\n", sizeof(signed long int));

    printf("The size occupied by signed long long int is: %d\n", sizeof(signed long long int));

    printf("The size occupied by signed char is: %d\n", sizeof(signed char));

    printf("\n\n");

}
```


## `Unsigned`

- An unsigned variable can contain only 0 and positive values (non-negative values). This data type modifier can be used with the types- int, char, short, and long. To declare an unsigned variable the suffix “unsigned” is used before the type of the variable. 

- The range of possible values of an unsigned variable is nearly double the range of a signed variable. This data type modifier is useful for positive entities like age, salary, etc.

`Syntax`
```c
unsigned type var_name;
```
`Examples`
```c
unsigned int var1;

unsigned short int var2;

unsigned long int var3;

unsigned long long int var4;

unsigned char var5;
```
- In a 32-bit system, an unsigned integer can hold values up to 232-1 i.e. 0 to 4,294,967,295 values.

<table><tbody>
<tr>
<td>
<p>Bits</p>
</td>
<td>
<p>Range</p>
</td>
</tr>
<tr>
<td>
<p>8 bit unsigned</p>
</td>
<td>
<p>0 to 255</p>
</td>
</tr>
<tr>
<td>
<p>16 bit unsigned</p>
</td>
<td>
<p>0 to 65535</p>
</td>
</tr>
<tr>
<td>
<p>32 bit unsigned</p>
</td>
<td>
<p>0 to 4294967295</p>
</td>
</tr>
<tr>
<td>
<p>64 bit unsigned</p>
</td>
<td>
<p>0 to 18446744073709551615</p>
</td>
</tr>
</tbody></table>


 The following example illustrates the size occupied by unsigned variables.
```c
#include <stdio.h>

int main()

{

    // declare unsigned variables.

    unsigned int var1;

    unsigned short int var2;

    unsigned long int var3;

    unsigned long long int var4;

    unsigned char var5; 

    // print the size occupied by the unsigned variables.

    printf("The size occupied by unsigned int is: %d\n", sizeof(unsigned int));

    printf("The size occupied by unsigned short int is: %d\n", sizeof(unsigned short int));

    printf("The size occupied by unsigned long int is: %d\n", sizeof(unsigned long int));

    printf("The size occupied by unsigned long long int is: %d\n", sizeof(unsigned long long int));

    printf("The size occupied by unsigned char is: %d\n", sizeof(unsigned char)); 

    printf("\n\n"); 

}
```

## `Long`
The long data type modifier is used when the value to be stored is `large and exceeds the usual integer range`. It can be applied to `int and double data types` in C. A long integer variable takes `4 bytes of memory space in a 32-bit system`. 

`Syntax`
```c
long type var_name;
```
`Examples`
```c
long int var1;       // or long var1

long long int var2;  // or long long var2

long double var3;
```
- In C, `“long int”` is equivalent to simply `“long”` and similarly instead of `“long long int”` you can simply write `“long long”`. This is commonly used in competitive programming as the inputs there can be very large.

The following example illustrates the size occupied by long variables.
```c
#include <stdio.h>

int main()

{

    // declare long variables.

    long int var1;      

    long long int var2;  

    long double var3;

    // print the size occupied by the long variables.

    printf("The size occupied by long int is: %d\n", sizeof(long int));

    printf("The size occupied by long long int is: %d\n", sizeof(long long int));

    printf("The size occupied by long double is: %d\n", sizeof(long double));

    printf("\n\n");

}
```


## `Short`
The short data type modifier is used for saving memory consumption. It can contain whole numbers lying in the range from -32768 to 32767. It can only be applied with an int data type and it’s also said to be a 16-bit signed two's complement integer.

`Syntax`
```c
short int var_name;

// or

short var_name;
```
- Note: This data type modifier takes 2 times less memory than the usual integer variable. 

The following example illustrates the size occupied by long variables.
```c
#include <stdio.h>

int main()

{

    // declare a short variable.

    short int var_name; 

    // print the size occupied by the long variables.

    printf("The size occupied by long int is: %d\n", sizeof(short int));

    printf("\n\n");   

    return 0;

}
```