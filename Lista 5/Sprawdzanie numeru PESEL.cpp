#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

bool sprawdzanie_PESEL(string pesel, char plec) 
{
    int cyfra_kontrolna = 0;
    int cyfryPESEL[11], wagi[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    
	// char -> int razy 11
    for (int i = 0; i < pesel.length(); i++)
        cyfryPESEL[i] = pesel.at(i) - 48;

    // czesc odpowiadajaca za plec
    if (cyfryPESEL[9] % 2 == 0 && plec == 'm' || cyfryPESEL[9] % 2 != 0 && plec == 'k')
        return false;

    // czesc odpowiadajaca za cyfre kontrolona
    for (int i = 0; i < 10; i++)
        cyfra_kontrolna += (cyfryPESEL[i] * wagi[i]) % 10;

    cyfra_kontrolna = 10 - (cyfra_kontrolna % 10);

    if (cyfryPESEL[10] != cyfra_kontrolna)
        return false;

    return true;
}

int main()
 {
	string pesel;
	char plec;

	cout << "Podaj lancuch 11 znakow: ";
	    cin >> pesel;
	cout << "\n";
	cout << "Podaj plec - k dla kobiety lub m dla mezczyzny: ";
        cin >> plec;
    cout << "\n";

    if (pesel.length() == 11 && (plec == 'k' || plec == 'm')) {

        if (sprawdzanie_PESEL(pesel, plec)) {
            cout << "\nPodany lancuch cyfr jest numerem PESEL.\n\n";
        } else {
            cout << "\nPodany lancuch cyfr nie jest numerem PESEL.\n\n";
        }

    } else {
        cout << "Nie podano ciagu 11 cyfr (PESEL) lub podano zle oznaczenia plci...\n\n";
        return main();
    }

    system("PAUSE");
    return 0;
}
