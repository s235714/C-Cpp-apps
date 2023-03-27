#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

string napis, klucz, wynik;
int pom; //pomocniczy indeks dla klucza

char roznica_symetryczna(char znak1, char znak2) 
{
    return char(unsigned(znak1 ^ znak2));
}

string szyfrowanie(string napis, string klucz) {
    wynik = "";
    pom = 0;

    for (int znak = 0; znak < napis.length(); znak++) 
	{
        if (znak % klucz.length() == 0) //jesli kazdy znak z klucza zostal juz wykorzystany - zacznij od jego pierwszego znaku
            pom = 0;

        wynik += roznica_symetryczna(napis.at(znak), klucz.at(pom));
        pom++;
    }

    return wynik;
}

int main() 
{
    cout << "Podaj pierwszy napis, ktory ma byc zaszyfrowany: \n";
    std::getline(std::cin, napis);

    cout << "\nPodaj klucz szyfrujacy:\n";
    std::getline(std::cin, klucz);

    if (napis.length() > 0 && klucz.length() > 0 && (napis.length() >= klucz.length())) //Przyjac, ze dlugosc napisu s2 jest nie wieksza ni¿ dlugosc napisu s1.
	{ 
        cout << "\nZaszyfrowany pierwszy napis:\n" << szyfrowanie(napis, klucz) << "\n";
        cout << "\nOdszyfrowany napis:\n" << szyfrowanie(szyfrowanie(napis, klucz), klucz) << "\n\n";
    } 
	else 
	{
        cout << "\nWprowadzone dane nie sa poprawne...\n\n";
        return main();
    }

    system("PAUSE");
    return 0;
}