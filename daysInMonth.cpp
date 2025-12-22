#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Podaj numer miesiaca (1-12): ";
    cin >> month;

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "Ten miesiac ma 31 dni." << endl;
        break;

    case 4: case 6: case 9: case 11:
        cout << "Ten miesiac ma 30 dni." << endl;
        break;

    case 2:
    {
        int year;
        cout << "Podaj rok: ";
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << "Ten miesiac ma 29 dni." << endl;
        else
            cout << "Ten miesiac ma 28 dni." << endl;
        break;
    }

    default:
        cout << "Nieprawidlowy numer miesiaca." << endl;
    }

    return 0;
}
