#include <stdio.h>
int main() {

        const int LAENGE = 5;
        char matrix[LAENGE][LAENGE];

        int i = 0;
        int j = 0;

        int userInput = 0;
        int spalte = 0;
        int zeile = 0;

        printf("Die Matrix sieht so aus:\n\n");


        while(userInput < 6){
        // x-Achse
        for(i = 0; i < 5; i++){

                //y-Achse
                for(j = 0; j < 5; j++){

                if(userInput == 0){
                matrix[i][j] = '+';
                printf(" %c ", matrix[i][j]);        
                }      
                        
                //

                        switch(userInput){

                                case 1 : matrix[i][j] = '0'; break;

                                case 2 : 

                                        //Zweite Diagonale fehlt noch
                                        if(matrix[i] == matrix[j]){
                                        matrix[i][j] = '0';
                                         }; break;
                                        for(i = 5; i <= 5; i--){
                                             matrix[i][j] = '0';   
                                        }
                                case 3 : 
                                 if(i == 0 && j== 0){

                                         // Problem besteht bei Spalte und Zeile, also den Integern
                                        printf("Eingabe: Spalte ");
                                        scanf("%i", &spalte);
                                        printf("Eingabe: Zeile ");
                                        scanf("%i", &zeile);
                                        matrix[spalte][zeile] = '0';break;
                                                                }
                                case 4 : matrix[i][j] = '+';break;

                                case 5 : printf(" %c ", matrix[i][j]); break;

                                default: break;

                                        }
                }

                                
                printf("\n");
        }




        printf("\n");
        printf("Optionen:\n");
        printf("(1)\tFülle alle Felder mit 0\n");
        printf("(2)\tFülle die beiden Diagonalen mit 0\n");
        printf("(3)\tFülle ein spezielles Feld mit 0 (Spalte, Zeile)\n");
        printf("(4)\tRefresh: Fülle alle Felder wieder mit +\n");
        printf("(5)\tAusgabe der Matrix auf dem Bildschirm\n");
        printf("(6)\tEnde des Programms\n\n");
        printf("Eingabe: ");
        scanf("%i", &userInput);

        
        }





return 0;
}
