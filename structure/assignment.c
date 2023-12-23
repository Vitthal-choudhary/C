#include <stdio.h>

struct DOB
{
    int date;
    char month[20];
    int year;
};

struct Adress
{
    int h_no;
    char city[20];
    char state[20];
};

struct student
{
    int roll;
    char name[20];
    struct Adress adress;
    struct DOB date_of_birth;
};

struct teacher
{
    int age;
    char name[20];
    struct Adress adress;
};


main()
{
    struct student s;
    printf("Enter a roll number ");
    scanf("%d", &s.roll);
    fflush(stdin);
    printf("Enter a name ");
    gets(s.name);
    printf("Enter house number ");
    scanf("%d",&s.adress.h_no);
    fflush(stdin);
    printf("Enter city ");
    gets(s.adress.city);
    printf("Enter state ");
    gets(s.adress.state);

    printf("Roll\tName\thouse\tcity\tstate\n");

    printf("%d\t%s\t%d\t%s\t%s", s.roll,s.name,s.adress.h_no,s.adress.city,s.adress.state);
}