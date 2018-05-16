
/*
 * hello.cpp
 */


#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    
    int r = 0; 
	cout << "koło" << endl;
	cout << "Podaj promień " ;
    
    cin >> r;
    cout << "Pole koła: " << M_PI * r * r  << endl;
    cout << "Obówd koła: " << 2 * M_PI *r  << endl;
    
	return 0;
}
