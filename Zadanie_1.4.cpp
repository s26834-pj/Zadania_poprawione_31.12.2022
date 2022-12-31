#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int liczba1, liczba2, liczba3;
    cout << "Podaj trzy liczby" << endl;
    cin >> liczba1;
    cin >> liczba2;
    cin >> liczba3;

    cout << endl;
    cout << "Rozwiazanie 1 metoda" << endl;

    if ((liczba1 > liczba2) && (liczba1 > liczba3))
    {
        cout << "Liczba: " << liczba1 << " jest najwieksza" << endl;
    }
    else if ((liczba2 > liczba1) && (liczba2 > liczba3))
    {
        cout << "Liczba: " << liczba2 << " jest najwieksza" << endl;
    }
    else
    {
        cout << "Liczba: " << liczba3 << " jest najwieksza" << endl;
    }

    cout << endl;
    cout << "Rozwiazanie 2 metoda" << endl;

    int m = liczba1;

    if (liczba2 > m) m = liczba2;
    if (liczba3 > m) m = liczba3;
    cout << "Liczba: " << m << " jest najwieksza" << endl;


    cout << endl;
    cout << "Rozwiazanie 3 metoda" << endl;
    cout << "Liczba: " << max(max(liczba1, liczba2), max(liczba2, liczba3)) << " jest najwieksza" << endl << endl;

    return 0;
}