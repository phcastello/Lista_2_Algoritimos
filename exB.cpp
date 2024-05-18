#include<iostream>
#include<string>
using namespace std;

int main(){
    char f,t,dc,ov,p,i;

    cout << "febril? (s/n): ";
    cin >> f;
    cout << "Tosse? (s/n): ";
    cin >> t;
    cout << "Dor no corpo? (s/n): ";
    cin >> dc;
    cout << "Olhos vermelhos? (s/n): ";
    cin >> ov;
    cout << "Palido(a)? (s/n): ";
    cin >> p;
    cout << "Inflamacao? (s/n): ";
    cin >> i;

    if (f=='s' && dc=='s'){
        cout << "Diagnostico 1";
    }
    else if ((dc=='s') || (ov=='s' && p=='s')){
        cout << "Diagnostico 2";
    }
    else if (t=='s' && i=='s'){
        cout << "Diagnostico 3";
    }
    else {
        cout << "Diagnostico 4";
    }
    
    return 0;
}
