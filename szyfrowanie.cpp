#include <iostream>

using namespace std;

string wiadomosc="";
string zaszyfrowana="";

string zaszyfruj(string wiadomosc){
    for(int i=0; i<wiadomosc.length(); i++){
    cout<<wiadomosc[i]<<" ";
    wiadomosc[i]+=2;
    cout<<wiadomosc[i]<<endl;
    }
    return wiadomosc;
}

string deszyfruj(string wiadomosc){
    for(int i=0; i<wiadomosc.length(); i++){
    cout<<wiadomosc[i]<<" ";
    wiadomosc[i]-=2;
    cout<<wiadomosc[i]<<endl;
    }
    return wiadomosc;
}

int main()
{

    cout<<"Podaj wiadomosc: "<<endl;
    cin>>wiadomosc;

    zaszyfrowana = zaszyfruj(wiadomosc);
    cout<<deszyfruj(zaszyfrowana);
    return 0;
}
