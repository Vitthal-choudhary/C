#include <stdio.h>

main()
{
    char a[10]; 
    int i;
    printf("Enter string ");
    gets(a);

    while (a[i] != '\0')    
        i++;
    i--;

    while (i >= 0)
    {
        printf("%c", a[i]);
        i--;
    }
    
    
}