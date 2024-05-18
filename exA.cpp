#include<iostream>
using namespace std;

int main(){
    int ano_casamento, n_filhos, idade_novo, p_sal;
    char casamento;

    cout << "digite sua pretencao salarial: ";
    cin >> p_sal;

    cout << "casado? (s/n)";
    cin >> casamento;

    if (casamento == 's') {
        cout << "digite o ano do casamento: ";
        cin >> ano_casamento;

        if (2024 - ano_casamento > 2) {
            cout << "informe o numero de filhos: ";
            cin >> n_filhos;

            if (n_filhos != 0) {
                cout << "informe a idade do mais novo: ";
                cin >> idade_novo;

                cout << "Casado, desde " << ano_casamento << endl;
                cout << "Filhos: " << n_filhos << endl;
                cout << "Filho mais novo tem " << idade_novo << " anos" << endl;
            }

            else{
                cout << "Casado, desde " << ano_casamento << endl;
                cout << "sem filhos" << endl;
            }
        }

        else{
            cout << "Casado, desde " << ano_casamento << endl;
        }
    }
    
    else{
        cout << "Nao casado" << endl;   
    }
    cout << "Pretencao salarial: " << p_sal; 
    return 0;
}