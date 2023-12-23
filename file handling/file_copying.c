#include<stdio.h>

main()
{
    char ch;
    FILE *from,*to;
    from = fopen("1.txt", "r");
    to = fopen("dsads.txt", "w");

    while (1)
    {
        ch = fgetc(from);

        if (ch == EOF)
            break;
        fputc(ch, to);
    }
    fclose(from);
    fclose(to);
    
}