#include<stdio.h>

/*

// simple function
void add();
main()
{
    add();
}

void add()      
{
    int a,b,c;
    printf("Enter a,b ");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("%d", c);
}
*/

/*
// Parameterized Function
void add(int, int);

main()
{
    int a,b;
    printf("Enter a,b ");
    scanf("%d%d",&a,&b);
    add(a, b);      // actual parameter
}

void add(int a,int b)       // formal parameter
{
    int c;
    c = a+b;
    printf("%d", c);
}
*/

//Function with return type

int add(int, int);
main()
{
    int a,b,c;
    printf("Enter a,b ");
    scanf("%d%d",&a,&b);
    c = add(a, b);  
    printf("%d", c);
}

int add(int a, int b)
{
    return a+b;
}