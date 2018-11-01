#include <iostream>
#include "Bilhete.h"
#include "Metro.h"

using namespace std;

int main()
{
    Metro Metro_Porto;

    char x, tipo;
    int duracao, idade, cc;
    string categoria, nome, escola;

    while (x != 'x')
    {
        cout << "Ocasional OU Assinatura? (o/a)" << endl;
        cin >> x;
        if (x == 'x')
            break;
        else if (x == 'o')
        {
            cout << "Duracao? (2/24), categoria?" << endl;
            cin >> duracao >> categoria;
            Ocasional bilhete1(categoria, duracao);
            Metro_Porto.adicionaBilhete(&bilhete1);
        }
        else if (x == 'o')
        {
            cout << "Tipo? (n/e/j)" << endl;
            cin >> tipo;
            if (tipo == 'n')
            {
                cout << "Nome?" << endl;
                cin >> nome;
                Normal bilhete1(categoria, nome);
                Metro_Porto.adicionaBilhete(&bilhete1);
            }
            if (tipo == 'e')
            {
                cout << "Nome, idade, cc, escola?" << endl;
                cin >> nome >> idade >> cc >> escola;
                ;
                Estudante bilhete1(categoria, nome, idade, cc, escola);
                Metro_Porto.adicionaBilhete(&bilhete1);
            }
            if (tipo == 'j')
            {
                cout << "Nome, idade, cc??" << endl;
                cin >> nome >> idade >> cc;
                Junior_Senior bilhete1(categoria, nome, idade, cc);
                Metro_Porto.adicionaBilhete(&bilhete1);
            }
        }
    }

    for (int i = 0; i < Metro_Porto.numeroBilhetes(); i++)
    {
        cout << Metro_Porto.bilhetes[i]->getCategoria();
    }

    return 0;
}
