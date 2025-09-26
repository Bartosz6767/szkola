#include <iostream>

using namespace std;

int main()
{
    
    string znak1;
    string znak2;
    int szerokosc;
    int dlugosc;
    
    cout<<"Podaj pierwszy znak: "<<endl;
    cin>>znak1;
    
    cout<<"Podaj drugi znak: "<<endl;
    cin>>znak2;
    
    cout<<"Podaj szerokosc: "<<endl;
    cin>>szerokosc;
    
    cout<<"Podaj dlugosc: "<<endl;
    cin>>dlugosc;
    
    for(int i=0;i<dlugosc;i++){
        for(int i=0; i<szerokosc;i++){
        cout<<znak1;
    }
        cout<<""<<endl;
        for(int j=0; j<szerokosc;j++){
        cout<<znak2;
    }
        cout<<""<<endl;
    }
    return 0;
}
