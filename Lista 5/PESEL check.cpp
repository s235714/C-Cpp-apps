#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

bool check_PESEL(string pesel, char sex) 
{
    int control_number = 0;
    int digitsPESEL[11], weights[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    
    for (int i = 0; i < pesel.length(); i++)
        digitsPESEL[i] = pesel.at(i) - 48;

    if (digitsPESEL[9] % 2 == 0 && sex == 'm' || digitsPESEL[9] % 2 != 0 && sex == 'w')
        return false;

    for (int i = 0; i < 10; i++)
        control_number += (digitsPESEL[i] * weights[i]) % 10;

    control_number = 10 - (control_number % 10);

    if (digitsPESEL[10] != control_number)
        return false;

    return true;
}

int main()
 {
	string pesel;
	char sex;
	cout << "\t *** Program checking correctness of PESEL number ***\n\n";
	cout << "Give me the chain of 11 digits: ";
	    cin >> pesel;
	cout << "\nGive me the sign of sex - w for women or m for man: ";
        cin >> sex;
    cout << "\n";

    if (pesel.length() == 11 && (sex == 'w' || sex == 'm')) {

        if (check_PESEL(pesel, sex)) {
            cout << "\nGiven chain of digits is the PESEL number.\n\n";
        } else {
            cout << "\nGiven chain of digits is not the PESEL number.\n\n";
        }

    } else {
        cout << "You didn't give me 11 digits (PESEL) or you gave me bad sign of sex.\n\n";
        return main();
    }

    return 0;
}





