#include <iostream>

using namespace std;

int main()
{
    int tablica[3];
    int wynik=0;
    
    for(int i=0; i<3; i++){
    cout<<"Podaj liczbe: "<<endl;
    cin>>tablica[i];        
    }
    
    for(int i=0; i<3; i++){
    wynik = wynik + tablica[i];       
    }
    
    cout<<"Wynik to: "<<wynik<<endl;
    
    return 0;
}
