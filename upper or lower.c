#include<stdio.h>

main()
{
    char ch;
    printf("Enter a character "); scanf("%c",&ch);

    if (ch>=65 && ch <=90)
        {
            printf("Upper Case\n");
            ch += 32;
            printf("in lower case --> %c",ch);
        }
    else 
        if (ch>=97 && ch <=122)
            {
                printf("Lower Case\n");
                ch -= 32;
                printf("in Upper case ----> %c",ch);
            }
        else
            printf("Other Symbol");
}
