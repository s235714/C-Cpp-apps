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
  
  int min=tab[0];
  int poz=0;
  for (int i=1; i<n; i++)
  	if(min > tab[i]) 
	  {
	  	min=tab[i];
        poz=i;
	  }
	  
  cout << "Najmniejsza liczba wylosowana to " << min << " i wystapila na pozycji nr " << (poz+1) << ".\n\n";
    system ("PAUSE");				
    return 0;       
}

	  
  
  