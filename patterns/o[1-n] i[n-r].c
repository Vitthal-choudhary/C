/*
6 5 4 3 2 1 
6 5 4 3 2 
6 5 4 3 
6 5 4 
6 5
6
*/

#include <stdio.h>

int main()
{
    int n;
    printf("enter n "); scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >=i ; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
