#include <iostream>

using namespace std;

int main()
{
    int liczba_kawalkow;
    int liczba_gosci;

    cout << "Podaj liczbe gosci: ";
    cin >> liczba_gosci;

    cout << "Podaj liczbe kawalkow pizzy: ";
    cin >> liczba_kawalkow;

    cout << "Liczba kawalkow pizzy dla gosci: " << liczba_kawalkow / liczba_gosci << endl;
    cout << "Liczba kawalkow pizzy dla gospodarza: " << liczba_kawalkow % liczba_gosci << endl;

    return 0;
}
