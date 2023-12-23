#include <stdio.h>

int add(int *, int *);
main()
{
    int a,b,c;
    printf("enter a,b  ");
    scanf("%d%d",&a,&b);
    c = add(&a,&b);
    printf("%d", c);
}

int add(int *a, int *b)
{
    return *a+*b;
}