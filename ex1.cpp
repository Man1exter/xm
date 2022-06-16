// utwórz w programie egzemplarze klas Student oraz Pracownik,a następnie (przypisz ich składnikom danych wartości pobrane z klawiatury)
// Zmodyfikuj program z zadania 1 tak, aby przypisanie składnikom danych wartości pobranych zklawiatury, w stworzonych  egzemplarzach klasStudentorazPracownik,//  //// wykonane zostało zapomocą metody zaprzyjaźnionej z klasą.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <dos.h>

using namespace std;
 
class osoba {
 
protected:
    string imie = "Mariusz";
    string nazwisko = "Perzynski";
    int wiek = 21;
 
public:
    void pokaz_dane();
};
 
void osoba::pokaz_dane() {
    cout << "\nImie: " << imie << "\n";
    cout << "Nazwisko: " << nazwisko << "\n";
    cout << "Wiek: " << wiek << "\n";
}
 
class pracownik : private osoba
{
friend void pobierz_stanowisko(pracownik&);
private:
    string stanowisko;
public:
    void pokaz_dane();
};
 
void pracownik::pokaz_dane() {
    cout << "\nImie: " << imie << "\n";
    cout << "Nazwisko: " << nazwisko << "\n";
    cout << "Wiek: " << wiek << "\n";
    cout << "Stanowisko: " << stanowisko << "\n";
}
class student : private osoba
{
friend void pobierz_grupe(student&);
private:
    string grupa;
public:
    void pokaz_dane();
};
 
 
void student::pokaz_dane() {
    cout << "\nImie: " << imie << "\n";
    cout << "Nazwisko: " << nazwisko << "\n";
    cout << "Wiek: " << wiek << "\n";
    cout << "Stanowisko: " << grupa << "\n";
}
 
int main()
{
    osoba p1;
    pracownik p2;
    student p3;
 
    p1.pokaz_dane();
    pobierz_stanowisko(p2);
    p2.pokaz_dane();
    pobierz_grupe(p3);
    p3.pokaz_dane();
    return 0;
}
 
void pobierz_stanowisko(pracownik& p) {
    cout << "\nPodaj stanowisko: \n";
    cin >> p.stanowisko;
}
void pobierz_grupe(student& p) {
    cout << "\nPodaj grupe: \n";
    cin >> p.grupa;
}