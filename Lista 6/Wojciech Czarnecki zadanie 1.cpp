#include <cstdlib>
#include <iostream>
#include <string>

 
using namespace std;
 
bool sprawdz_palindrom(string slowo)
{
    string odwrocone_slowo;   
    int dlugosc_slowa = slowo.length(); 
 
    for(int i=0; i<dlugosc_slowa; i++)
        odwrocone_slowo+=slowo[dlugosc_slowa-i-1];
 
    return slowo==odwrocone_slowo;
}
 
int main()
{
    string slowo;
 
    cout << "Podaj slowo, ktore ma sprawdzic program: ";
      cin >> slowo;
    cout << "\n";
    if (sprawdz_palindrom(slowo)==true)
	{
	  cout << "Podane slowo jest palindromem.\n\n";	
	}
      else
	  {
	  	cout << "Podane slowo nie jest palindromem.\n\n";
	  }

    system("PAUSE");
    return 0;
}