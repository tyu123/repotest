/*

 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    int i;
    int suma = 0;
    int liczba = 0;
    int ile_razy = 0;
    
    cout << "Ile liczb posiadasz? ";
    cin >> ile razy;
    
    for (i = 0; i< ile razy; i++)
    {
        cout << i << endl;
        cin >> liczba;
        //suma = suma + liczba;
        suma += liczba;
    }
    cout << "Suma: " << suma << endl;
    return 0;
}

