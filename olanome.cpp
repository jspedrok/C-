#include <iostream>
using namespace std;
int main (void)
{
    char NOME[50], SOBRENOME[20];
    cout << "Informe seu nome: ";
    cin.getline(NOME, sizeof(NOME));
    cout << "informe seu sobrenome: ";
    cin >> SOBRENOME;
    cout << "ola, \n " << NOME;
    cout << " " << SOBRENOME << endl;
    system ("pause") ;
    return 0;
    
}