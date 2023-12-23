#include <stdio.h>

int area_of_circle(int);
void si(int,int,int);
void vowel();


main()
{
    int radius;float area;
    printf("enter radius ");
    scanf("%d", &radius);

    area = area_of_circle(radius);
    printf("ARea = %f", area);

    int p,r,t;
    printf("\nEnter p,r,t ");
    scanf("%d%d%d", &p,&r,&t);
    si(p,r,t);
    vowel();
}

int area_of_circle(int r)
{
    const pi = 3.14;
    return pi*r*r;
}

void si(int p,int r,int t)
{
    int si = (p*r*t)/100;
    printf("%d\n", si);
}

void vowel()
{
    char a;
    printf("enter character");
    scanf("%c", &a);

    if (a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
        printf("Vowel");
    else
        printf("Consonant");
}