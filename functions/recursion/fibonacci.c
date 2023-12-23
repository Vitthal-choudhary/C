#include <stdio.h>

void fib(int, int);

main()
{
    int x=0,y=1;
    printf("%d %d ",x,y);
    fib(x,y);
}

void fib(int x, int y)
{
    int z;
    if (x+y <100)
    {
        z = x+y;
        printf("%d ",z);
        x = y;
        y = z;
        fib(x,y);
    }
    
}