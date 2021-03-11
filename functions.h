//Funktion die feststellt, ob das eingegebene Jahr ein Schaltjahr ist
//Gibt einen Integer als Rückgabewert nach Prüfung zurück
int is_leapyear(int year)
{   //Prüfung der Gültigkeit des Jahres
    if(year < 1582 || year > 2400)
    {
        return -1;
    }
    //Prüfung, ob das Jahr ein Schaltjahr ist
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

//Funktion prüft ob der Monat existiert und gibt den höchstmöglichen Tag zurück
int get_days_for_month(int year,int month)
{
    if(month < 1 || month > 12)
    {
        return -1;
    }
    else
    {
        if(is_leapyear(year) == 1)
        {   //Mögliche Tage, wenn es EIN Schaltjahr ist (Bzgl. zweiter Indexwert)
            int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
            return days[month - 1];;
        }
        else
        {   //Mögliche Tage, wenn es KEIN Schaltjahr ist (Bzgl. zweiter Indexwert)
            int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
            return days[month - 1];
        }
    }
}

//Die Funktion prüft, ob der Tag existiert und ob das Jahr sich im gültigen Bereich befindet.
//Die Funktion gibt je nach Fall 1 oder 0 zurück.
int exist_date(int year, int month,int day)
{
    if (day <= 0 || day > get_days_for_month(year, month) || year < 1582|| year > 2400)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

//Funktion berechnet den Tag des Jahres
//Die Funktion gibt die Tage als Integer zurück
int day_of_the_year(int year, int month, int day)
{   //Prüfung, ob das eingegebene Datum existiert.
    if (exist_date(year,month,day) == 1)
    {
        int i;
        int TotalAmountDays = 0;

        for(i=1; i<month; i++)
        {   //Fügt den Tag dem aktuellen Datum hinzu
            TotalAmountDays += get_days_for_month(year, i);
        }
        //Fügt den Tag dem aktuellen Datum hinzu
        TotalAmountDays += day;
        return TotalAmountDays;

    }
}
//Funktion zur Nutzereingabe des Datums.
//Eingegeben werden Tag, Monat, Jahr.
void input_date(int *yearPointer, int *monthPointer, int *dayPointer){
    printf("--------------------------------------------------------------\n");
    printf("|                     -[Tag des Jahres]-                     |\n");
    printf("|                    (Autor: Sedad Deeg)                     |\n");
    printf("| Geben Sie die Werte an, um den Tag des Jahres zu berechnen |\n");
    printf("--------------------------------------------------------------\n");
    do{
    printf("-> Tag: ");
    scanf("%i", &*dayPointer);
    printf("-> Monat: ");
    scanf("%i", &*monthPointer);
    printf("-> Jahr: ");
    scanf("%i", &*yearPointer);
    }while(exist_date(*yearPointer, *monthPointer, *dayPointer) == 0);
    printf("------------------------------------\n");
}
