#include <iostream>
#include <conio.h>
using namespace std;

char znak( char znaki )
{
    int b;
    cout << "wpisuj duze i male litery, wybierz ile ich chcesz" << endl;
    cin >> b;
    

    for( int i = 0; i < b; i++ )
    {
        cout << "wpisz znaki: " << endl;
        char znak;
        cin >> znak;
        
        if(( znak >= 'A' ) &&( znak <= 'Z' ) )
        {
            int k = 0;
            k++;
            
            cout << "Duzych znakow bylo: " << k++<< endl;
        }
        else
        {
            
            int j = 0;
            j++;
            cout << "Malych znakow by³o" << j++<< endl;
            
            
        }
    }
    
}

int main()

{
    char a;
    znak( a );
    getch();
    return 0;
}