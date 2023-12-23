#include <stdio.h>

main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}},rowsum,colsum,disum=0;

    for (int i = 0; i < 3; i++)
    {
        rowsum = 0;
        colsum = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            rowsum += a[i][j];
            colsum += a[i][j];
            if (i==j)
                disum += a[i][j];
        }
        printf("%d %d\n", rowsum,colsum);
    }
    printf("%d", disum);    
}