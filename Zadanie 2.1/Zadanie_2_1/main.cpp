#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include<iomanip>

void petla();

using namespace std;

int main()
{
srand(time(NULL));
//Pole deklaracji zmiennych i funkcji
//Zadanie nr 1
    const int dlTabY = 10;            //zadeklarowana wielkosc tablicy
    int Y[dlTabY];                       //zadeklarowana tablica
    int wartosciTablicy(int Y[], int dlTabY);
    int sumaWartDodat (int Y[], int dlTabY);
    double sredniaWartUjemnych (int Y[], int dlTabY);
//Zadanie nr 2
    const int dlTabA = 12;
    int A[dlTabA];                       //zadeklarowana tablica
    int losowanieWartTab ( int A[], int dlTabA);
    int ileRazyLiczba(int liczba, int A[]);
    int liczba{};

//Zadanie nr 3
    const int dlTabX = 30;
    int X[dlTabX];
    int p{}, k{};
    int losowanieWartTabX ( int X[], int dlTabX, int p, int k);
    void wyswietlTabliceX (int X[], int dlTabX);
    double sredniaWartTabX (int X[], int dlTabX);
    void najwiekszaNajmniejszaLiczba(int X[], int dlTabX);
    void reversX(int X[], int dlTabX);
//Zadanie nr 4
int choice{};
do{

cout<<"Wybierz - 0 - aby wyjsc z programu! "<<endl<<endl;
cout<<"Zadanie 1 \nZadeklarowac tablice Y 10-elementowa typu int."<<endl<<endl;
cout<<"Zadanie 2 \nZadeklarowac tablic A 12-elementowa typu calkowitego."<<endl<<endl;
cout<<"Zadanie 3 \nW funkcji main() zadeklarowac 30-elementowa tablice X typu int."<<endl<<endl;
cout<<"Zadanie 4 \nNapisac funkcje, ktora oblicza odchylenie standardowe od sredniej arytmetycznej."<<endl<<endl;
cout<<"Ktore zadanie wykonac? "<<endl<<endl;
cin>> choice;

switch (choice)
{
case 0:
    cout<<"Program konczy dzialanie!"<<endl<<endl;
    exit(0);
    break;

case 1:
    cout<<"Zadanie nr 1"<<endl;
    wartosciTablicy(Y, dlTabY);
    cout<<"Suma rowna sie: "<<sumaWartDodat(Y, dlTabY)<<endl;
    cout<<"Srednia rowna sie: "<<sredniaWartUjemnych(Y, dlTabY)<<endl;
    petla();
    break;

case 2:
    cout<<"Zadanie nr 2"<<endl;
    losowanieWartTab(A, dlTabA);
    cout<<endl;
    cout<<"Podaj jakas liczbe: "<<endl;
    cin>>liczba;
    cout<<"Liczba: "<<liczba<<" wystepuje w tablicy: "<<ileRazyLiczba(liczba, A)<<endl;
    petla();
    break;

case 3:
    cout<<"Zadanie nr 3"<<endl;
    cout<<"Podaw wartosci poczatkowe 'p' i koncowe 'k' przedzialu z jakiego maja losowac sie liczby do tablicy X: "<<endl;
    cin>>p;
    cin>>k;
    losowanieWartTabX ( X,  dlTabX, p, k);
    wyswietlTabliceX (X, dlTabX);
    cout<<"Srednia wartosc tablicy to: "<<setprecision(2)<<sredniaWartTabX(X, dlTabX)<<endl<<endl;
    najwiekszaNajmniejszaLiczba(X, dlTabX);
    reversX(X, dlTabX);




    petla();
    break;

case 4:
    cout<<"Zadanie nr 4"<<endl;

    petla();
    break;

default:
    cout<<"Bledne dane"<<endl;
    petla();
    break;
}


}while(choice);
    return 0;
}

