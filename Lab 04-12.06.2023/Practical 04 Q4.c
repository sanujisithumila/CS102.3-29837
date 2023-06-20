#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':printf("%c is a vowel",ch);break;
        case 'a':printf("%c is a vowel",ch);break;
        case 'E':printf("%c is a vowel",ch);break;
        case 'e':printf("%c is a vowel",ch);break;
        case 'I':printf("%c is a vowel",ch);break;
        case 'i':printf("%c is a vowel",ch);break;
        case 'O':printf("%c is a vowel",ch);break;
        case 'o':printf("%c is a vowel",ch);break;
        case 'U':printf("%c is a vowel",ch);break;
        case 'u':printf("%c is a vowel",ch);break;
        default:printf("%c is not a vowel",ch);


    }
    return 0;
}
