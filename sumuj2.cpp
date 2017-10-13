/*

 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    int suma = 0;
    int liczba = 0;
    
    
    
    for ( ; ; )
    {
        cout << "Podaj liczbę: " << endl;
        cin >> liczba;
        //suma = suma + liczba;
        suma += liczba;
        if (suma > 100) break;
    }
    cout << "Suma: " << suma << endl;
    return 0;
}

