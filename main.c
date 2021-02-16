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
        scanf(getDayOfMonth());
        printf("Enter month\n");
        scanf(getMonthOfYear());
        printf("Enter year\n");
        scanf(getCurrentYear());

        if(exists_date(getDayOfMonth(),getMonthOfYear(),getCurrentYear()) !=1) {
            printf("\nInput is not a valid date. Please try again.\n\n");
        }

    }
    while (exists_date(getDayOfMonth(),getMonthOfYear(),getCurrentYear()) !=1);
}

