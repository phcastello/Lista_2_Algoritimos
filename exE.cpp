#include<iostream>
using namespace std;

int main(){
    float salario, alimentar, pcent_al, transporte, pcent_tr, educacao, pcent_edu, maior, menor, meio;
    

    cout << "Informe o Salario: ";
    cin >> salario;
    cout << "Informe o gasato em alimentacao: ";
    cin >> alimentar;
    cout << "Informe o gasto em transporte: ";
    cin >> transporte;
    cout << "Informe o gasto em educacao: ";
    cin >> educacao;


    pcent_al = (alimentar*100)/salario;
    pcent_tr = (transporte*100)/salario;
    pcent_edu = (educacao*100)/salario;
    if ((alimentar+educacao+transporte) > salario) {
        cout << "Erro, gastos maiores que salario!";
        exit(1);
    }
    maior = max(max(pcent_al,pcent_edu),pcent_tr);
    menor = min(min(pcent_al,pcent_edu),pcent_tr);

    if (pcent_al != maior && pcent_al != menor){
        meio = pcent_al;
    }
    else if (pcent_edu != maior && pcent_edu != menor){
        meio = pcent_edu;
    }
    else{
        meio = pcent_tr;
    }
    cout << "----------------------" << endl;
    cout << maior << endl;
    cout << meio << endl;
    cout << menor << endl;
    cout << "----------------------" << endl;
    cout << menor << endl;
    cout << meio << endl;
    cout << maior << endl;
    cout << "----------------------" << endl;

    
    return 0;
}

