#include <stdio.h>

int power(int, int);

main()
{
    int x,n,p;
    printf("Enter x,n ");
    scanf("%d%d", &x,&n);

    p = power(x,n);
    printf("%d", p);
}

int power(int x, int n)
{
    if (n==0)
        return 1;
    else
        return  x*power(x,n-1);
}