#include <stdio.h>
#include <stdlib.h>
void Berechnung() {
    //Funktion, welche f�r die Berechnung zust�ndig ist

    for(int i = 1; i < getMonthOfYear(); i++)  //Pr�ft ob der Monat komplett durchgelaufen ist , falls ja werden die Tage draufgerechnet
        {
            getDayOfMonth() += ArrayMonthDays();
            //Monatstage[i];
        }

        if(getCurrentYear() %4 == 0)   //Pr�ft ob es ein Schaltjahr ist
        {
            if(getCurrentYear() %100 == 0)
            {
                if(getCurrentYear() %400 == 0)
                    getIsLeapYear() = 1;
                else
                    getIsLeapYear() = 0;
            }
            else    getIsLeapYear() = 1;
        }
        else    getIsLeapYear() = 0;

        if (getIsLeapYear() == 1)   //Addiert einen drauf, wenn es ein Schaltjahr ist
        {
            //TagImMonat += 1;
        }
}

void Ausgabe() {
    //Funktion, welche das Ergebnis ausgibt
    printf("Result: It's the %i. day of the year",TagImMonat);
}

int getDayOfMonth(){
    int DayOfMonth = 0;
    return DayOfMonth;
}
int getMonthOfYear(){
    int MonthOfYear = 0;
    return MonthOfYear;
}
int getCurrentYear(){
    int CurrentYear = 0;
    return CurrentYear;
}
int getIsLeapYear(){
    int IsLeapYear = 0;
    return IsLeapYear;
}
void ArrayMonthDays() {
    //Funktion, welche die Arraywerte initialisiert
    int Monatstage[12]; //Array der Größe 12, entspricht der Anzahl Monate
    Monatstage[1]=31;
    Monatstage[2]=28;
    Monatstage[3]=31;
    Monatstage[4]=30;
    Monatstage[5]=31;
    Monatstage[6]=30;
    Monatstage[7]=31;
    Monatstage[8]=31;
    Monatstage[9]=30;
    Monatstage[10]=31;
    Monatstage[11]=30;
    Monatstage[12]=31;
    return Monatstage;
}
