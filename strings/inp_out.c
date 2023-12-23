#include <stdio.h>

main()
{
    
    char a[] = "Hello World";
    char b[10] = {'H','e','l','l','o','\0'};
    char c[20];

    printf("enter string");
    //scanf("%s", c);
    gets(c);    // takes multiword string
    printf("\n%s",c);
    puts(a);
    

    char a[10], b[20];

    printf("Enter 1 word  ");
    scanf("%s", a);

    fflush(stdin);

    printf("Enter 2 words");
    gets(b);

    puts(a);puts(b);

   
    // print char by char
    int i=0;
    char b[10];
    printf("enter a string ");
    gets(b);
        
    while (b[i] != '\0')
    {
        printf("%c\n", b[i]);
        i++;
    }

    printf("\nLength of string = %d", i);
}