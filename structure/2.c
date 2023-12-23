#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    char address[30];
};

main()
{
    struct student s[3];
    for (int i = 0; i <= 2; i++)
    {
        printf("Enter a roll number ");
        scanf("%d", &s[i].roll_no);
        fflush(stdin);
        printf("Enter a name ");
        gets(s[i].name);
        printf("Enter address ");
        gets(s[i].address);   
    }
    printf("Roll_no\tName\tAddress\n");
    for (int i = 0; i <= 2; i++)
        printf("%d\t%s\t%s\n", s[i].roll_no, s[i].name, s[i].address);
    
}
    
    