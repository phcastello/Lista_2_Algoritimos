#include<iostream>
using namespace std;

int main(){
    int r;
    

    cin >> r;

    switch (r){
    case 0:
        cout << "Domingo";
        break;
    case 1:
        cout << "Segunda-feira";
        break;
    case 2:
        cout << "Terca-feira";
        break;
    case 3:
        cout << "Quarta-feira";
        break;
    case 4:
        cout << "Quinta-feira";
        break;
    case 5:
        cout << "Sexta-feira";
        break;
    case 6:
        cout << "Sabado";
        break;
    
    default:
        cout << "Digite um numero Válido";
        break;
    }
}