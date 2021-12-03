#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Global
const int ANZAHLEINTRAEGE = 100;
const int LAENGEARTIKEL = 30; 

typedef struct Article_ {
    char artikel[LAENGEARTIKEL];
    int anzahl;
    int artikelnummer;
} Article;

Article lager[ANZAHLEINTRAEGE];
int id = 0;
int i = 0;
    
void artikelHinzufuegen(){
    printf("Welchen Artikel moechten Sie hinzufuegen?\n");
    scanf(" %s", lager[i].artikel);
    printf("Wieviele moechten Sie hinzufuegen?\n");
    scanf(" %d", &lager[i].anzahl);
    id = id +1;
    lager[i].artikelnummer = id;
    i = i +1;

}

void artikelEntnehmen(){
    int minusArt = 0;
    int artklnmmr = 0;
    printf("Geben sie die Artikelnummer des Artikels an welchen Sie entnehmen moechten.\n");
    scanf("%i", &artklnmmr);
    printf("Wieviele moechten Sie entnehmen?\n");
    scanf("%i", &minusArt);
    lager[artklnmmr - 1].anzahl = lager[artklnmmr - 1].anzahl - minusArt;




}

//ToDo Dauerschleife und Suche nicht funktional
int eintragSuchen(){
    int z = 0;
    char artklname[LAENGEARTIKEL];
    printf("Wie ist der Name des Artikels, dessen Anzahl sie wissen moechten?");
    scanf("%s", artklname);
    while(lager[z].artikelnummer != 0){
    if(strcmp(artklname, lager[z].artikel)){
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("Artikelname\t\tAnzahl\tArtikelnummer\n");
        printf("%-15s\t\t", lager[z].artikel);
        printf("%6d\t", lager[z].anzahl);
        printf("%06d\n", lager[z].artikelnummer);
    }}
    z++;
    

return 0;
}

void lagerTabellenAusgabe(){
    int i = 0;
    printf("\n\n\n\n\n\n\n\n\n\n");
    while(lager[i].anzahl != 0){
    printf("Artikelname\t\tAnzahl\tArtikelnummer\n");
    printf("%-15s\t\t", lager[i].artikel);
    printf("%6d\t", lager[i].anzahl);
    printf("%06d\n", lager[i].artikelnummer);

    i++;
    }
}




int main(){

int eingabe = 0;

printf("Willkommen im Tool der Lagerverwaltung, welche Aktion moechten Sie durchführen?\n");


while(eingabe != 5){
printf("1. Einen Artikel hinzufuegen.\n");
printf("2. Einen Artikel entnehmen\n");
printf("3. Einen Eintrag suchen.\n");
printf("4. Ausgabe der Lagertabelle\n");
printf("5. Beenden.\n");
printf("Geben Sie 1 - 5 ein und druecken Sie Enter.\n");
scanf(" %d", &eingabe);

switch(eingabe){

    case 1: artikelHinzufuegen(); break;

    case 2:     lagerTabellenAusgabe();
                artikelEntnehmen();
                lagerTabellenAusgabe(); break;

    case 3:     eintragSuchen(); break;

    case 4:     lagerTabellenAusgabe(); break;

    case 5: break;

    default: break;




}

}







    return 0;
}