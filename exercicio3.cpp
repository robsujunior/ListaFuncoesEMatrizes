#include <iostream>
using namespace std;

float solucao (float a, float b);

int main()
{
    float a, b;

    cout << "Digite os coeficientes de uma equação de 1º grau (ax + b = 0) para obter sua solução\n";
    cout << "Valor de a: ";
    cin >> a;
    cout << "Valor de b: ";
    cin >> b;

    if(a != 0){
        
        cout << "A equação é determinada\n";
        cout << "O valor de x nessa equação é: " << solucao(a,b);
        
    }
    else if(b == 0){
        cout << "A equação é indeterminada";
    }
    else{
        cout << "A equação é impossível";
    }

    return 0;
}

float solucao (float a, float b){

    return -(b/a);
}
