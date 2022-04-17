# Operators


- An operators is a symbol that tells the computer to perform certain mathematical or logical manipulations.

- e.g   =>   = , + ,- ,/ ,*, % ,++ ,-- ,+= ,-= ,*= ,/= ,%= ,**= ,//= ,** ,//

- Operators are used to manipulate the values of variables.

- They usually form a part of mathematical or logical operators. 


`WE HAVE NUMBERS OF OPERATORS`

- Arithmetic Operators
- Relational Operators
- Logical Operators
- Assignment Operators
- Increment/Decrement Operators
- Conditional Operators
- Bitwise Operators
- special Operators


## Arithmetic Operators

An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).


<div>
    <table border="0"><thead><tr><th>Operator</th>
			<th>Meaning of Operator</th>
		</tr></thead><tbody><tr><td>+</td>
			<td>addition or unary plus</td>
		</tr><tr><td>-</td>
			<td>subtraction or unary minus</td>
		</tr><tr><td>*</td>
			<td>multiplication</td>
		</tr><tr><td>/</td>
			<td>division</td>
		</tr><tr><td>%</td>
			<td>remainder after division (modulo division)</td>
		</tr></tbody></table></div>


Example 1: Arithmetic Operators
```c
// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}

```

```c
Output

a+b = 13
a-b = 5
a*b = 36
a/b = 2
```
Remainder when a divided by b=1

The operators +, - and * computes addition, subtraction, and multiplication respectively as you might have expected.

In normal calculation, 9/4 = 2.25. However, the output is 2 in the program.

It is because both the variables a and b are integers. Hence, the output is also an integer. The compiler neglects the term after the decimal point and shows answer 2 instead of 2.25.

The modulo operator % computes the remainder. When a=9 is divided by b=4, the remainder is 1. The % operator can only be used with integers.


Suppose a = 5.0, b = 2.0, c = 5 and d = 2. Then in C programming,

```c
// Either one of the operands is a floating-point number
a/b = 2.5  
a/d = 2.5  
c/b = 2.5  

// Both operands are integers
c/d = 2
```


## Relational Operators

A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.


<div class="table-responsive"><table border="0"><thead><tr><th>Operator</th>
			<th>Meaning of Operator</th>
			<th>Example</th>
		</tr></thead><tbody><tr><td>==</td>
			<td>Equal to</td>
			<td><code>5 == 3</code> is evaluated to 0</td>
		</tr><tr><td>&gt;</td>
			<td>Greater than</td>
			<td><code>5 &gt; 3</code> is evaluated to 1</td>
		</tr><tr><td>&lt;</td>
			<td>Less than</td>
			<td><code>5 &lt; 3</code> is evaluated to 0</td>
		</tr><tr><td>!=</td>
			<td>Not equal to</td>
			<td><code>5 != 3</code> is evaluated to 1</td>
		</tr><tr><td>&gt;=</td>
			<td>Greater than or equal to</td>
			<td><code>5 &gt;= 3</code> is evaluated to 1</td>
		</tr><tr><td>&lt;=</td>
			<td>Less than or equal to</td>
			<td><code>5 &lt;= 3</code> is evaluated to 0</td>
		</tr></tbody></table></div>



<br>
<br>

Example 4: Relational Operators

```c
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);  // 


    //    =      => assignement operator

    int a = 5;
    int b;
    b = a;  // b = 5

    //    ==     => equal to operator

    //    ==     =>   True & false  =>    1  &  0


    printf(a == 5);   => 1

    // "true" "false"

    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);


    // !=    => not equal to operator

    ! Not    !(true) => (false)

    //      !=

    //    !=     =>   True & false  =>    1  &  0

    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}
```
Output
```c

// 1  means True & 0 means False.

5 == 5 is 1
5 == 10 is 0
5 > 5 is 0
5 > 10 is 0
5 < 5 is 0
5 < 10 is 1
5 != 5 is 0
5 != 10 is 1
5 >= 5 is 1
5 >= 10 is 0
5 <= 5 is 1
5 <= 10 is 1 
```



## Logical Operators

An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.


<div class="table-responsive"><table border="0"><thead><tr><th>Operator</th>
			<th>Meaning</th>
			<th>Example</th>
		</tr></thead><tbody><tr><td>&amp;&amp;</td>
			<td>Logical AND. True only if all operands are true</td>
			<td>If c = 5 and d = 2 then, expression <code>((c==5) &amp;&amp; (d&gt;5))</code> equals to 0.</td>
		</tr><tr><td>||</td>
			<td>Logical OR. True only if either one operand is true</td>
			<td>If c = 5 and d = 2 then, expression <code>((c==5) || (d&gt;5))</code> equals to 1.</td>
		</tr><tr><td>!</td>
			<td>Logical NOT. True only if the operand is 0</td>
			<td>If c = 5 then, expression <code>!(c==5)</code> equals to 0.</td>
		</tr></tbody></table></div>



## Assignment Operators

-  =   Assigns the value of the right operand to the variable specified by the left operand.

-	+=  Adds the value of the right operand to the variable specified by the left operand.

int b = 1;
a = b + 5;
a += 5;
a *= 5;  // a*5 = a;
a /= 5;
a %= 5;
a -= 5;


a += 1;

<!--  a+5=a;  -->




- -=  Subtracts the value of the right operand from the variable specified by the left operand.

- *=  Multiplies the value of the right operand with the variable specified by the left operand.

- /=  Divides the value of the right operand with the variable specified by the left operand.

- %=  Modulus of the value of the right operand with the variable specified by the left operand.


## Increment Operators and Decrement Operators

### post-increment
- a++  Increments the value of the variable by 1 and returns the value of the variable before increment.
- a--  Decrements the value of the variable by 1 and returns the value of the variable before decrement.

int a ;

scanf("%d",&a);  //  a = 5
printf("%d",a); //  a = 6
a++;



### pre-increment
- ++a  Increments the value of the variable by 1 and returns the value of the variable after increment.
- --a  Decrements the value of the variable by 1 and returns the value of the variable after decrement.


int a ;

scanf("%d",&a);  //  a = 5

++a;
printf("%d",a); // 


//  k = k + 1 ;

++k   k++

++k is equal to k + 1
k++ is equal to k , k = k+1

## Conditional Operators

? : If the first operand is true, then the second operand is evaluated and its value is returned. If the first operand is false, then the third operand is evaluated and its value is returned.


a = 10;
b = 20;
x = (a > b) ? my_fun() : my_fun2();

(a > b)  => False  => my_fun2()

if (a > b )
{
	my_fun();
}
else
{
	my_fun2();
}


## Bitwise Operators

- &  Bitwise AND. The result is 1 if both bits are 1, otherwise 0.








- |  Bitwise OR. The result is 1 if either of the bits is 1, otherwise 0.
- ^  Bitwise XOR. The result is 1 if the bits are different, otherwise 0.
- !  Bitwise NOT. The result is 1 if the bit is 0, otherwise 0.
- << Left shift. The bits are shifted to the left by the number of bits specified by the right operand.


a <<  2;

a = 22 => 10110

22 << 4; => 10110 << 2 => 101100

a = 22*(2^4)  = > 88  => 101100





- >> Right shift. The bits are shifted to the right by the number of bits specified by the right operand.

a >>  2;

a = 55 => 110111

22 >> 2; => 110111 >> 2 => 101

a = 55/(2^2) = > 55/4  => 110111/4 = 1101  => 13.75

