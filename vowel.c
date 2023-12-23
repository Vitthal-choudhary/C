#include <stdio.h>

main()
{
    printf("Enter a character");
    char a;
    scanf("%c", &a);

    if (a=='a')
        printf("Vowel");
    else
        if (a == 'A')
            printf("Vowel");
        else
            if (a == 'e')
                printf("Vowel");
            else
                if (a=='E')
                    printf("Vowel");
                else
                    if (a=='i')
                        printf("Vowel");
                    else
                        if (a=='I')
                            printf("Vowel");
                        else
                            if (a=='o')
                                printf("Vowel");
                            else
                                if (a=='O')
                                    printf("Vowel");
                                else
                                    if (a=='u')
                                        printf("Vowel");
                                    else
                                        if (a=='U')
                                            printf("Vowel");
                                        else
                                            printf("Consonant");

    if (a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
        printf("Vowel");
    else
        printf("Consonant");

    switch (a)
    {
    case 'a':
        printf("vowel");
        break;
    case 'A':
        printf("vowel");
        break;
    case 'E':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'I':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'O':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    case 'U':
        printf("vowel");
        break;    
    default:
        printf("consonant");
    }
}