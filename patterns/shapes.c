#include <stdio.h>

main()
{
    int n;
    printf("enter n ");
    scanf("%d", &n);


    // rhombus
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int l = i-1; l >=1 ; l--)
            printf("%d", l);     
        printf("\n");        
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int l = i-1; l >=1 ; l--)
            printf("%d", l);     
        printf("\n");        
    }


    // sandglass
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int l = i-1; l >=1 ; l--)
            printf("%d", l);     
        printf("\n");        
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int l = i-1; l >=1 ; l--)
            printf("%d", l);     
        printf("\n");        
    }

    // window
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for(int k=1; k <= 2*(n-i)-1; k++)
            printf(" ");
        for(int l = i; l >= 1; l--)
        {
            if (l==n)
                continue;
            printf("%d", l);            
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for(int k=1; k <= 2*(n-i)-1; k++)
            printf(" ");
        for(int l = i; l >= 1; l--)
        {
            if (l==n)
                continue;
            printf("%d", l);            
        }
        printf("\n");
    }   
}