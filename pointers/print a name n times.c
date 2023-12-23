#include <stdio.h>
/*
// call by value
void display(char [], int);

main()
{
    char s[20];
    int n;
    gets(s);
    scanf("%d", &n);
    display(s, n);
}

void display(char s[20], int n)
{
    for (int i = 1; i <= n; i++)
        puts(s);
}

*/
// call by reference
void display(char *s[20], int *n);

main()
{
    char s[20];
    int n;
    gets(s);
    scanf("%d", &n);
    display(&s[0], &n);
}

void display(char *s[20], int *n)
{
    for (int i = 1; i <= *n; i++)
        puts(s);
}