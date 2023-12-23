#include <stdio.h>

main()
{
    int a[10] = {1,2,84,46,55,63,88,78,41,20},temp;

    for (int i = 0; i <= 8; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
        
    }
    printf("\nSorted array\n");
    for (int j = 0; j <= 10; j++)
        printf("%d\n", a[j]);
    
}