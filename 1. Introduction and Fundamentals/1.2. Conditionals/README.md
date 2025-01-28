# Conditionals in C

Conditionals in C allow you to execute different blocks of code based on certain conditions. Here are the main types of conditionals:

## if Statement

The `if` statement executes a block of code if the value of a specified condition is `true`.

``` C
if (condition) {
    // code to be executed if condition is true
}
```

## if-else Statement

The `if-else` statement executes one block of code if a condition is true, and another block of code if the condition is false.

``` C
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
```

## else if Statement

The `else if` statement allows you to check multiple conditions.

```c
if (condition1) {
    // code to be executed if condition1 is true
} else if (condition2) {
    // code to be executed if condition2 is true
} else {
    // code to be executed if all conditions are false
}
```

## switch Statement

The `switch` statement allows you to execute one block of code out of many based on the value of a variable.

```c
switch (variable) {
    case value1:
        // code to be executed if variable == value1
        break;
    case value2:
        // code to be executed if variable == value2
        break;
    // you can have any number of case statements
    default:
        // code to be executed if variable doesn't match any case
}
```

## Example

Here is an example that demonstrates the use of `if-else` and `switch` statements:

```c
#include <stdio.h>

int main() {
    int number = 10;

    // if-else example
    if (number > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }

    // switch example
    switch (number) {
        case 0:
            printf("The number is zero.\n");
            break;
        case 10:
            printf("The number is ten.\n");
            break;
        default:
            printf("The number is neither zero nor ten.\n");
    }

    return 0;
}
```

This example checks if a number is positive using an `if-else` statement and then uses a `switch` statement to check the value of the number.

## Logical Operators

Logical operators are used to combine multiple conditions. The main logical operators in C are:

## Equality Operator (`==`)

The equality operator `==` is used to compare two values to check if they are equal. It returns `true` if the values are equal and `false` otherwise. This operator is commonly used in conditional statements.

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;

    if (a == b) {
        printf("a and b are equal.\n");
    } else {
        printf("a and b are not equal.\n");
    }

    return 0;
}
```

### AND Operator (`&&`)

The `&&` operator returns `true` if both conditions are true.

```c
if (condition1 && condition2) {
    // code to be executed if both condition1 and condition2 are true
}
```

### OR Operator (`||`)

The `||` operator returns `true` if at least one of the conditions is true.

```c
if (condition1 || condition2) {
    // code to be executed if either condition1 or condition2 is true
}
```

### NOT Operator (`!`)

The `!` operator returns `true` if the condition is false.

```c
if (!condition) {
    // code to be executed if condition is false
}
```

## Example

Here is an example that demonstrates the use of logical operators:

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // AND operator example
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    }

    // OR operator example
    if (a > 0 || b < 0) {
        printf("At least one number is positive.\n");
    }

    // NOT operator example
    if (!(a < 0)) {
        printf("The number a is not negative.\n");
    }

    return 0;
}
```

This example checks if both numbers are positive using the `&&` operator, if at least one number is positive using the `||` operator, and if a number is not negative using the `!` operator.