#include <iostream>
using namespace std;

float salario (float a, float b);

int main()
{
    float horasTrab, salariohr;
    cout << "Digite quantas horas de trabalho foram realizadas: ";
    cin >> horasTrab;
    cout << "Digite o salário correspondente a hora do serviço: ";
    cin >> salariohr;

    cout << "O salário bruto é: " << horasTrab*salariohr << endl;
    cout << "O salário líquido é: " << salario(horasTrab, salariohr);
    return 0;
}

float salario (float a, float b){

    float salarioliquido;
    float salariobruto = a*b;

    if(salariobruto < 100){
        salarioliquido = salariobruto;
    }
    else if(salariobruto <= 200){
        salarioliquido = 0.9*salariobruto; 
    }
    else{
        salarioliquido = 0.8*salariobruto;
    }

    return salarioliquido;

}
