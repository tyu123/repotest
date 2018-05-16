/*

 */
 
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int suma, liczba, ilosc;
    suma = 0;
    liczba = 0;
    ilosc = 0;
    while (1)        //for (;;) 
  {  
    cout << "Podaj liczbę:" << endl;
    cin >> liczba;
    ilosc++;
    suma += liczba;
    
    if ( suma > 100)
        break;
}
    cout << "Suma liczb: " << suma << endl; 
    cout << "Ilość podanych liczb: " << ilosc << endl;     
        
        return 0;
}
