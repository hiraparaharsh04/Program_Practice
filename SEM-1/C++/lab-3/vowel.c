#include <stdio.h>

void alphabets(char alphabet)
{
    switch (alphabet)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
}

int main()
{
    char alphabet;

    printf("Enter a alphabet :");
    scanf("%s", &alphabet);

    alphabets(alphabet);
    return 0;
}