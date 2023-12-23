#include <stdio.h>

main()
{
    // init  --->  a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}
    int a[3][3],i,j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("enter element ");
            scanf("%d", &a[i][j]);
        }
    }

    for ( i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d  ", a[i][j]);        // to print column wise  put a[j][i]
        }
        printf("\n");
    }   
}