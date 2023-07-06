#include <iostream>
using namespace std;

int main()
{
    float vet [10], maior, menor;

    for (int i = 0; i < 10; i++){
        cout << "Digite o " << i+1 << "º valor: ";
        cin >> vet[i];

        if (i == 0){
            maior = vet[i];
            menor = vet[i];
        }
        else{
            if(vet[i] > maior){
                maior = vet[i];
            }
            if(vet[i] < menor){
                menor = vet[i];
            }
        }
    
    }
    cout << "O maior entre esses números é: " << maior << endl;
    cout << "O menor entre esses números é: " << menor << endl;
    return 0;
}
