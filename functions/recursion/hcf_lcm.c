#include <stdio.h>

int hcf(int ,int);
main()
{
    int x,y,dividend,divisor,h;

    printf("enter x,y ");
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
    
    h = hcf(x,y);

    printf("HCF = %d", h);
    printf("LCM = %d", (x*y)/h);
}

int hcf(int x, int y)
{
    if (y == 0)
        return x;
    else
        return hcf(y, x%y);
}