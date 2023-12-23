# include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    char address[30];
};

main()
{
    struct student *s;
    s = (struct student*)malloc(sizeof(struct student));
    printf("Enter a Roll Number ");
    scanf("%d",&s ->roll_no);
    fflush(stdin);
    gets(s ->name);
    gets(s ->address);
}