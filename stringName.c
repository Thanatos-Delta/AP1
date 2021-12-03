#include <stdio.h>
#include <string.h>
#include <ctype.h>



int sucheZeichen(const char s[], char c){
    const int LAENGE = 100;
    int i = 0;
    int zaehler = 0;
    char d[LAENGE];

    strcpy(d, s);

    while(d[i] != '\0'){

        d[i] = tolower(d[i]);
        if(d[i] == c){
            zaehler++;
        }

        i++;    

    }

    return zaehler;
}

int laengeZeichenkette(const char s[]){
    int i = 0;
    int count = 0;

    while(s[i]){

        if(s[i] == '\0'){
            break;
        }
        count++;
    
        i++;
    }


    return count;
}


int main(){
    int i = 0;
    int j = 0;
    char antwort = 'n';
    int checkAntwort = 0;
    char c = 'x';
    const int LAENGE = 100;
    char s[LAENGE];

    printf("Bitte Namen eingeben: ");
    scanf("%s", s);
    printf("\n");
    printf("%s hat %i Zeichen.\n\n", s, laengeZeichenkette(s));
    
    printf("Möchtest du nach einem Buchstaben in dem Namen suchen (j/n)?\n");
    fflush(stdin);
    scanf(" %c", &antwort);
    if(antwort == 'n'){
        printf("Auf Wiedersehen!");
    }
    while(antwort == 'j'){
    if(j != 0){
    printf("Möchtest du nach einem Buchstaben in dem Namen suchen (j/n)?\n");
    // Leerzeichen vor %c sonst wird \n in antwort geschrieben, alle Datentypen ignorieren whitespaces, außer %c
    //scanf(" %c", &antwort);
    //Andere Möglichkeit
    //In Buffer kann Enter, oder /n sitzen der genommen werden würde => Buffer leeren mit fflush
    fflush(stdin);
    scanf(" %c", &antwort);
    }
    switch(antwort){
        
        case 'j':   printf("Bitte Buchstaben eingeben: ");
                    fflush(stdin);
                    scanf("%c", &c);
                    c = tolower(c);
                    printf("Der Buchstabe kommt %i-Mal vor.\n", sucheZeichen(s, c)); 
                    break;

        case 'n':   printf("Auf Wiedersehen!");
                    break;

        default: break;

    }
        j++;

    
    }






    return 0;
}