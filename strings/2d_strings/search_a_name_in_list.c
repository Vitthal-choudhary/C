#include<stdio.h>
#include <string.h>

main()
{
    char a[3][10], b[10];

    int i;
    for (i = 0; i <= 2; i++)
    {
        printf("Enter a name");
        gets(a[i]);
    }

    printf("Enter name u want to search  ");
    gets(b);

    for (i = 0; i <= 9; i++)
    {
        if (strcmp(a[i],b) == 0)
            break;
    }

    if (i <= 9)
        printf("Found at %d", i);
    else    
        printf("Not Found");
    
}