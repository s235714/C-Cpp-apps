#include <iostream>
#include <cstdlib>
using namespace std;

double schemat_Hornera(int a[],int b, int c)
{
  if(b==0)
  {
  	  return a[0];
  }
  return c*schemat_Hornera(a,b-1,c)+a[b];
}

int main()
{
	int n;
	double x;
	cout << "\t *** Program wyliczajacy wartosc wielomianu n-tego stopnia ***\n\n";
	cout << "Podaj stopien N wielomianu: ";
	   cin >> n;
	cout << "\n\n";
	
	   if (n>=2)
{
	int *tab;
	tab = new int [n+1];
    for (int i=n; i>=0; i--)
	{
    cout << "Podaj wspolczynnik A" << i << ": ";
	      cin >> tab[n-i];
	cout << endl;      
	}     
    cout << "\nPodaj wartosc zmiennej X: ";
          cin >> x;
   	cout << endl;
    cout << "Wartosc wielomianu dla podanych zmiennych wynosi " << schemat_Hornera(tab,n,x) << ".\n\n";  
	     delete [] tab;    
}         
    else
	{
		cout << "\nWprowadzone dane nie sa poprawne...\n"; 
		return main();
	}
    system("PAUSE");
    return 0;       
}
