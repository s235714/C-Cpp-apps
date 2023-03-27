#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h> 
#include <ctime>
#include <string>
#include <math.h>
using namespace std;

struct PUNKT 
{
	double x, y;
    string nazwa;
    double odleglosc(const PUNKT P)
      {
        return sqrt((P.x-x)*(P.x-x)+(P.y-y)*(P.y-y));
      }
};

void losowanie_punktow(PUNKT* P, int n)
{	 
    srand(time(NULL));
    for(int i=0; i<n; i++)
   {
      P[i].x=rand()/(double)RAND_MAX+rand()%100;
      P[i].y=rand()/(double)RAND_MAX+rand()%100;
           cout << "Punkt (podaj nazwe punktu) ";
		   scanf("%s", P[i].nazwa.c_str());
		   cout << "\n";
	     	printf ("x = %.4f\n", P[i].x);
	    	printf ("y = %.4f\n\n", P[i].y);
   }
}

void liczenie_odleglosci(int& xMin, int& yMin, int& xMax, int& yMax, PUNKT* P, int n)
{
   double odl_min,odl_max;
    odl_min=P[0].odleglosc(P[n-1]);
	odl_max=P[0].odleglosc(P[n-1]);
	
    yMin=n-1;
	yMax=n-1;

  for(int i=0; i<n; i++)
    {
   for(int j=0; j<n; j++)
     {
       if(i==j) continue;
        if(P[i].odleglosc(P[j])<odl_min)
      {
        xMin=i;
        yMin=j;
        odl_min=P[i].odleglosc(P[j]);
      }
      
      if(P[i].odleglosc(P[j])>odl_max)
      {
        odl_max=P[i].odleglosc(P[j]);
        xMax=i;
	    yMax=j;
      }
     }
    }
}

int main()
{
	int n, minimalna[2]={0},maksymalna[2]={0};
	cout << "Podaj liczbe punktow, ktora ma wylosowac program: ";
	 cin >> n;
    cout << "\n";
      if (n<=1)
       {
		cout << "Podaj liczbe punktow wieksza lub rowna 2!\n\n";
		getch();
		system("CLS");
		return main();
       }
   else
       {
       	     PUNKT *tab = new PUNKT [n];
	 
	 	 losowanie_punktow(tab,n);
         liczenie_odleglosci(minimalna[0],minimalna[1],maksymalna[0],maksymalna[1],tab,n);
         
         cout << "Punkty o wspolrzednych najbardziej oddalonych od siebie:\n";
         printf("%s=(%.4lf, %.4lf)\n", tab[maksymalna[0]].nazwa.c_str(), tab[maksymalna[0]].x, tab[maksymalna[0]].y);
	     printf("%s=(%.4f, %.4f)\n", tab[maksymalna[1]].nazwa.c_str(), tab[maksymalna[1]].x, tab[maksymalna[1]].y);

		 cout << "\nPunkty o wspolrzednych najmniej oddalonych od siebie:\n";
		 printf("%s=(%.4lf, %.4lf)\n", tab[minimalna[0]].nazwa.c_str(), tab[minimalna[0]].x, tab[minimalna[0]].y);
		 printf("%s=(%.4lf, %.4lf)", tab[minimalna[1]].nazwa.c_str(), tab[minimalna[1]].x, tab[minimalna[1]].y);
       }

    cout << "\n\n";
	system ("PAUSE");
	return 0;
} 
