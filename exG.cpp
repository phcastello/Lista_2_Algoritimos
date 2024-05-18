#include<iostream>
#include<string>
using namespace std;

int main(){
    float pagar, frete, quant=101;
    const float produto=5.00;
    string nome, cidade, bairro, rua, CEP, CNPJ, numero_casa;
    char r;

    
    while(quant>100){
    cout << "Digite a quantidade de produtos(max 100): ";
    cin >> quant;
    }

    cout << "1=norte" << endl;
    cout << "2=nordeste" << endl;
    cout << "3=centro-oeste" << endl;
    cout << "4=sudeste" << endl;
    cout << "5=sul" << endl;
    cout << "Digite a sua regiao: " << endl;
    cin >> r;
    cout << "Digite o Nome da empresa, Cidade, Bairro, rua, CEP, CNPJ e o Numero da casa:" << endl;
    cin >> nome >> cidade >> bairro >> rua >> CEP >> CNPJ >> numero_casa;

    pagar = produto*quant;

    if (r=='1'){
        frete = 0.1*pagar;
    }
    else if (r=='2'){
        frete = 0.08*pagar;
    }
    else if (r=='3'){
        frete = 0.12*pagar;
    }
    else if (r=='4'){
        frete = 0.15*pagar;
    }
    else if (r=='5'){
        frete = 0.11*pagar;
    }
    
    
    cout << endl << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
    cout << "Itens: " << quant << endl;
    cout << "Subtotal: " << pagar << endl;
    cout << "Total: " << frete+pagar << endl;
    cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
    cout << "Regiao de entrega:" << endl;
    cout << "CEP: " << CEP << endl << "Cidade: " << cidade << endl;
    cout << "Bairro: " << bairro << endl << "Rua: " << rua << endl;
    cout << "Numero: " << numero_casa << endl;
    cout << "/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/" << endl;
    cout << "Nome: " << nome << endl << "CNPJ: " << CNPJ << endl;
    

    return 0;
}