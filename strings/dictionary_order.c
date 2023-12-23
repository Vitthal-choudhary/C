#include <stdio.h>
#include <string.h>


main()
{
    char a[10], b[10];
    puts("enter a string");
    gets(a);
    puts("enter a string");
    gets(b);

    if (strcmp(a,b) == 0)
        printf("similar strings");
    else
        if (strcmp(a,b) < 0)
        {
            puts(a);
            puts(b);
        }
        else 
        {
            puts(b);
            puts(a);
        }
        

}