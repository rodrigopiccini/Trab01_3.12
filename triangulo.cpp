//
//
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

    }else if((a<b+c&&a>abs(b-c))){

        cout << "é um triangulo!" << endl;

    }else{
        cout << "nao é um triangulo!" << endl;
    
    }

   
    return 0;
}
