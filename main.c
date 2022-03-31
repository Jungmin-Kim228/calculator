#include <stdio.h>

int add(int, int);
int sub(int, int);
int multi(int, int);
int divi(int, int);

int main(int args, char* args[])
{
    int a, b, c;
    char operator;

    printf("Please enter a expression");
    scanf("%d %c %d", &a, operator, &b);

    switch (operator)
    {
        case "+":
            c = add(a,b);
            break;
        case "-":
            c = sub(a,b);
            break;
        case "*":
            c = multi(a,b);
            break;
        case "/":
            c = divi(a,b);
            break;
    }
    
    printf("result is %d.\n", c);

    return 0;
}

int add(int a, int b)
{
    //Todo
    return 0;
}

int sub(int a, int b)
{
    //Todo
    return 0;
}

int multi(int a, int b)
{
    //Todo
    return 0;
}

int divi(int a, int b)
{
    //Todo
    return 0;
}