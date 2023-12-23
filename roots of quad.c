#include <stdio.h>
#include <math.h>

main()
{
    int a,b,c,d;
    float r1,r2;

    printf("Enter a,b,c ");
    scanf("%d%d%d", &a,&b,&c);

    d = (b*b) - (4*a*c);

    if (d==0)
    {
        r1=(float) - b/(2*a);
        r2=(float) - b/(2*a);
    }
    else
        if (d>0)
        {
            printf("Roots are real and unequal\n");
            r1 = (float)(-b+sqrt(d))/(2*a);
            r2 = (float)(-b-sqrt(d))/(2*a);
            printf("Roots are\n%d\n%d", r1, r2);
        }
        else
            printf("Imaginary Roots");
}