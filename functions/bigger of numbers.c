#include <stdio.h>

int big(int, int);
main()
{
    /*
    int a,b,c,d;
    printf("Enter a,b ");
    scanf("%d%d",&a,&b);

    c = big(a,b);
    printf("Bigger number is %d",c);

    // 3 numbers
    printf("\nEnter a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    d = big(a,b);
    d = big(c,d);
    printf("Bigger number is %d", d);
    */
    //10 numbers
    int x,y;
    printf("Enter x");
    scanf("%d", &x);
    y = x;

    for (int i = 1; i <= 9; i++)
    {
        printf("enter a number");
        scanf("%d", &x);
        y = big(x,y);
    }
    printf("Bigger number is %d", y);
    
}

int big(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}