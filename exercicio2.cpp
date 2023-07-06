#include <iostream>
using namespace std;

float mm (int a, int b);

int main()
{
    int a, b;
    cout << "Digite a fração correspondente a uma medida em polegadas para ser convertida em milímetros\n";
    cout << "Digite o numerador dessa fração: ";
    cin >> a;
    cout << "Digite o denominador dessa fração: ";
    cin >> b;

    cout << "A medida correspondente a esse valor em milímetros é: " << mm(a,b);
    return 0;
}

float mm(int a, int b){

    return (a/b)*25.4;
}
