//Bianca Santos
//Rodrigo Piccini
#include <iostream>
using namespace std;

int main (){

int n,q,i;
double p;
char ch;


for(i=0; ;i++) {

        do {

        cout << "Digite o numero do produto: " << endl;
        cin >> n;
        cout << "Digite a quantidade do produto: " << endl;
        cin >> q;
        
            switch (n){

                case 1:
                    p = q*2.98;
                    break;
                case 2:
                    p = q*4.50;
                    break;
                case 3:
                    p = q*9.98;
                    break;
                case 4:
                    p = q*4.49;
                    break;
                case 5:
                    p = q*6.87;
                    break;

                default: 

                    cout << "Valor invalido" << endl;
                }
            
            cout << "preco = " << p << endl;
            cout << "Deseja calcular de novo? (s/n)" << ch << endl;
            cin >>   ch; 

          }while(ch=='s'||ch=='S');

}




    return 0;
}
