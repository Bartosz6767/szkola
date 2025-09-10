#include <iostream>

using namespace std;

void zadanie1() {
    for (int i = 5; i <= 15; i++) {
        cout << i << endl;
    }
}

void zadanie2() {
    for (int i = 20; i >= 10; i--) {
        cout << i << endl;
    }
}

void zadanie3() {
    for (int i = 1; i <= 10; i++) {
        cout << i << ". bartek" << endl;
    }
}

void zadanie4() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void zadanie5() {
    int x, y;
    cout << "Podaj szerokosc prostokata: ";
    cin >> x;
    cout << "Podaj wysokosc prostokata: ";
    cin >> y;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void zadanie6() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    cout << "Zadanie 1: " << endl;
    zadanie1();
    
    cout << "Zadanie 2: " << endl;
    zadanie2();
    
    cout << "Zadanie 3: " << endl;
    zadanie3();
    
    cout << "Zadanie 4: " << endl;
    zadanie4();
    
    cout << "Zadanie 5: " << endl;
    zadanie5();
    
    cout << "Zadanie 6: " << endl;
    zadanie6();
    
    return 0;
}
