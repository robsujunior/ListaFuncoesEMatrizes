#include <iostream>
using namespace std;

int soma(int a, int b);
int produto(int a, int b);

int main(){
    int a, b;

    cout << "Digite 2 números para ser feita a soma e o produto deles\n"
    << "Primeiro número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    
    cout << "A soma dos números é: " << soma(a,b) << endl;
    cout << "O produto dos números é: " << produto(a,b);

    return 0;
}

int soma(int a, int b){
    return a + b;
} 
int produto(int a, int b){
    return a*b;
} 