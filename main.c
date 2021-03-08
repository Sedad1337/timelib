#include <stdio.h>
#include <stdlib.h>
//Sedad Deeg
//Programm zur Bestimmung des Jahrestages
//Erweiterung, Auslagerung des Codes in Funktionen

struct dateStruct {
    int year;
    int month;
    int day;
};

int main() {

    int IsLeapYear = 0;
    int year = 0;
    int month = 0;
    int day = 0;

    int *pointerDay = &day;
    int *pointerMonth = &month;
    int *pointerYear = &year;

    input_date();
    is_leapyear();

}


