#include <stdio.h>

main()
{
    char a[10], b[10];
    int i;
    puts("enter a string");
    gets(a);
    puts("enter a string");
    gets(b);

    i=0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            break;
        i++;        
    }
    if (a[i] == '\0' && b[i]=='\0')
        printf("Similar strings");
    else
        printf("Non similar strings");      


    /*
    if (strcmp(a,b) == 0)
        printf("similar strings");
    */
}