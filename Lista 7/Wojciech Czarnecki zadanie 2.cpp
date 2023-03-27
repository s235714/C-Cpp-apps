#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>
#define DLUGOSC 101
#define MAX 40

using namespace std;

void sortowanie_lancuchow(char *lancuch[], int numer)
{
  int rozmiar, szukanie;
  char *wsk;

  for (rozmiar=0; rozmiar < numer-1; rozmiar++)
     for (szukanie = rozmiar+1; szukanie<numer; szukanie++)
        if (strcmp(lancuch[rozmiar], lancuch[szukanie]) > 0)
        {
            wsk=lancuch[rozmiar];
            lancuch[rozmiar] = lancuch[szukanie];
            lancuch[szukanie] = wsk;
        }
}

int main()
{
	char *wsk_do_lancucha[MAX];
    char dane_wpr[MAX][DLUGOSC];
       int licznik_wejscie=0;
       int licznik_wyjscie;

	cout << "Wprowadz lancuchy znakow do posortowania (maksymalnie 40): \n";
	cout << "Wprowadz ENTER jako ostatni pusty lancuch. \n\n";
	
	 while (licznik_wejscie < MAX && gets(dane_wpr[licznik_wejscie]) != 0 && dane_wpr[licznik_wejscie][0] != '\0')
  {
     wsk_do_lancucha[licznik_wejscie] = dane_wpr[licznik_wejscie]; 
     licznik_wejscie++;
  }
  
  sortowanie_lancuchow(wsk_do_lancucha, licznik_wejscie); 
  
  cout << "\nPonizej znajduja sie uporzadkowane lancuchy w kolejnosci alfabetycznej: \n\n";
  
  for (licznik_wyjscie = 0; licznik_wyjscie < licznik_wejscie; licznik_wyjscie++)
  	
    cout << wsk_do_lancucha[licznik_wyjscie] << "\n\n" ; 
 
    system ("PAUSE");
	return 0;
}