#include <iostream>

using namespace std;

int main()
{
    int tabela[4];
    
    cout << "Podaj liczby" <<endl;
    for(int i = 0; i < 4; i++)
    {
        cin >> tabela[i];
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (tabela[j] > tabela[i])
            {
            int t = tabela[j];
            tabela[j] = tabela[i];
            tabela[i] = t;
            }
        }
    }

    for(int i = 0; i < 4; i++)
    {
        cout << tabela[i];
    }

    return 0;
}
