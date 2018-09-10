#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
    
int masa = 0;
float wzrost = 0;
float bmi = 0;
 
 
 cout << "Podaj masę (kg): ";
 cin >> masa;
 
while(masa < 0 or masa > 1000)
{
   cout << "Błędna wartosć ";
   cin >> masa;
}
 
 cout << "Podaj wzrost (cm): ";
cin >> wzrost;
 
while(wzrost < 0 or wzrost > 300)
{
   cout << "Błedna wartość";
   cin >> wzrost;
}
 
 
bmi = masa / (wzrost * wzrost ); 
 
 cout << "Twoje BMI wynosi:" << endl;
cout << bmi << endl << endl;
 
 
if (bmi < 18.5)
{
 cout << "niedowaga" << endl;
}
 
if (bmi > 18.5 and bmi < 24.9)
{
 cout << "norma" << endl;
}
 
if (bmi > 25)
{
 cout << "nadwaga" << endl;
}

if (bmi > 30)
{
 cout << "otyłość" << endl;
}

return 0;
}
