#include <iostream>
#include <cstdlib>
#include <stdio.h> 
using namespace std;

int main()
{
	float x,y,xc,yc,r,c;
     cout << "Podaj wybrane przez ciebie wspolrzedne punktu srodka okregu: \n\n";
     cout << "X=";
    	cin >> xc;
     cout << endl << "Y=";	
        cin >> yc;
     cout << endl << "Podaj dlugosc promienia okregu: \n\n";
     cout << "R=";
        cin >> r;
     cout << "\nPodaj wspolrzedne wybranego przez ciebie punktu: \n\n";
     cout << "X=";
    	cin >> x;
     cout << endl << "Y=";
    	cin >> y;   
    	
	 c=((xc-x)*(xc-x))+((yc-y)*(yc-y));
	 
     if(c<r*r)
       cout << "\nTwoj punkt lezy wewnatrz okregu.\n";
     else if(c>r*r)
	 
       cout << "\nTwoj punkt lezy na zewnatrz okregu.\n" ;
     else  cout << "\nTwoj punkt lezy na okregu.\n";
	 
    system ("PAUSE"); 
    return 0;      
}