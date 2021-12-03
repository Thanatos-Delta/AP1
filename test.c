#include <stdio.h>
#include <ctype.h>


int sucheZeichen(const char s[], char c){
    int i = 0;
    int counter = 0;
    char c = 'd';

    while(s[i] != '\n'){

            if(s[i] == c){

                counter++;
            
            }


        i++;
    }


    return counter;
}


int main(){

const int MAX = 1000;
char eingabe[MAX];

printf("\nEingeben: ");
scanf(" %s", eingabe);

printf ("der buchstabe k wurde %d mal gefunden", sucheZeichen (eingabe, 'k')) ;
return 0;




}