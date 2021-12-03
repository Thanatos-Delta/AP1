#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "myfunctions.h"

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

