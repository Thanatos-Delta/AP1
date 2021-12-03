#include <stdio.h>
#include <math.h>

int main(){
        int zahl;
        int groessteTestZahl = sqrt(zahl);
        int test = 1;
        int i = 2;





        scanf("%i", &zahl);


        while(i <= groessteTestZahl){


                if(i != zahl){
                test = zahl % i;
                }
                if(test == 0){
                    printf("Nein");
                    break;

                }
                

                i++;

        }
        if(test != 0){

            printf("Ja");
        }
        
        return 0;

        }
