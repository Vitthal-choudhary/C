/* read marks of 5 subject find average and if avg>=70  pass, else fail */
#include <stdio.h>

main()
{
    int a,b,c,d,e,average;
    printf("Enter 5 numbers \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average = (a+b+c+d+e)/5.0;
    if (average>=70)
        printf("Pass");
    else
        printf("Fail");
}