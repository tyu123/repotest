/*

 */


#include <iostream>

using namespace std;

void pobierzDane(int tab[], int ile)
float liczśrednia(int tab[], int ile)

int main(int argc, char **argv)
{
    //const int ROZMIAR = 5;
    int rozmiar  = 0;
    cout << "Ile ocen: " << endl;
    cin >> rozmiar;
    int suma = 0;
    int i;
    
    int liczby[rozmiar];
    
    cout << "Podaj rozmiar ocen (0-6): " << endl;
    
    for(i = 0; i < rozmiar; i++) {
        cin >> liczby[i];
    }
    
    cout << "Podane oceny: " << endl;
    for(i = 0; i < rozmiar; i++) {
        suma += liczby[i];
        cout << liczby[i] << " ";
    }
    cout << "Suma liczb: " << suma(liczby, rozmiar) << endl;
    cout << "Średnia: " << float(suma)/float(rozmiar) << endl;
    
    
    


    
    
    return 0;
}

