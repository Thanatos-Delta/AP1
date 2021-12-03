#include <stdio.h>
int main (){
    int n = 0;
    int i = 0;
    scanf("%i", &n);
    int array[n];
    int sum = 0;
    float ergebnis = 0;

    for(i = 0; i < n; i++){
        scanf("%i", &array[i]);
        sum += array[i];

    }
    ergebnis = (float)sum / n;
    printf("Dies ist der Durchschnitt: %.2f", ergebnis);


    return 0;
}