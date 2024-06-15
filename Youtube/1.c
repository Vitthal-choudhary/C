#include<stdio.h>

int main(){
    // int count;      // 2 byte
    // char x = 'x';   // 1 byte
    // float f;
    // long l;
    // short int a;
    // double db;

    // int a;
    // char b = 's';

    // scanf("%d", &a);

    // printf("%d\n", a);
    // printf("%c\n", b);
    // printf("Hello world");


    // Conditionals

    // Relational Operatorrs -->  == <  >  <=  >=  !=

    int a=3;
    // if (a>5)
    // {
    //     printf("A is greater than5");
    // }
    // else if (a==5)
    // {
    //     printf("a is 5");
    // }
    
    // else{
    //     printf("A is less than 5");
    // }

    // switch (a)
    // {
    // case 1:
    //     printf("1");
    //     break;
    // case 2:
    //     printf("2");
    //     break;
    // default:
    //     printf("a not found");
    //     break;
    // }

    // Iterative Logic
    // for, while, do while

    int i;

    for (i = 0; i < 5; i++)     // i<5
    {
        printf("%d\n", i);
    }

    i=8;
    while (i>5)
    {
        printf("%d\n", i);
        i--;
    }

    i=5;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<10);
    
    
    return 0;
}