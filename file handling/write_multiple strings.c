#include <stdio.h>


main()
{
    FILE *fp;
    char s[80];

    fp = fopen("Poem.txt", "w");
    printf("Enter a poem\n");

    while (strlen(gets(s))>0)
    {
        fputs(s,fp);
        fputs("\n", fp);
    }
    fclose(fp);   
}