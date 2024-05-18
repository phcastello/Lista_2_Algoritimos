#include<iostream>
using namespace std;

int main(){
    float a,b,c;

    cout << "Digite os lados de um triangulo: ";
    cin >> a >> b >> c;

    if ((a > b + c) || (b > a + c) || (c > a + b)){
        cout << "Nao e um triangulo possivel";
    }
    else if (a==b && b==c) {
        cout << "Equilatero";
    }
    else if ((a==b)||(a==c)||(b==c)){
        cout << "Isoceles";
    }
    else if ((a!=b)&&(a!=c)&&(b!=c)){
        cout << "Escaleno";
    }
    
    
    return 0;
}