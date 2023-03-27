#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Load first number: ";
	cin >> a;						cout << "\n";
	cout << "Load second number: ";
	cin >> b;						cout << "\n";
	cout << "Load third number: ";
	cin >> c;						cout << "\n";
	cout << "\n";

	cout << "The biggest number is: ";

	if(a > b && a > c) cout << a;
	if(b > a && b > c) cout << b;
	if(c > a && c > b) cout << c;

	cout << "\n\n";

	return 0;  
}





































