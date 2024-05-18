#include<iostream>
using namespace std;

int main(){
    int r;

    
    cout << "Digite um numero de 0 a 6: ";
    cin >> r;

    if (r<0 || r>6){
        cout << "Digite um numero valido";
    }
    else if (r==0){
        cout << "Domingo";
    }
    else if (r==1){
        cout << "Segunda-feira";
    }
    else if (r==2){
        cout << "Terca-feira";
    }
    else if (r==3){
        cout << "Quarta-feira";
    }
    else if (r==4){
        cout << "Quinta-feira";
    }
    else if (r==5){
        cout << "Sexta-feira";
    }
    else if (r==6){
        cout << "Sabado";
    }

    return 0;
}