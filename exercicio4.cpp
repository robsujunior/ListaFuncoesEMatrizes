#include <iostream>
using namespace std;

int main()
{
    int idade, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float peso, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;

    for(int i = 1; i <= 20; i++){
        cout << "Digite a idade da " << i <<"º pessoa: ";
        cin >> idade;
        cout << "Digite o peso da " << i <<"º pessoa: ";
        cin >> peso;

        if(idade < 1){
            cout << "Idade inválida";
        }
        else if(idade <= 10){
            soma1 += peso;
            cont1++;
        }
        else if(idade <= 20){
            soma2 += peso;
            cont2++;
        }
        else if(idade <= 30){
            soma3 += peso;
            cont3++;
        }
        else{
            soma4 += peso;
            cont4++;
        }

    }
    
    cout << "Entre 1 e 10 anos a média do peso é: " << soma1/cont1 << endl;
    cout << "Entre 11 e 20 anos a média do peso é: " << soma2/cont2 << endl;
    cout << "Entre 21 e 30 anos a média do peso é: " << soma3/cont3 << endl;
    cout << "Com mais de 30 anos a média do peso é: " << soma4/cont4 << endl;
    return 0;
}
