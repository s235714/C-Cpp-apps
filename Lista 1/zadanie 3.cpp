#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
 
int main()
{
	cout << "Podaj ponizej swoje slowo: \n\n";
        string slowo;
        cin >> slowo;
    cout << "\n\n";    
    cout << "Podany ponizej wyraz sklada sie z liter na parzystych miejscach twojego slowa: \n\n";
    
        for (int i=1;i<int(slowo.size());i=i+2) 
	cout << slowo[i];
    cout << "\n\n";

       system ("PAUSE");
        return 0;
}