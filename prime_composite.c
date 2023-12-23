#include<stdio.h>

main()
{
    int n,factors;
    printf("Enter number ");
    scanf("%d", &n);

    if (n==1)
        printf("neither prime nor composite");
    else
    {
        for (int i = 1; i <= n/2; i++)
        {
            if (n%i==0)
                factors++;
        }
        if (factors==1)
            printf("prime");
        else
            printf("composite");
    }
}