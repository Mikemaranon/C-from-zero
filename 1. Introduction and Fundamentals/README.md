# C, a high-level programming language

Yes, even though it might sound strange, C is a high level programing language. Most people consider it a low level one because of 
its complexity compared to other languages such us Python or JavaScript. This is not only incorrect, but we can even cosider C the 
father of the most popular high level languages

To start this module, we will be introducing the fundamentals of any typed programming language: the variables and their different 
types. First of all, we can consider a variable like a small box. in this box we will store some information that we have the 
intention to use in the future. 

## Numeric types: `int`, `float` and `double`

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

## Character type: `char`

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
and even in some cases, we can store numbers as characters, in this scenario, those numbers will not have a real numeric value, they
will have the same behaviour as other characters.
``` C
char number_one = '1';
char number_nine = '9';
```
to better understand this last part, we can see an example in one of the exercises, but here i will illustrate it with the
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

## Boolean type: `bool`

Boolean type is a very special piece in the programming world. As we know, computers are constantly working with 1 and 0, which 
is a binary system