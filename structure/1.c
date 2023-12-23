#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    char address[30];
};

main()
{
    struct student s;
    printf("Enter a roll number ");
    scanf("%d", &s.roll_no);
    fflush(stdin);
    printf("Enter a name ");
    gets(s.name);
    printf("Enter address ");
    gets(s.address);
    printf("%d\n%s\n%s", s.roll_no, s.name, s.address);
    
}