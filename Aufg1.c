#include <stdio.h>




int sucheZeichen(const char s[], char c){
    int i = 0;
    int counter = 0;

    while(s[i] != '\0'){
        if(s[i] == c){

            counter++;

        }      
        
        i++;
    }



    return counter;
}

int laengeZeichenkette(const char s[]){
    int i = 0;
    int counter = 0;

    while(s[i] != '\0'){
        
        counter++;
        i++;
    }


    return counter;
}



int main(){
    int LAENGE = 100;
    char s[LAENGE];
    char c = 'x';
    char antwort = 'a';

    printf("Bitte Namen eingeben: ");
    scanf("%s", s);
    printf("\n%s hat %i Zeichen.\n", s, laengeZeichenkette(s));


    while(antwort != 'n'){
    printf("Moechtest du nach einem Buchstaben in %s suchen? (j / n)\n", s);
    scanf(" %c", &antwort);
    switch(antwort){

        case 'j':   printf("Nach welchem Buchstaben moechtest du suchen?\n");
                    scanf(" %c", &c);
                    printf("Der Buchstabe %c kommt %d-Mal vor.\n", c, sucheZeichen(s, c));
                    break;

        case 'n':   printf("Auf Wiedersehen!");
                    break;

        default: break;






    }}
    
    







return 0;
}