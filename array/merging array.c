#include <stdio.h>

main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {11,12,13,14,15,16,17,18,19,20};
    int c[20];

    for (int i = 0; i < 20; i++)
    {
        if (i<10)
            c[i] = a[i];
        else
            c[i] = b[i-10];
        printf("%d\n", c[i]);        
    }
}