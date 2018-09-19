//Rodrigo Piccini
//Bianca Santos
#include <iostream>
using namespace std;

class Account {


	private:
		int saldo;

	public:

		Account (int isaldo ){   //o construtor deve assegurar q o saldo inicial seja >= 0

			if (isaldo >= 0){

				saldo = isaldo;				
			}else {//colocar 0
			
		saldo = 0;
                cout << "saldo incial invalido" << endl;
            }
		}

		int getBalance(){  // getBalance deve retornar o saldo atual.

			return saldo;
		}

		void credit (int quantia){  //credit deve adicionar uma quantia a o saldo atual.

			saldo = saldo + quantia;
		}
	
		void debit (int  quantia){   //debit deve retirar dinheiro de Account e assegurar que a 
			if(quantia <= saldo){      //quantia de debito nao exceda o saldo de Account.
				saldo = saldo - quantia;

			}else{   //se exceder o saldo deve permanecer inalterado e a funcao 
                                         // deve imprimir uma mensagem.
                   
				cout << "Debit amount exceeded account balance." << endl;

			}
	
		}



};

int main (){

    int quantia;

	Account account1(5000);
	Account account2(300);

    cout << "Informe uma quantia: ";
    cin >> quantia;
    
    account1.debit(quantia);
    account2.debit(quantia);

	account1.credit(quantia);
	account2.credit(quantia);

    cout << "o saldo  de account1 = " << account1.getBalance() << endl;
    cout << "o saldo  de account2 = " << account2.getBalance() << endl;


	return 0;
}
