#include <stdio.h>
#include <stdlib.h>
//Sedad Deeg
//Programm zur Bestimmung des Jahrestages
//Erweiterung, Auslagerung des Codes in Funktionen

int main() {
    //Aufruf der einzelnen Funktionen
    ArrayMonthDays();
    input_date();
    Berechnung();
    Ausgabe();
}
void input_date(int *pointerYear, int *pointerMonth, int *pointerDay) {
    //Funktion zur Eingabe der Werte Tag, Monat & Jahr

    do {
        printf("Enter day\n");
        scanf("%i",&TagImMonat);
        printf("Enter month\n");
        scanf("%i",&MonatImJahr);
        printf("Enter year\n");
        scanf("%i",&AktuellesJahr);

        if(exists_date(TagImMonat,MonatImJahr,AktuellesJahr) !=1) {
            printf("\nInput is not a valid date.Please try again.\n\n\n");
        }

    }
    while (exists_date(TagImMonat,MonatImJahr,AktuellesJahr) !=1);
}

