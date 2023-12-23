#include <stdio.h>

main()
{
    int a;
    float b;
    char c;

    FILE *handle;
    handle = fopen("1.txt", "w");
    printf("Enter data ");
    scanf("%d%f", &a,&b);
    fflush(stdin);
    scanf("%c", &c);

    fprintf(handle, "%d  %f  %c", a,b,c);
    fclose(handle);
}