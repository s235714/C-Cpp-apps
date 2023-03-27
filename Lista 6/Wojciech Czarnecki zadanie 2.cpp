#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>

using namespace std;

   double p1,p2,X;
   double trapez(double p, double q, double h)
 {
    return h*(p + q)/2;
 }
int main()
{
 cout << "Program liczacy pole ograniczone krzywa y=q*e^(-x*x) i prostymi y=0, x=xp, x=xk\n\n";
    double xp, xk, q, E;
    double pole1, pole2;
    int a=2;
     cout << "Podaj xp - dolna granice przedzialu: "; 
	   cin >> xp;
     cout << "\nPodaj xk - gorna granice przedzialu: "; 
	   cin >> xk;
     cout << "\nPodaj q - wspolczynnik funkcji: "; 
	   cin >> q;
     cout << "\nPodaj E - dokladnosc obliczen: "; 
	   cin >> E;

  while(E<fabs((pole2-pole1)/pole1))
  {
    X=(double)(xk-xp)/(double)a;
      pole1=0;
      pole2=0;
   for(int i=0; i<a; i++)
    {
     p1=(q*exp(-(xp+i*X)*(xp+i*X)));
     p2=(q*exp(-(xp+i*X+X)*(xp+i*X+X))); 
     pole1+=trapez(p1,p2,X);
    }
     X=(double)(xk-xp)/(double)a*2;
   for(int i=0; i<a*2; i++)
    {
     p1=(q*exp(-(xp+i*X)*(xp+i*X)));
     p2=(q*exp(-(xp+i*X+X)*(xp+i*X+X)));
     pole2+=trapez(p1,p2,X);
    }
  }
    printf ("\nPole figury ograniczonej danymi krzywymi to: %.4f \n\n", pole2);

    system("PAUSE");
    return 0; 
}