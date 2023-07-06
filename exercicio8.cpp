#include <iostream>
using namespace std;

void imprimir(int idade[], int totalP);

int main()
{
    int n = 0, cont = 0;
    string final = "";

    cout <<"Digite quantas idades você deseja inserir: ";
    cin >> n;
    int idades[n];

    for(int i = 0; i < n; i++){
        cout << "Digite a " << i+1 << "º idade: ";
        cin >> idades[i];
        cout << "Se deseja parar de inserir idades digite 'fim'\n";
        cin >> final;

        if(final == "fim"){
            break;
        }
        cont++;
    }
    
    imprimir (idades, cont);
    


    return 0;
}

void imprimir(int idade[], int totalP){
    int maiorq50 = 0, menorq21 = 0;

    for(int i = 0; i < totalP; i++){
        if(idade[i] < 21){
            menorq21++;
        }
        else if(idade[i] > 50){
            maiorq50++;
        }
    }
    cout << "O total de pessoas com menos de 21 anos é: " << menorq21 << endl;
    cout << "O total de pessoas com mais de 50 anos é: " << maiorq50;


}
