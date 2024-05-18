#include<iostream>
using namespace std;

int main(){
    char sexo, gestacao;
    int idade, q_filhos, idade_velho;

    cout << "Informe o sexo (m/f): ";
    cin >> sexo;
    cout << "Informe sua idade: ";
    cin >> idade;
    if (sexo=='f' && idade > 10){
        cout << "Ja engravidou? (s/n): ";
        cin >> gestacao;
        if(gestacao == 's') {
            cout << "Digite quantos filhos tem: ";
            cin >> q_filhos;
            if (q_filhos){
                cout << "Digite a idade do mais velho: ";
                cin >> idade_velho;

                cout << "Sexo: feminino" << endl;
                cout << "Idade: " << idade << endl;    
                cout << "Numero de filhos: "<< q_filhos << endl;
                cout << "Idade do filho mais velho: " << idade_velho << endl;
            }
            else{
            cout << "Sexo: feminino" << endl;
            cout << "Idade: " << idade << endl;
            cout << "Ja engravidou" << endl;
            cout << "Numero de filhos: 0" << endl;
            }
        }
        else{
            cout << "Sexo: feminino" << endl;
            cout << "Idade: " << idade << endl;
            cout << "Nunca engravidou" << endl;
        }
    }
    else{
        cout << "Sexo: masculino" << endl;
        cout << "idade: " << idade << endl;    
    }

    return 0;
}
