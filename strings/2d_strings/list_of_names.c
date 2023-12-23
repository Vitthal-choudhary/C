#include<stdio.h>

main()
{
    char a[3][10];

    int i;
    for (i = 0; i <= 2; i++)
    {
        printf("Enter a name");
        gets(a[i]);
    }

    for (i = 0; i <= 2; i++)
        printf(a[i]);   

}