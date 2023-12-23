#include <stdio.h>

main()
{   /*
    //2 numbers 
    int a,b;
    printf("enter 2 numbers");
    scanf("%d%d", &a, &b);
    
    if (a>b)
        printf("%d",a," is bigger");
    else
        printf("%d",b," is greater");
    // alternate way
    a > b ? printf("%d",a) : printf("%d",b);
    */
    
    /*
    //3 Numbers
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b)
        if (a>c)
            printf("Big%d",a);
        else
            printf("Big%d",c,);
    else
        if (b>c)
            printf("Big=%d",b);
        else
            printf("Big=%d",c);
    // alternate way
    a > b ? (a>c ? printf("%d",a) : printf("%d",c)) : (b>c ? printf("%d",b) : printf("%d",c));

    */
    
    // 5 Numbers
    int a,b,c,d,e;
    printf("Enter 5 numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("Biggest number is :--> ");

    /*if (a>b)
        if (a>c)
            if (a>d)
                if (a>e)
                    printf("%d",a);
                else 
                    printf("%d",e);
            else
                if (d>e)
                    printf("%d",d);
                else
                    printf("%d",e);
        else
            if (c>d)
                if (c>e)
                    printf("%d",c);
                else
                    printf("%d",e);
            else
                if (d>e)
                    printf("%d",d);
                else
                    printf("%d",e);
    else
        if (b>c)
            if (b>d)
                if(b>e)
                    printf("%d",b);
                else
                    printf("%d",e);
            else
                if (d>e)
                    printf("%d",d);
                else
                    printf("%d",e);
        else
            if (c>d)
                if (c>e)
                    printf("%d",c);
                else
                    printf("%d",e);
            else
                if (d>e)
                    printf("%d",d);
                else
                    printf("%d",e);
    */
    // alternate way
    if (a>b && a>c && a>d && a>e)
        printf("%d",a);
    else
        if (b>c && b>d && b>e)
            printf("%d",b);
        else
            if (c>d && c>e)
                printf("%d", c);
            else
                if (d>e)
                    printf("%d",d);
                else
                    printf("%d",e);
}