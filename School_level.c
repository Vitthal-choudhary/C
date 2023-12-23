#include<stdio.h>

main()
{
    int Std;
    printf("Enter Standard\n");
    scanf("%d", &Std);

    if (Std>12)
        printf("College");
    else
        if (Std>10)
            printf("Sr.Secondary");
        else
            if (Std>8)
                printf("High School");
            else
                if (Std>5)
                    printf("Mid School");
                else
                    if (Std>=1)
                        printf("Primary School");
                    else
                        printf("At Home");
}