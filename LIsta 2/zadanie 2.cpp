#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{ 
	char napis;
	int licznik_malych=0, licznik_duzych=0, licznik_cyfr=0, licznik_innych=-1;
	
    cout << "Podaj swoj napis ponizej: \n";
    
    do{
	napis=getchar() ;
	
	if(napis>='a' && napis<='z')	
		licznik_malych++;
	else
	if(napis>='A' && napis<='Z')	
		licznik_duzych++;
	else
	if(napis>='0' && napis<='9')	
		licznik_cyfr++;
	else
	    licznik_innych++;
	
	} while(napis!='\n');
	
	cout << "Ilosc malych liter: " << licznik_malych << "\n";
	cout << "Ilosc duzych liter: " << licznik_duzych << "\n";
	cout << "Ilosc cyfr: " << licznik_cyfr << "\n";
	cout << "Ilosc innych znakow: " << licznik_innych << "\n";
    
    system ("PAUSE");
    return 0; 
} 