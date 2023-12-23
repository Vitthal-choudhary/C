#include <stdio.h>

/*
// call by value
void swap(int, int);
main()
{
    int a,b;
    printf("enter a and b ");
    scanf("%d%d", &a,&b);
    swap(a,b);
    printf("Values in main %d  %d",a,b);
}

void swap(int a, int b)
{
    int c;
    c = a;
    a=b;
    b=c;
    printf("Values in function  %d  %d", a, b);
}
*/

// call by reference
void swap(int *, int *);
main()
{
    int a,b;
    printf("enter a and b ");
    scanf("%d%d", &a,&b);
    swap(&a, &b);
    printf("Values in main %d  %d",a,b);    
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("Values in function  %d  %d", *a, *b);
}