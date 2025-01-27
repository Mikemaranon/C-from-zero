# C: A foundational programming language

Yes, even though it might sound strange, C is a high level programing language. Most people consider it a low level one because of 
its complexity compared to other languages such as Python or JavaScript. This is not only incorrect, but we can even cosider C the 
father of the most popular high level languages.

## Variables and types

To start this module, we will be introducing the fundamentals of any typed programming language: the variables and their different 
types. First of all, we can consider a variable like a small box. In this box we will store some information that we have the 
intention to use in the future. 

### Numeric types: `int`, `float` and `double`

Lets say we want to store a integer number such as 1 or 7, for this, we will use the type `int`.
``` C
int number = 2;
```
If we wanted to store a decimal number, the situation would change. int would no longer be useful, and we would need to use the 
variables `float` or `double`.
``` C
int number = 2.5;       // error
double number = 2.5;
float number = 2.5;
```

### Character type: `char`

As well as we can store numbers, we can also store characters such as letters
``` C
char letter_A = 'A';
char letter_a = 'a';
```
But not only letters, special characters too
``` C
char hastag = '#';
char at = '@';
```
And even in some cases, we can store numbers as characters, in this scenario, those numbers will not have a real numeric value, they
will have the same behaviour as other characters.
``` C
char number_one = '1';
char number_nine = '9';
```
To better understand this last part, we can see an example in one of the exercises, but here i will illustrate it with the
real output
``` C
char number_one = '1';
int real_number_1 = 1;

printf("Value: %d\n", number_one);
printf("Value: %d\n", real_number_1);
```
``` yaml
[Output line 3] Value: 49
[Output line 4] Value: 1
```
This means that the computer will se `1` and `'1'` as different things, the same thing would happen if we try to compare `'A'` 
with `'#'` or `4` with `10`

### Boolean type: `bool`

Boolean type is a very special piece in the programming world. As we know, computers are constantly working with 1 and 0, which 
is a binary system. `bool` only have two values: `true` and `false`. This type of variable is mostly used as a conditional tester.
``` C
bool is_alive = true;
```
Note: `bool` is available in C starting from the C99 standard, and requires including `<stdbool.h>`.

## Arrays

An array could be considered an extension of a type. It is used to store multiple values of the same type inside an ordered list that can be accessed through indexation.  

### numeric

An array is defined by the following syntax: `type` + `name`+ [ `size` ]  
We start by accessing to the possition `0` to store or read values and end in the position `value - 1`
``` C
int multiples_of_five[10];

// rest of the code

multiples_of_five[0] = 5;
multiples_of_five[1] = 10;
multiples_of_five[2] = 15;
...
multiples_of_five[9] = 50;
```
If we want to set the values in the exact moment in which we initialize the Array, we can do it by using this syntax:  `type` + `name`+ [ `size` ] + `=` + { `values` }
``` C
int multiples_of_five[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
```
The same formula would be used for other numeric types other than `int`  
Both ways are totally valid but used for different purposes, so is necessary to know how we are going to use our array to make a better code for its manipulation.

### character (Strings)

to store a complete word such as `"hello!"` we need to create an array, as `char` types can only store an individual value. In other languages such as Java this is called a `String`, but in C we dont have this type.  

The syntax used is very similar to the one used in the definition of numeric arrays:
``` C
char string[6] = {'H', 'e', 'l', 'l', 'o', '!'};

// other way
char string_2[6];
string_2[0] = 'H';
string_2[1] = 'e';
string_2[2] = 'l';
string_2[3] = 'l';
string_2[4] = 'o';
string_2[5] = '!';
```
We can simulate a `String` by just writing the entire word between `""`
``` C
char string[6] = "Hello!";
```
we can also simulate multiple values of a type `String` by creating a two-dimensional array of `char` type:
``` C
char array[3][10] = {"Hello", "world!", ":)"}; 
```
in this case, we set a max size of the String of 10 characters, if a word is smaller there wont be any problem, but words cant be bigger than that.  
The storage of it would be like this:
``` yaml
['H']['e']['l']['l']['o'] [_] [_] [_] [_] [_]
['W']['o']['r']['l']['d']['!'][_] [_] [_] [_]
[':'][')'] [_]  [_]  [_]  [_] [_] [_] [_] [_]
``` 
### booleans

Finally, we can use arrays of booleans to store different `true` or `false` values
``` C
bool boolean_count[3] = {true, false, false};
```
## Operators

The finality of a program is to manipulate variables to get different results. to manipulate those variables we have operators.

### === `add` ===
we all know that in order to add two numbers we need the symbol `+`. In C we can add two variables using it, the process of adding values can be in the same variable overwriting the value it stores or writing the result in another variable.  

