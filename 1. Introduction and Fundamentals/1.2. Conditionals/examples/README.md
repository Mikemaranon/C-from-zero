# Coding examples of Module 1.2: Conditionals

## example 1: calculator 2.0
Taking the calculator of `module 1.1`, set a system where the user can input which option he wants to calculate in a menu. like this:
``` yaml
[Output] Value: =====================
[Output] Value: |   1. add          |
[Output] Value: |   2. substract    |
[Output] Value: |   3. multiply     |
[Output] Value: |   4. divide       |
[Output] Value: =====================
[Output] Value: Select an option
```
there will be an output with the result.  
Use a `switch`

## example 2: grade evaluator
Write a program that evaluates a student's grade based on their score. The program should ask the user to input a score between 0 and 100, and then output the corresponding grade based on the following criteria:

- If the score is 90 or above, the grade is 'A'.
- If the score is 80 to 89, the grade is 'B'.
- If the score is 70 to 79, the grade is 'C'.
- If the score is 60 to 69, the grade is 'D'.
- If the score is below 60, the grade is 'F'.

Use `if-else` statements to implement the logic.