#include <stdio.h>
#include <stdlib.h>
//Sedad Deeg
//Programm zur Bestimmung des Jahrestages
//Erweiterung, Auslagerung des Codes in Funktionen

int TagImMonat = 0;
int MonatImJahr = 0;
int AktuellesJahr = 0;
int ist_schaltjahr = 0;

int main() {
    //Aufruf der einzelnen Funktionen
    ArrayMonatstage();
    Eingabe();
    Berechnung();
    Ausgabe();
}
void Eingabe() {
    //Funktion zur Eingabe der Werte Tag, Monat & Jahr
    printf("Tag eingeben\n");
    scanf("%i",&TagImMonat);
    printf("Monat eingeben\n");
    scanf("%i",&MonatImJahr);
    printf("Jahr eingeben\n");
    scanf("%i",&AktuellesJahr);
}

void Berechnung() {
    //Funktion, welche für die Berechnung zuständig ist

    for(int i = 1; i < MonatImJahr; i++)  //Pr�ft ob der Monat komplett durchgelaufen ist , falls ja werden die Tage draufgerechnet
        {
            TagImMonat += ArrayMonatstage();
            //Monatstage[i];
        }

        if(AktuellesJahr %4 == 0)   //Prüft ob es ein Schaltjahr ist
        {
            if(AktuellesJahr %100 == 0)
            {
                if(AktuellesJahr %400 == 0)
                    ist_schaltjahr = 1;
                else
                    ist_schaltjahr = 0;
            }
            else    ist_schaltjahr = 1;
        }
        else    ist_schaltjahr = 0;

        if (ist_schaltjahr == 1)   //Addiert einen drauf, wenn es ein Schaltjahr ist
        {
            //TagImMonat += 1;
        }
}

void ArrayMonatstage() {
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

void Ausgabe() {
    //Funktion, welche das Ergebnis ausgibt
    printf("Es ist der %i. Tag im jahr",TagImMonat);
}