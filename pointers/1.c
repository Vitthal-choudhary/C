#include <stdio.h>

main()
{
    int a,*b,**c;
    printf("Enter a ");
    scanf("%d", &a);

    b = &a;
    //printf("%d\n%d\n%d\n",a,b,*b);
    c = &b;
    printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,*b,c,*c,**c);
}