#include<stdio.h>
#include <string.h>

main()
{
    char a[3][10], temp[10];
    for (int k = 0; k <= 2; k++)
    {
        printf("Enter a name  ");
        gets(a[k]);
    }

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j < 2-i; j++)
        {
            if (strcmp(a[j],a[j+1]) > 0)
                {
                    strcpy(temp,a[j]);
                    strcpy(a[j],a[j+1]);
                    strcpy(a[j+1],temp);
                }
        }
    }

    for (int i = 0; i <= 2; i++)
        printf(a[i]);   
    
    
}