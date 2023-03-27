#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double a,b,c,d,min;
    cout << "Podaj wybrane 4 liczby:";
    	cout << endl << "a=";
    cin >> a;
   	 	 cout << endl << "b=";
    cin >> b;
   	 	 cout << endl << "c=";
    cin >> c;
    	cout << endl << "d=";
    cin >> d;
        cout << endl;
    
    if(a<b)
    	min=a;
    else
	{
		min=b;
	}
    if (min<c)
    	min=min;
    else
	{
		min=c;
	}
	if(min<d)
		min=min;
	else
	{
		min=d;
	}
    	
		cout << "Najmniejsza liczba to: " << min << endl << endl;
	if (a==b)
    	cout << "Dwie z podanych liczb sa sobie rowne";
    else if (a==c)
    	cout << "Dwie z podanych liczb sa sobie rowne";
    else if (a==d)
    	cout << "Dwie z podanych liczb sa sobie rowne";
    else if (b==c)
    	cout << "Dwie z podanych liczb sa sobie rowne";
    else if (b==d)
    	cout << "Dwie z podanych liczb sa sobie rowne";
    else if (c==d)
    	cout << "Dwie z podanych liczb sa sobie rowne";
    else cout << "Zadne z podanych liczb nie sa sobie rowne.\n\n";
    
    system("PAUSE");
    return 0;       
    
}