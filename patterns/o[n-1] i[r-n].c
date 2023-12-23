/*
9 
8 9 
7 8 9 
6 7 8 9 
5 6 7 8 9
4 5 6 7 8 9
3 4 5 6 7 8 9
2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 
*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter n "); scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
