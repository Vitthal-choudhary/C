#include<stdio.h>

main()
{
    int a[10] = {1,2,84,46,55,63,88,78,41,20},temp;

    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nSorted array\n");
    for (int j = 0; j <= 10; j++)
        printf("%d\n", a[j]);    
}