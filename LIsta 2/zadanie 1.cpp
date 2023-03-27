#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
 	   double xp, xk, dx, x, wynik;
    cout << "Podaj wartosc swojego x poczatkowego z przedzialu <-10,10>: \n";
    cout << "Xp=";
       cin >> xp;
    cout << endl << "Podaj wartosc swojego x koncowego z przedzialu <-10,10>: \n";
    cout << "Xk=";
       cin >> xk;
    cout << endl << "Podaj dokladnosc (do maksymalnie 2 miejsc po przecinku), z jaka wartosc x ma sie zmieniac w wybranym przedziale: \n";
    cout << "Dx=" ;
       cin >> dx;
	cout << endl;
    
       printf ("     x      1-sin(x)*sin(x)      1/(x*x+1)      exp(-x)      1/exp(x)\n");
       for (x=xp; x <=xk; x+=dx)
       {
	   	 printf  ("%7.2f", x);
	   	 
	   	 wynik= 1-sin(x)*sin(x);
	   	 printf("%16.3f",wynik);
	   	 
	   	 wynik= 1/(x*x+1);
	   	 printf("%17.3f",wynik);
	   	 
	   	 wynik= exp(-x);
	   	 printf("%14.4f",wynik);
	   	 
	   	 wynik= 1/exp(x);
	   	 printf("%13.4f",wynik);
	   	 
	   	 printf("\n");
	   }
	   
	system ("PAUSE");    
    return 0;   
}