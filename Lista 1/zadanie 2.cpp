#include <iostream>

using namespace std;

int main()
{
    float a1,b1,c1,a2,b2,c2,x,y;
    cout << "Podaj wybrane wspolczynniki prostych:";
    	    cout << endl << "A1=";
    cin >> a1;
	 	    cout << endl << "B1=";
    cin >> b1;
   	 	    cout << endl << "C1=";
    cin >> c1;
    	    cout << endl << "A2=";
    cin >> a2;
            cout << endl << "B2=";
    cin >> b2;
            cout << endl << "C2=";
    cin >> c2;
    
    x=(c2*b1-c1*b2)/(a2*b1-b2*a1);
    y=(c1-a1*x)/b1;
    cout << "Punkt przeciecia prostych o podanych wspolrzednych to: \n";
    cout << "X=" << x << endl << "Y=" << y;
    return 0;       
}