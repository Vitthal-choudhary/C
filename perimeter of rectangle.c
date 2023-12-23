/*Perimeter of a rectangle*/

#include <stdio.h>

main()
{
    float l,b,per;
    printf("Enter l,b\n");
    scanf("%f%f",&l,&b);
    per = 2*(l+b);
    printf("Perimeter is =%f",per);
}