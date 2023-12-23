/*C to F*/

#include <stdio.h>

main()
{
    float c,f;
    printf("Enter C \n");
    scanf("%f", &c);
    f = (9*c)/5.0+32;
    printf("Temperature in Fahrenheit=%f", f);
}