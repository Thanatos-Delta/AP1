#include <stdio.h>
#include <ctype.h>

int laengeZeichenkette(const char s[])
{
    int c=0;
    int count=0;

    while (s[c++])
    {
        count++;
    }

    return count;
}

int sucheZeichen(const char s[], char c)
{
    int a=0;
    int anzahl=0;
    char b;

    b=toupper(c);
    c=tolower(b);


    while(s[a++])
    {
        if(c == s[a-1] || b == s[a-1])
            anzahl++;
    }

    return anzahl;
}

int main()
{
    int test=0;
    char name[30];
    char suche, jn;

    printf("Bitte Namen eingeben: ");
    scanf("%s", name);
    fflush(stdin);

    printf("Anzahl Buchstaben: %i", laengeZeichenkette(name));

    while(test==0)
    {
        printf("\n\nMoechtest Du nach einem Buchstaben in %s suchen? (Kleinbuchstabe bitte) (j / n): ", name);
        scanf("%c", &jn);
        fflush(stdin);


        switch(jn)
        {
            case ('j'):
                printf("\nBitte Buchstaben eingeben:  ");
                scanf("%c", &suche);
                fflush(stdin);
                printf("\nBuchstabe %c ist %i enthalten!", suche, sucheZeichen(name,suche));
                break;

            case ('n'):
                printf("\nDann tschuss!");
                test=1;
                break;

            default:
                printf("\nEingabe nicht Korrekt!");
        }
    }
    return 0;
}






