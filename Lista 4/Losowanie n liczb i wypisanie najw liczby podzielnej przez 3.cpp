#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  #define rozmiar 10000
  int n,x;
  int tab[rozmiar];
  
   cout << "Podaj, ile liczb chcesz wylosowac z przedzialu <-30,50>: ";
	     cin >> n;
	  cout << "\n\n";
    srand (time(NULL));
	  for (int i=0; i<n; i++)
	  {
	  	x=(rand()%81)-30;    
	  	tab[i]=x;
	   } 
	   for (int i=0; i<n; i=i+1)
    {
      cout << tab[i] << " ";
    }
     cout << "\n\nPowyzej wylosowano " << n << " liczb z przedzialu <-30,50>.\n\n";
     
     int max;
     max = tab[0];
     for (int i=0; i<n; i++)
     if((tab[i]%3) == 0 && max<tab[i])
     	max=tab[i];
     cout << "Najwieksza liczba podzielna przez 3 to " << max << ".\n\n";
  	system ("PAUSE");				
    return 0;       
}