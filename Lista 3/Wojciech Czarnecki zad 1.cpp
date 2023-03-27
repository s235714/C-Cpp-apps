#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h> 
using namespace std;

void sortowanie(int tab[],int n)
{
  int max;
  for(int i=0;i<n-1;i++)
  {
    max = i;
    for(int a=i+1;a<n;a++)
    if(tab[a]>tab[max])
      max=a;
  swap(tab[i], tab[max]);
  }
}
int main()
{
	int i,los,n,znak;
    cout << "Podaj, ile liczb calkowitych ma zostac wylosowane z zakresu od 1 do 1000 \n(maksymalnie mozesz wylosowac 10000 liczb): \n";
    cout << "n=";
      cin >> n;
    int tab[10000];
       srand (time(NULL)); 
    for(i=0;i<n;i++)
	{
 	  los = (rand()%1000)+1;
	  tab[i]=los;
	}
    for (i=0; i<n; i=i+1)
    {
      cout << tab[i] << " ";
    }
    cout << "\n\nPowyzej wyswietlilo sie " << n << " wylosowanych liczb.\n"; 
    cout << "Teraz program posortuje wylosowane przez komputer " << n << " liczb.\n\n";
      while( znak !=13 )
      	znak = getche( ); 
      
    sortowanie(tab,n); 
 
    for(int i=0;i<n;i++)
    cout << tab[i] << " "; 
 
    cout << endl;  
   
    cout << "\n\nPowyzej wyswietlilo sie " << n << " liczb posortowanych w kolejnosci nierosnacej.\n";  
    system("PAUSE");
    return 0;       
}