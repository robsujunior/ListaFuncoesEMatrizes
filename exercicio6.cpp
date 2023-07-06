#include <iostream>
using namespace std;

int main()
{
    int vet [8] = {1,2,3,4,5,6,7,8};
    int num, verificador = 0;
    cout << "Digite um número para verificar se ele está presente no vetor: ";
    cin >> num;

    for(int i = 0; i < 8; i++){
        if(num == vet[i]){
            verificador = i+1;
        }    
    }
    if (verificador > 0){
        cout << "O número digitado está presente no vetor na " << verificador << "º posição";
    }
    else{
        cout << "O número digitado não está presente no vetor";
    }
    return 0;
}
