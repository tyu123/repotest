/*

 */


#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int liczba = 120;
    int podstawa = 2;
    int reszty[16];
    int i = 0;
    do {
        reszty[i] = liczba%podstawa;
        liczba = liczba / podstawa;
        i++;
    } while(liczba > 0);
    
   // for(int j = i - 1; j >= 0; j--){
  //      cout << reszty[j];
  //  }
  i--;
  while (i - 1 >= 0){
      cout << reszty[i];
      i--;
    }
	return 0;
}

