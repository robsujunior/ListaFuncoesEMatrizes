#include <iostream>
using namespace std;

int main()
{
    int idade[15], opiniao[15];
    float mediaidade = 0, percent3 = 0, percent2 = 0, percent1 = 0;

    for(int i = 0; i < 15; i++){
        cout << "Digite sua idade: ";
        cin >> idade[i];
        cout << "Qual sua opinião sobre o filme?\nRegular – 1\nBom – 2\nExcelente – 3" << endl;
        cin >> opiniao[i];

        mediaidade += idade[i];
        switch (opiniao[i]){
            case 1:
            percent1++;
            break;

            case 2: 
            percent2++;
            break;

            case 3:
            percent3++;
            break;

        }

    }
    mediaidade = mediaidade/15;
    percent1 = 100*(percent1/15);
    percent2 = 100*(percent2/15);
    percent3 = 100*(percent3/15);

    cout << "Média das idades dos entrevistados: " << mediaidade << endl;
    cout << "Porcentagem de pessoas que responderam a opção 1 (Regular): " << percent1 << "%\n";
    cout << "Porcentagem de pessoas que responderam a opção 2 (Bom): " << percent2 << "%\n";
    cout << "Porcentagem de pessoas que responderam a opção 3 (Excelente): " << percent3 << "%";
}
