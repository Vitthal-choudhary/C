# include<stdio.h>
#include <string.h>

main()
{
    char a[] = "Hello";
    int size = strlen(a);       
    printf("%d",size);

    char b[10];
    strcpy(b,a);
    puts(b);

    strcat(a,b);
    puts(a);

    int r = strcmp(a,b);
    printf("%d", r);

    puts(strrev(a));
    puts(strlwr(b));
    puts(strupr(b));
}