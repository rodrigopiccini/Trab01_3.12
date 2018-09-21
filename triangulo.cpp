// Fazer 5.14
// Bianca Santos
// Rodrigo Piccini
#include <iostream>
using namespace std;

int main (){

    double a,b,c;

    cout << "Digite valores para os tres lados de um triangulo a, b e c: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a==0||b==0||c==0){
        
        cout << "Valor nao pode ser igual a zero." << endl;

    }else if (a<b+c&&a>abs(b-c) || (b<a+c&&b>abs(a-c) || (c<b+a&&c>abs(b-a)){

        cout << "é um triangulo!" << endl;

    }else{
        cout << "nao é um triangulo!" << endl;
    a<b+c&&a>abs(b-c))
    }

   
    return 0;
}
