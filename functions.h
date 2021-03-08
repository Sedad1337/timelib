//-- Funktionen nach Spezifikation -- //

//
int day_of_the_year(struct dateStruct date) {

int counter = 0;


 for(int i = month - 2; i >= 0; i--)
    {
        sum_of_days += days_per_month[i];
    }
    // Tage des aktuell angegebenen Monats.
    sum_of_days += day;
    // Ausgabe.
    printf("Das Jahr hat bereits %i Tage", sum_of_days);

    return 0;



    //Prüfung der Gültigkeit des Jahres.
    if(exists_date == 0) {
        return -1; // -1 wird zurückgegeben wenn das Datum ungültig ist.
    }
}

//Funktion zur Eingabe der Werte Tag, Monat, Jahr
void input_date(dateStruct) {

    struct dateStruct InputDate;

    do {
        //Eingabe der Werte durch den User
        printf("Enter day\n");
        scanf(main(DayOfMonth));
        printf("Enter month\n");
        scanf(month);
        printf("Enter year\n");
        scanf(year);

        if(exists_date(month,month,year) !=1) { //Prüfung, ob das Jahr gültig ist.
            printf("\nInput is not a valid date. Please try again.\n\n");
        }

    }
    while (exists_date(day,month,year) !=1); //Wird solange durchlaufen, bis die Eingabe gültig ist.
}

//Funktion die feststellt, ob das eingegebene Jahr ein Schaltjahr ist
//Gibt einen Rückgabewert nach Prüfung zurück
int is_leapyear(struct dateStruct date) {

    if(date.year >= 1582) { //Prüft, ob das eingegebene Jahr gleich oder über 1582 liegt.

        if (date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0) { //Prüft die Bedingung des Schaltjahres
            return 1; // 1 wird zurückgegeben, wenn year ein Schaltjahr ist.
        } else {
            return 0; // 0 wird zurückgegeben, wenn year kein Schaltjahr ist.
    } else {
        return -1; // -1 wird zurückgegeben, wenn das Jahr ungültig ist.
    }
}

//Funktion zum Erzeugen des Arrays, mit den Monatstagen als Werte.
int get_days_for_month(struct dateStruct date) {

    int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //Array mit den Tagen des Monats als Werte

    //Prüft, ob das Jahr ein Schaltjahr ist
    if (is_leapyear(date.year) == 1) {
        days_per_month[1] = 29; //Setzt die zweite Indexstelle (Februar) auf 29, wenn es ein Schaltjahr ist.
    }
    if (date.month > 12 || date.month < 1 || is_leapyear == -1) {
        return -1; // -1 wird zurückgegeben, wenn ein ungültiger Monat oder ein üngültiges Jahr eingegeben wurde.
    } else {
        return days_per_month[month+1]; //Gibt die Tage (Indexwert des Arrays) des jeweiligen Monats zurück.
    }
}

//Funktion überprüft, ob das eingegebene Datum gültig ist.
//Alles vor dem 1.1.1582 und nach dem 31.12.2400 ist ungültig.
int exists_date(struct dateStruct date) {

    if(date.year < 1582 || date.year > 2400) { //Prüfung des Jahres
        return 0; // 0 wird zurückgegeben, wenn das Jahr ungültig ist.
    } else {
        return 1; // 1 wird zurückgegeben, wenn das Jahr gültig ist.
}
