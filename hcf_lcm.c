#include <stdio.h>

main()
{
    int x,y,dividend,divisor,rem;
    printf("Enter x, y  ");
    scanf("%d%d", &x,&y);

    if (x>y)
    {
        dividend = x;
        divisor = y;
    }
    else
    {
        dividend = y;
        divisor = x;
    }
    
    while (dividend % divisor != 0)
    {
        rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }

    printf("Hcf is %d", divisor);
    printf("\n");
    printf("Lcm is %d",(x*y)/divisor);
    
}