//==================================================================
//                       F U N K C J E
//==================================================================
//funkcja porzadkowa
void petla(){
getchar();getchar();
system("cls");
}


//========================================
// Funkcje do zadania nr 1:
//========================================
// funkcja generujaca dane do tablicy
 void wartosciTablicy (int Y[], int dlTabY){
cout << "Wpisz "<<dlTabY<<" elementow tablicy: "<< endl;
    for (int i = 0; i < dlTabY; i++){
        cin>>Y[i];
    }
}


// funkcja liczaca sume elementow dodatnich
int sumaWartDodat (int Y[], int dlTabY){
int suma{};
     for (int i = 0; i < dlTabY; i++){
        if(Y[i] > 0){
            suma = suma + Y[i];
        }
    }
    return suma;
}


//funkcja liczaca srednia wartosci ujemnych
double sredniaWartUjemnych (int Y[], int dlTabY){
double sumaDoSredniej{};
double srednia{};
    int j{};
     for (int i = 0; i < dlTabY; i++){
        if(Y[i] < 0){
            sumaDoSredniej = sumaDoSredniej + Y[i];
            j++;
        }
    }
    srednia = sumaDoSredniej/j;
    return srednia;
}


//========================================
//Funkcje do zadania nr 2
//========================================
//funkcja generujaca liczby w przedziale <-5, 5>
int losowanieWartTab ( int A[], int dlTabA)
{
for( int i = 0; i < dlTabA; i++ )
    {
        A[ i ] =( rand() % 10 ) - 5;
        cout << A[ i ] << " ";
    }
}


// funkcja sprawdzajaca dana liczbe w tablicy
int ileRazyLiczba(int liczba, int A[]) {
    int ile = 0;
    int arrSize = 12;
    for (int i = 0; i < arrSize; ++i) {
        if (A[i] == liczba) {
            ++ile;
        }
    }
    return ile;
}


//========================================
//Funkcje do zadania nr 3
//========================================
//wypelnianie tablicy losowymi elementami
int losowanieWartTabX ( int X[], int dlTabX, int p, int k){
for( int i = 0; i < dlTabX; i++ )
    {
        X[i] =  rand()%(k-p+1)+p;
    }
}


//funkcja do wystwietlania tablicy w rzedach po 10 wartosci
void wyswietlTabliceX(int X[], int dlTabX){
cout<<"Wylosowane wartosci tablicy X: "<<endl;
    for(int i=0; i<=dlTabX-1; i++)
    {
        cout <<setw(2)<<X[i];
        if((i+1)%10==0) cout << endl;

    }
    cout << endl;
}


// funkcja liczaca srednia elementow tablicy X
double sredniaWartTabX (int X[], int dlTabX){
double sumaDoSredniej{};
double srednia{};
     for (int i = 0; i < dlTabX; i++){
            sumaDoSredniej = sumaDoSredniej + X[i];
    }
    srednia = sumaDoSredniej/dlTabX;
    return srednia;
}


// wyswietlanie najwiekszej i najmniejszej wartosci tablicy
void najwiekszaNajmniejszaLiczba(int X[], int dlTabX){
int najwieksza{};
int najmniejsza;
for(int i=0; i<dlTabX; i++){
    if(X[i] > najwieksza){
        najwieksza = X[i];
        }
    }
    cout << "Najwieksza liczba tablicy X: " << najwieksza << endl;

 for(int i=0; i<dlTabX; i++){
         if(X[i] < najmniejsza){
            najmniejsza = X[i];
        }
    }
    cout << "Najmniejsza liczba tablicy X: " << najmniejsza << endl<<endl;
}


//odwrocenie kolejnosci elementow tablicy
void reversX(int X[], int dlTabX){
cout<<"Odwrocona kolejnosc elementow tablicy: "<<endl;
    for( int i=dlTabX-1; i>=0; i--)
    {
        cout <<setw(2)<<X[i];
        if((i)%10==0) cout << endl;

    }
    cout << endl;
}










