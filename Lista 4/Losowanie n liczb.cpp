#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    #define rozmiar 10000
	int n,x,k=0,m=1;
	int liczn=0, licznik=0;
	int tab[rozmiar];
	float suma,sumanp=0,srednia,srednianp;
    suma = 0;
    srednia=0;
	  cout << "Podaj, ile liczb chcesz wylosowac z przedzialu <-30,50>: ";
	     cin >> n;
	  cout << "\n\n";
    srand (time(NULL));
	  for (int i=0; i<n; i++)
	  {
	  	x=(rand()%81)-30;    
	  	tab[i]=x;
	  	  suma=suma+tab[i];
          srednia=suma/n;
          if((tab[i] % 2) !=0) 
		  {
		  	sumanp=sumanp+tab[i];
		  	liczn++;
		  	srednianp=sumanp/liczn;
		  }
		  
	  } 
	   for (int i=0; i<n; i=i+1)
    {
      cout << tab[i] << " ";
    }
	  
	  cout << "\n\nPowyzej wylosowano " << n << " liczb z przedzialu <-30,50>.\n\n";
	  cout << "Srednia z wylosowanych liczb wynosi " << srednia << ".\n\n";
	  if (liczn>0)
	  {
	  printf ("Srednia z wylosowanych liczb nieparzystych wynosi %.4f" , srednianp); 
	  printf (".\n\n");
	  }
	  else 
	  {
	  	printf ("Srednia z wylosowanych liczb nieparzystych wynosi 0.\n\n");
	  }
	    for (int i=0; i<n-1; i++)
	  {
        if( tab[i] < tab[i+1] )
        {
            licznik++;
        }
	  }
    if( licznik == n-1 )
    {
    cout << "Tablica jest uporzadkowana rosnaco.\n\n";
    }
    else
    {
        cout << "Tablica nie jest uporzadkowana rosnaco.\n\n";
    }
    
    system ("PAUSE");				
    return 0;       
}