lets see an example:
``` C
int num_1 = 2, num_2 = 3;
printf("Value: %d\n", num_1);
num_1 = num_1 + num_2;          //overwrite num_1
printf("Value: %d\n", num_1);
printf("Value: %d\n", num_2);
```
``` yaml
[Output line 2] Value: 2
[Output line 4] Value: 5
[Output line 5] Value: 3
```
We have to be careful not to add values that cant be stored in certain variables, we cant add `a` to num_1 and obtain a result we would expect:
``` C
int num_1 = 2;
char character = 'a';
printf("Value: %d\n", num_1);
num_1 = num_1 + character;          //overwrite num_1
printf("Value: %d\n", num_1);
printf("Value: %d\n", num_2);
```
``` yaml
[Output line 2] Value: 2
[Output line 4] Value: 99
[Output line 5] Value: 97
```
#### mixing types
Finally, we cant mix `int` types with `double` and `float` ones, the second and third type can still store an integer value if needed, but we cant store decimal values in the first one, doint it would lose decimal data in the process.
``` C
int num_1 = 2;
float num_2 = 3.5;
printf("Value: %d\n", num_1);
num_1 = num_1 + num_2;          //overwrite num_1
printf("Value: %d\n", num_1);
printf("Value: %d\n", num_2);
```
``` yaml
[Output line 2] Value: 2
[Output line 4] Value: 5
[Output line 5] Value: 3.5
```
here we lost the 0.5 because we stored 5.5 in an `int` type, meaning we lost information. 

### === `substract` === 
To substract values, we can do it the same way as when we add them, we just need the operator `-`
``` C
int num_1 = 2, num_2 = 3;
printf("Value: %d\n", num_1);
num_1 = num_2 - num_1;          //overwrite num_1
printf("Value: %d\n", num_1);
printf("Value: %d\n", num_2);
```
``` yaml
[Output line 2] Value: 2
[Output line 4] Value: 1
[Output line 5] Value: 3
```

### === `multiply` ===
To multiply values, we can do it the same way as when we add them, we just need the operator `*`
``` C
int num_1 = 2, num_2 = 3;
printf("Value: %d\n", num_1);
num_1 = num_2 * num_1;          //overwrite num_1
printf("Value: %d\n", num_1);
printf("Value: %d\n", num_2);
```
``` yaml
[Output line 2] Value: 2
[Output line 4] Value: 6
[Output line 5] Value: 3
```

### === `divide` ===
in this situation we have a problem. Going back to [mixing types](####mixing-types) we must know that dividing integer numbers can give us decimal values, so it is important to store the value in a `float` or `double` variable.  

We also need to convert the `int` variables into `double` or `float` in the operation by writing `(double)` or `(float)` right before.  

To divide values, we need the operator `/`
``` C
int num_1 = 2, num_2 = 3;
double result = (double)num_2 / num_1;          
printf("Value: %.1f\n", result);
```
``` yaml
[Output line 3] Value: 1.5
```

## Making a basic program

to start coding in C knowing the previous parts, we need to know some basic syntax. This is the basic structure of a program in C

``` C
#include <stdio.h>

int main() {
    //code
    return 0;
}
```

if we want to work with variables to make a basic calculator to add two numbers, we have to insert the code in the `//code` comment

to print messages through the terminal we will use the in-made function `printf()` and to read an input from the user we will use `scanf()` using the following structure: ` scanf("%var", &variable)`  

Here is a list of the different `%var` values depending on the variable:
| Format Specifier | Variable Type            | Description                                                      |
|------------------|--------------------------|------------------------------------------------------------------|
| `%d`             | `int`                    | Reads a signed decimal integer.                                  |
| `%u`             | `unsigned int`           | Reads an unsigned decimal integer.                               |
| `%f`             | `float`                  | Reads a floating-point number (single precision).                |
| `%lf`            | `double`                 | Reads a floating-point number (double precision).                |
| `%c`             | `char`                   | Reads a single character.                                        |
| `%s`             | `char[]` (string)        | Reads a string (a sequence of characters until whitespace).      |
| `%x`             | `int`                    | Reads a hexadecimal integer (lowercase letters).                 |
| `%X`             | `int`                    | Reads a hexadecimal integer (uppercase letters).                 |
| `%o`             | `int`                    | Reads an octal integer.                                          |
| `%ld`            | `long int`               | Reads a long integer (signed).                                   |
| `%lld`           | `long long int`          | Reads a long long integer (signed).                              |
| `%lf`            | `double`                 | Reads a floating-point number in double precision.               |
| `%p`             | `void *`                 | Reads a pointer (memory address).                                |
| `%u`             | `unsigned int`           | Reads an unsigned integer.                                       |
| `%lf`            | `long double`            | Reads a long double (extended precision floating point).         |
  
``` C
#include <stdio.h>

int main() {
    int num_1, num_2;
    
    printf("Enter two integers: ");

    // Read two integers from user input
    scanf("%d %d", &num_1, &num_2);
    
    // Print the values entered by the user
    printf("You entered: %d and %d\n", num_1, num_2);
    
    int sum = num_1 + num_2;
    printf("The sum of %d and %d is: %d\n", num_1, num_2, sum);
    
    return 0;
}
```