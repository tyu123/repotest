/*

 * 
 */



#include <iostream>
 #include <math.h>
 
 
using namespace std;
 
 
int main(int argc, char **argv)
{
    int n=0;
    int suma=0;
   
    cout<<"Podaj liczbe: ";
    cin>>n;
   
    while(1)
    {
        while(n>0)
        {
            suma+=n%10;
            n/=10;
        }
       
        cout<<"Suma cyfr jest rowna: "<<suma<<endl;
       
        if(suma>0 && suma<10)
        {
        break;
        }else
        {
            n+=suma;
            suma=0;
        }
    }
   
    return 0;
}

