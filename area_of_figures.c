# include <stdio.h>
#include <math.h>

main()
{
    float area;
    printf("Enter your choice:--\n1 Area of circle\n2 Area of Square\n3 Area of Rectangle\n4 Area of triangle ");
    int choice; scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        const float pi = 3.14; float r;
        printf("Enter Radius\n");
        scanf("%f",&r);
        area = pi*r*r;
        printf("Area=%f",area);
        break;
    case 2:
        float side;
        printf("Enter Side of square-----> ");
        scanf("%f",&side);
        area = side*side;
        printf("Area = %f",area);
        break;
    case 3:
        float l,b;
        printf("enter l and b  ");
        scanf("%f%f", &l,&b);
        area = l*b;
        printf("Area = %f", area);
        break;
    case 4:
        int a,b,c,s;float area;
        printf("Enter a,b,c ");
        scanf("%d%d%d", &a,&b,&c);

        s = (a+b+c)/2;

        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("ARea = %f", area);
        break; 
    default:
        printf("Wrong choice 😶‍🌫️🫡☠️☠️☠️");
    }
}