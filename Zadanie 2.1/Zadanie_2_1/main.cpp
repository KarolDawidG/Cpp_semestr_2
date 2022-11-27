#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()

{
//Pole deklaracji zmiennych i funkcji
//Zadanie nr 1
    int Y[4];                       //zadeklarowana tablica
    const int dlTab = 2;            //zadeklarowana wielkosc tablicy
    int wartosciTablicy(int Y[], int dlTab);
    int sumaWartDodat (int Y[], int dlTab);
    double sredniaWartUjemnych (int Y[], int dlTab);
//Zadanie nr 2
//Zadanie nr 3
//Zadanie nr 4
int choice{};
do{

cout<<"Wybierz - 0 - aby wyjsc z programu! "<<endl<<endl;
cout<<"Zadanie 1 \nZadeklarowac tablice Y 10-elementowa typu int."<<endl<<endl;
cout<<"Zadanie 2 \nZadeklarowac tablic A 12 – elementowa typu calkowitego."<<endl<<endl;
cout<<"Zadanie 3 \nW funkcji main() zadeklarowac 30-elementowa tablice X typu int."<<endl<<endl;
cout<<"Zadanie 4 \nNapisac funkcje, ktora oblicza odchylenie standardowe od sredniej arytmetycznej."<<endl<<endl;
cout<<"Ktore zadanie wykonac? "<<endl<<endl;
cin>> choice;

switch (choice)
{
case 0:
    cout<<"Program konczy dzialanie!";
    exit(0);
    break;

case 1:
    cout<<"Zadanie nr 1"<<endl;
    wartosciTablicy(Y, dlTab);
    cout<<"Suma rowna sie: "<<sumaWartDodat(Y, dlTab)<<endl;
    cout<<"Srednia rowna sie: "<<sredniaWartUjemnych(Y, dlTab)<<endl;
    getchar();getchar();
    system("cls");
    break;

case 2:
    cout<<"Zadanie nr 2"<<endl;

    getchar();getchar();
    system("cls");
    break;

case 3:
    cout<<"Zadanie nr 3"<<endl;

    getchar();getchar();
    system("cls");
    break;

case 4:
    cout<<"Zadanie nr 4"<<endl;

    getchar();getchar();
    system("cls");
    break;

default:
    cout<<"Bledne dane"<<endl;

    getchar();getchar();
    system("cls");
    break;
}


}while(choice);
    return 0;
}

//==================================================================
//                       F U N K C J E
//==================================================================
// Funkcje do zadania nr 1:

// funkcja generujaca dane do tablicy
 void wartosciTablicy (int Y[], int dlTab){
cout << "Wpisz "<<dlTab<<" elementow tablicy: "<< endl;
    for (int i = 0; i < dlTab; i++){
        cin>>Y[i];
    }
}

// funkcja liczaca sume elementow dodatnich
int sumaWartDodat (int Y[], int dlTab){
int suma{};
     for (int i = 0; i < dlTab; i++){
        if(Y[i] > 0){
            suma = suma + Y[i];
        }
    }
    return suma;
}

double sredniaWartUjemnych (int Y[], int dlTab){
double sumaDoSredniej{};
double srednia{};
    int j{};
     for (int i = 0; i < dlTab; i++){
        if(Y[i] < 0){
            sumaDoSredniej = sumaDoSredniej + Y[i];
            j++;
        }
    }
    srednia = sumaDoSredniej/j;

    return srednia;
}
