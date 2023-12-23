#include <stdio.h>
#include <string.h>


main()
{
    /*
    char a[10], b[10];
    puts("enter a string");
    gets(a);
    strcpy(b,a);
    strrev(a);

    if (strcmp(a,b) == 0)
        printf("Palindrome");
    else
        printf("not palindrome");
    */
    // Without functions
    
    char a[10];
    int len,i =0;       
    puts("enter a string");
    gets(a);

    while (a[i] != '\0')
        i++;
    len = i;;

    for (i = 0; i < len/2; i++)
    {
        if (a[i] != a[len-1-i])
            break;
    }

    if (i == len/2)
        printf("Palindrome");
    else
        printf("Not palindrome");  
}