#include <iostream>
using namespace std;

int year, date;
string month;
void Birthdate() {

    y:
    cout << "Year: ";
    cin >> year;
    if (year < 1900) {
        cout << "Are you still alive?" << endl;
        cout << "Please, enter the year you was born in" << endl;
        goto y;
    }
    else if (year > 2020) {
        cout << "You are not human!" << endl;
        cout << "Please, enter the year you was born in" << endl;
        goto y;
    }
    else {
        m:
        cout << "Month: ";
        cin >> month;


        if (month == "1" || month == "01" || month == "January") {
            month = "January";
        }
        else if (month == "2" || month == "02" || month == "February") {
            month = "February";
        }
        else if (month == "3" || month == "03" || month == "March") {
            month = "March";
        }
        else if (month == "4" || month == "04" || month == "April") {
            month = "April";
        }
        else if (month == "5" || month == "05" || month == "May") {
            month = "May";
        }
        else if (month == "6" || month == "06" || month == "June") {
            month = "June";
        }
        else if (month == "7" || month == "07" || month == "July") {
            month = "July";
        }
        else if (month == "8" || month == "08" || month == "August") {
            month = "August";
        }
        else if (month == "9" || month == "09" || month == "September") {
            month = "September";
        }
        else if (month == "10" || month == "October") {
            month = "October";
        }
        else if (month == "11" || month == "November") {
            month = "November";
        }
        else if (month == "12" || month == "December") {
            month = "December";
        }
        else {
            cout << "Invalid..." << endl;
            goto m;
        }


        if (month == "January") {

            if (year % 400 == 0) {
                dj:
                cout << "Date: ";
                cin >> date;
                if (date < 1 || date>29) {
                    cout << "Invalid..." << endl;
                    cout << "Try again ..." << endl;
                    goto dj;
                }
                else
                    cout << " " << endl;
            }
            else if (year % 4 == 0 && year % 100 != 0) {
                d1:
                cout << "Date: ";
                cin >> date;
                if (date < 1 || date>29) {
                    cout << "Invalid..." << endl;
                    goto d1;
                }
                else
                    cout << " " << endl;
            }
            else {
                d2:
                cout << "Date: ";
                cin >> date;
                if (date < 1 || date >= 29) {
                    cout << "The " << year << " isn't a leap year!\n" << "Invalid..." << endl;
                    goto d2;
                }
                else
                    cout << " " << endl;
            }
        }
        else if (month == "February") {
            f:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto f;
            }
            else
                cout << " " << endl;
        }
        else if (month == "March") {
            rm:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto rm;
            }
            else
                cout << " " << endl;
        }
        else if (month == "April") {
            a:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date >= 31) {
                cout << "Invalid..." << endl;
                goto a;
            }
            else
                cout << " " << endl;
        }
        else if (month == "May") {
            ma:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto ma;
            }
            else
                cout << " " << endl;
        }
        else if (month == "June") {
            j:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date >= 31) {
                cout << "Invalid..." << endl;
                goto j;
            }
            else
                cout << " " << endl;
        }
        else if (month == "July") {
            ju:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto ju;
            }
            else
                cout << " " << endl;
        }
        else if (month == "August") {
    au:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto au;
            }
            else
                cout << " " << endl;
        }
        else if (month == "September") {
    sep:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date >= 31) {
                cout << "Invalid..." << endl;
                goto sep;
            }
            else
                cout << " " << endl;
        }
        else if (month == "October") {
        oc:    
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto oc;
            }
            else
                cout << " " << endl;
        }
        else if (month == "November") {
        nov:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date >= 31) {
                cout << "Invalid..." << endl;
                goto nov;
            }
            else
                cout << " " << endl;
        }
        else if (month == "December") {
        dece:
            cout << "Date: ";
            cin >> date;
            if (date < 1 || date>31) {
                cout << "Invalid..." << endl;
                goto dece;
            }
            else {
                cout << " " << endl;
            }
        }        
    }
}
void Showdate(){

    switch (date) {
    case 1: cout << "Was born on the first of " << month << " in " << year << endl;
        break;
    case 2: cout << "Was born on the second of " << month << " in " << year << endl;
        break;
    case 3: cout << "Was born on the third of " << month << " in " << year << endl;
        break;
    case 4: cout << "Was born on the fourth of " << month << " in " << year << endl;
        break;
    case 5: cout << "Was born on the fifth of " << month << " in " << year << endl;
        break;
    case 6: cout << "Was born on the sixth of " << month << " in " << year << endl;
        break;
    case 7: cout << "Was born on the seventh of " << month << " in " << year << endl;
        break;
    case 8: cout << "Was born on the eighth of " << month << " in " << year << endl;
        break;
    case 9: cout << "Was born on the ninth of " << month << " in " << year << endl;
        break;
    case 10: cout << "Was born on the tenth of " << month << " in " << year << endl;
        break;
    case 11: cout << "Was born on the eleventh of " << month << " in " << year << endl;
        break;
    case 12: cout << "Was born on the twelfth of " << month << " in " << year << endl;
        break;
    case 13: cout << "Was born on the thirteenth of " << month << " in " << year << endl;
        break;
    case 14: cout << "Was born on the fourteenth of " << month << " in " << year << endl;
        break;
    case 15: cout << "Was born on the fifteenth of " << month << " in " << year << endl;
        break;
    case 16: cout << "Was born on the sixteenth of " << month << " in " << year << endl;
        break;
    case 17: cout << "Was born on the seventeenth of " << month << " in " << year << endl;
        break;
    case 18: cout << "Was born on the eighteenth of " << month << " in " << year << endl;
        break;
    case 19: cout << "Was born on the nineteenth of " << month << " in " << year << endl;
        break;
    case 20: cout << "Was born on the twentieth of " << month << " in " << year << endl;
        break;
    case 21: cout << "Was born on the twenty-first of " << month << " in " << year << endl;
        break;
    case 22: cout << "Was born on the twenty-second of " << month << " in " << year << endl;
        break;
    case 23: cout << "Was born on the twenty-third of " << month << " in " << year << endl;
        break;
    case 24: cout << "Was born on the twenty-fourth of " << month << " in " << year << endl;
        break;
    case 25: cout << "Was born on the twenty-fifth of " << month << " in " << year << endl;
        break;
    case 26: cout << "Was born on the twenty-sixth of " << month << " in " << year << endl;
        break;
    case 27: cout << "Was born on the twenty-seventh of " << month << " in " << year << endl;
        break;
    case 28: cout << "Was born on the twenty-eighth of " << month << " in " << year << endl;
        break;
    case 29: cout << "Was born on the twenty-ninth of " << month << " in " << year << endl;
        break;
    case 30: cout << "Was born on the thirtieth of " << month << " in " << year << endl;
        break;
    case 31: cout << "Was born on the thirty-first of " << month << " in " << year << endl;
        break;
    }

    cout << "Age: " << 2020 - year << endl;
}
