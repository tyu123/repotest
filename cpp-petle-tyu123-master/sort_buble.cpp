/*

 */


#include <iostream>

using namespace std;

void wypelnij (int t[], int n, int m) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        t[i] = 1 + rand() % m;
    }
}

void drukuj (int t[], int n) {
    for (int i = 0; i < n; i++) {
       cout << t[i] << " ";
    }
}

void zamien(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
  }  
void sort_babel (int t[], int n) {
    for (int i = 0; i < n; i++) [
        for (int j = i + 1; j < n - i - 1; j++) {
            if (t[j-1] > t[j])
                zamień(t[j - 1], t[j]);
    
int main(int argc, char **argv)
{
	const int ile = 10;
    int tab[ile];
    wypelnij(tab, ile, 20);
    drukuj(tab, ile);
    sort_babel(tab, ile);
	return 0;

	
	return 0;
}

