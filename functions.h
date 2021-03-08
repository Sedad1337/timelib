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



    //Pr�fung der G�ltigkeit des Jahres.
    if(exists_date == 0) {
        return -1; // -1 wird zur�ckgegeben wenn das Datum ung�ltig ist.
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

        if(exists_date(month,month,year) !=1) { //Pr�fung, ob das Jahr g�ltig ist.
            printf("\nInput is not a valid date. Please try again.\n\n");
        }

    }
    while (exists_date(day,month,year) !=1); //Wird solange durchlaufen, bis die Eingabe g�ltig ist.
}

//Funktion die feststellt, ob das eingegebene Jahr ein Schaltjahr ist
//Gibt einen R�ckgabewert nach Pr�fung zur�ck
int is_leapyear(struct dateStruct date) {

    if(date.year >= 1582) { //Pr�ft, ob das eingegebene Jahr gleich oder �ber 1582 liegt.

        if (date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0) { //Pr�ft die Bedingung des Schaltjahres
            return 1; // 1 wird zur�ckgegeben, wenn year ein Schaltjahr ist.
        } else {
            return 0; // 0 wird zur�ckgegeben, wenn year kein Schaltjahr ist.
    } else {
        return -1; // -1 wird zur�ckgegeben, wenn das Jahr ung�ltig ist.
    }
}

//Funktion zum Erzeugen des Arrays, mit den Monatstagen als Werte.
int get_days_for_month(struct dateStruct date) {

    int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; //Array mit den Tagen des Monats als Werte

    //Pr�ft, ob das Jahr ein Schaltjahr ist
    if (is_leapyear(date.year) == 1) {
        days_per_month[1] = 29; //Setzt die zweite Indexstelle (Februar) auf 29, wenn es ein Schaltjahr ist.
    }
    if (date.month > 12 || date.month < 1 || is_leapyear == -1) {
        return -1; // -1 wird zur�ckgegeben, wenn ein ung�ltiger Monat oder ein �ng�ltiges Jahr eingegeben wurde.
    } else {
        return days_per_month[month+1]; //Gibt die Tage (Indexwert des Arrays) des jeweiligen Monats zur�ck.
    }
}

//Funktion �berpr�ft, ob das eingegebene Datum g�ltig ist.
//Alles vor dem 1.1.1582 und nach dem 31.12.2400 ist ung�ltig.
int exists_date(struct dateStruct date) {

    if(date.year < 1582 || date.year > 2400) { //Pr�fung des Jahres
        return 0; // 0 wird zur�ckgegeben, wenn das Jahr ung�ltig ist.
    } else {
        return 1; // 1 wird zur�ckgegeben, wenn das Jahr g�ltig ist.
}
