#include <iostream>
#include "osoba.hpp"

using namespace std;

void Osoba::wczytaj()
{
    cout<<"Program do robienia wizytowek"<<endl;
    cout<<"Podaj Imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<"Podaj adres: ";
    cin.ignore();
    getline(cin, adres);
}


void Osoba::wypisz()
{
    cout<<endl<<"Imie: "<<imie<<endl;
    cout<<"Nazwisko: "<<nazwisko<<endl;
    cout<<"Adres: "<<adres<<endl;


}
