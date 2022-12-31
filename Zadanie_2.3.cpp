#include <iostream>

using namespace std;

int main()
{
    int month;

    cout << "Podaj numer miesiaca z przedzialu od 1 do 12: ";
    cin >> month;
    cout << endl;

    switch (month)
    {
    case 1:
        cout << "Styczen" << ", 31 dni. " << "Pogoda pochmurna." << endl;
        break;
    case 2:
        cout << "Luty" << ", 28 dni. " << "Pogoda pochmurna." << endl;
        break;
    case 3:
        cout << "Marzec" << ", 31 dni. " << "Pogoda pochmurna." << endl;
        break;
    case 4:
        cout << "Kwiecien" << ", 30 dni. " << "Pogoda sloneczna." << endl;
        break;
    case 5:
        cout << "Maj" << ", 31 dni. " << "Pogoda sloneczna." << endl;
        break;
    case 6:
        cout << "Czewiec" << ", 30 dni. " << "Pogoda sloneczna." << endl;
        break;
    case 7:
        cout << "Lipiec" << ", 31 dni. " << "Pogoda sloneczna." << endl;
        break;
    case 8:
        cout << "Sierpien" << ", 31 dni. " << "Pogoda sloneczna." << endl;
        break;
    case 9:
        cout << "Wrzesien" << ", 30 dni. " << "Pogoda sloneczna." << endl;
        break;
    case 10:
        cout << "Pazdziernik" << ", 31 dni. " << "Pogoda pochmurna." << endl;
        break;
    case 11:
        cout << "Listopad" << ", 30 dni. " << "Pogoda pochmurna." << endl;
        break;
    case 12:
        cout << "Grudzien" << ", 31 dni. " << "Pogoda pochmurna." << endl;
        break;
    default:
        cout << "Wybrales liczbe spoza przedzialu." << endl;
    }
    return 0;
}