#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
void petla();

using namespace std;

int main()
{
srand(time(NULL));
//Pole deklaracji zmiennych i funkcji
//Zadanie nr 1
    int Y[4];                       //zadeklarowana tablica
    const int dlTabY = 2;            //zadeklarowana wielkosc tablicy
    int wartosciTablicy(int Y[], int dlTabY);
    int sumaWartDodat (int Y[], int dlTabY);
    double sredniaWartUjemnych (int Y[], int dlTabY);
//Zadanie nr 2
    int A[4];                       //zadeklarowana tablica
    const int dlTabA = 12;
    int losowanieWartTab ( int A[], int dlTabA);
    int ileRazyLiczba(int liczba, int A[]);
    int liczba{};

//Zadanie nr 3
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
void petla(){
getchar();getchar();
system("cls");
}
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
//funkcja generujaca liczby w przedziale <-5, 5>2
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
