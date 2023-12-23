/*Average of 5 numbers*/

#include<stdio.h>

main()
{
    float a,b,c,d,e,f;
    printf("Enter 5 numbers\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    f = (a+b+c+d+e)/5.0;
    printf("Average = %f",f);
}