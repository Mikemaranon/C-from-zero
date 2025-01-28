# Looping Systems in C

In C programming, loops are used to execute a block of code repeatedly until a specified condition is met. There are three main types of loops in C:

## 1. `while` Loop

The `while` loop is used when the number of iterations is not known and depends on a condition. The loop continues as long as the condition is true.

```c
while (condition) {
    // Code to be executed
}
```

Example:
```c
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
```

## 2. `do-while` Loop

The `do-while` loop is similar to the `while` loop, but it guarantees that the code block is executed at least once before the condition is tested.

```c
do {
    // Code to be executed
} while (condition);
```

Example:
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 10);
```

## 3. `for` Loop

The `for` loop is used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.

```c
for (initialization; condition; increment/decrement) {
    // Code to be executed
}
```

Example:
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

## Summary

- **`for` loop**: Best when the number of iterations is known.
- **`while` loop**: Best when the number of iterations is not known and depends on a condition.
- **`do-while` loop**: Ensures the code block is executed at least once.

Understanding these loops will help you control the flow of your programs effectively.