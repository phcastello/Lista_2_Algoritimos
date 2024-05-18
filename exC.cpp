#include<iostream>
using namespace std;

int main(){
    int n_mesma_casa, idade_velha, q_quarto, tempo;
    char mesma_casa, d_quarto;

    cout << "Mora a quanto tempo na mesma casa? ";
    cin >> tempo;

    cout << "Mora com outras pessoas na mesma casa? (s/n): ";
    cin >> mesma_casa;

    if (mesma_casa == 's') {
        cout << "Quantas pessoas moram junto?: ";
        cin >> n_mesma_casa;

        cout << "Qual a idade da mais velha? ";
        cin >> idade_velha;

        cout << "Divide seu quarto com outras pessoas? (s/n): ";
        cin >> d_quarto;
        
        if (d_quarto=='s'){
            cout << "Com quantas? ";
            cin >> q_quarto;

            cout << "Mora a " << tempo << " anos na mesma casa" << endl;
            cout << "Moram " << n_mesma_casa << " pessoas na mesma casa" << endl;
            cout << "A pessoa mais velha tem " << idade_velha << " anos" << endl;
            cout << "Divide o quarto com " << q_quarto << " pessoas" << endl;
        }
        else{
            cout << "Mora a " << tempo << " anos na mesma casa" << endl;
            cout << "Moram " << n_mesma_casa << " pessoas na mesma casa" << endl;
            cout << "A pessoa mais velha tem " << idade_velha << " anos" << endl;
        }
    }
    else{
        cout << "Mora a " << tempo << " anos na mesma casa" << endl;
    }
    


   return 0;
}