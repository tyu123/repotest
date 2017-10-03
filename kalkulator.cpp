/*
 *
 */


#include <iostream>

using namespace std;




int main(int argc, char **argv)
{
	char znak; // +. -, *, /
    int a, b;
    cout << "podaj dzialanie";
    cin >> a;
    cin >> znak;
    cin >> b;
    
    cout << "=";
    
    if (znak == '+')
    {
        cout << a + b << endl;
    }
    if (znak == '*')
    {
        cout << a * b << endl;
    }
    if (znak == '-')
    {
        cout << a - b << endl;
    }
    if (znak == '/')
    {
        cout << a / b << endl;
    }   
    
    
    
	return 0;
}

