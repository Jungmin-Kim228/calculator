#include <stdio.h>

int add(int, int);
int sub(int, int);
int multi(int, int);
int divi(int, int);

int main(int args, char* args[])
{
    int number1, number2, result;
    char operator;

    printf("Please enter a expression(ex> 1 + 2): ");
    scanf("%d %c %d", &number1, operator, &number2);

    switch (operator)
    {
        case "+":
            result = add(number1,number2);
            break;
        case "-":
            result = sub(number1,number2);
            break;
        case "*":
            result = multi(number1,number2);
            break;
        case "/":
            result = divi(number1,number2);
            break;
    }
    
    printf("result is %d.\n", result);

    return 0;
}

int add(int number1, int number2)
{
    result = number1 + number2;
    return result;
}

int sub(int number1, int number2)
{
    return number1 - number2;
}

int multi(int number1, int number2)
{
    return number1 * number2;
}

int divi(int number1, int number2)
{
    result = number1 / number2;    
    return result;
}