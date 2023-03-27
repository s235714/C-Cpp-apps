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
      
      cout << "Liczby ujemne znajduja sie na pozycjach ";
      int poz=0;
      for (int i=0; i<n; i++)
	  	if (tab[i]<0)
		  {
		  	poz=i;
		  	cout << i+1 << ", ";
		  }
		  cout << "\n\n";
  	system ("PAUSE");				
    return 0;       
}