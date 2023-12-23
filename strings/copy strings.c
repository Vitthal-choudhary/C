#include <stdio.h>

main()
{
    // copy a into b
    /*
    int i=0,j;
    char a[10],b[10];

    puts("Enter a string");
    gets(a);

    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    puts(b);
    */

    // copy a,b into c;
    int i,j;
    char a[10],b[10],c[20];
    puts("enter a string");
    gets(a);
    puts("enter a string");
    gets(b);

    i = 0;
    while (a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }
    
    j=0;

    while (b[j] != '\0')
    {
        c[i] = b[j];
        i++;
        j++;
    }
    c[i] = '\0';
    puts(c);
}