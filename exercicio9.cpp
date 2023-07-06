#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string alunos[15];
    float notas[2][15];
    float media[15];
    float mediageral;

    for (int i = 0; i < 15; i++){
            cout <<"Digite o nome do(a) " << i+1 << "º aluno: ";
            cin >> alunos[i];
        }

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 15; j++){
            cout << "Digite a nota de " << alunos[j] << " na prova " << i+1 << ": ";
            cin >> notas[i][j];
            
        }
    }
    for(int i = 0; i < 15; i++){
        media[i] = (notas[0][i] + notas[1][i])/2;
    }
    
    cout << setw(10) << "Aluno" << setw(20) << "Nota Prova 1" << setw(20) << "Nota Prova 2" << setw(17) << "Média" << endl;  
    for(int i = 0; i < 15; i++){
        cout << setw(10) << alunos[i] << setw(15) << notas[0][i] << setw(20) << notas[1][i] << setw(20) << media[i] << endl;
        mediageral += media[i];
    } 
    mediageral = mediageral/15;
    cout << "Media geral da turma: " << mediageral;      
    return 0;
}
