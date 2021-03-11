#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h" //Inkludiert die Library functions.h
/*
Sedad Deeg
Programm zur Bestimmung des Jahrestages.
Auf Basis des vom Nutzer eingegebenen Datums.
*/

struct dateStruct {
    int year;
    int month;
    int day;
};

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;

    //Aufruf der Funktion input_date in der Functions-Datei
    input_date(&year, &month, &day);


    //Ausgabe des Tag des Jahres
    //Gibt das Ergebnis der Funktion day_of_the_year aus.
    printf("-> Tag des Jahres: %i. Tag.\n",day_of_the_year(year, month, day));
    return 0;
}
