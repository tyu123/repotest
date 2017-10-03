/*
 
 */


#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char **argv)
{
	
    int a, b, c;
    int obwod = 0;
    float p = 0;
    a = b = c = 0;
    cout << "podaj boki: " << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Można zbudować!" << endl;
        obwod = a + b + c;
        cout << "Obwod: " << obwod << endl;
        p = 0.5 * obwod;
        cout << "p = " << p << endl;
        cout << "Pole: " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
    
    
}
	return 0;
}

