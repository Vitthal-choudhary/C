#include <stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

main()
{
    int a,b,choice; float result;
    printf("Enter your choice\n1 Addition\n2 Subtraction\n3 Division\n4 Multiplication\n");
    scanf("%d", &choice);
    printf("enter 2 numbers \n");
    scanf("%d%d", &a, &b);

    switch(choice)
    {
        case 1:
            result = add(a,b);
            printf("Result = %f",result);
            break;
        case 2:
            result = sub(a,b);
            printf("Result = %f", result);
            break;
        case 3:
            result = div(a,b);
            printf("Result = %f", result);
            break;
        case 4:
            result = mul(a,b);
            printf("result = %f", result);
            break;
        default:
            printf("invalid choice");
    }
}

int add(int x,int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int mul(int x, int y)
{
    return x*y;
}

int div(int x, int y)
{
    return x/y;
}