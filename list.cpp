#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <dos.h>

// utwórz w programie egzemplarze klas Student oraz Pracownik,a następnie (przypisz ich składnikom danych wartości pobrane z klawiatury)

using namespace std;
 
class osoba {
 
protected:
    string imie = "Mariusz";
    string nazwisko = "Perzyński";
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
private:
    string stanowisko;
    void pobierz_dane();
public:
    void pokaz_dane();
};
 
void pracownik::pobierz_dane() {
    cout << "\nPodaj stanowisko: \n";
    cin >> stanowisko;
}
 
void pracownik::pokaz_dane() {
    pobierz_dane();
    cout << "\nImie: " << imie << "\n";
    cout << "Nazwisko: " << nazwisko << "\n";
    cout << "Wiek: " << wiek << "\n";
    cout << "Stanowisko: " << stanowisko << "\n";
}
class student : private osoba
{
private:
    string grupa;
    void pobierz_dane();
public:
    void pokaz_dane();
};
 
void student::pobierz_dane() {
    cout << "\nPodaj grupe: \n";
    cin >> grupa;
}
 
void student::pokaz_dane() {
    pobierz_dane();
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
    p2.pokaz_dane();
    p3.pokaz_dane();
    return 0;
}