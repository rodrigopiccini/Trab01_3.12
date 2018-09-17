//BiancaSantos
//Crie uma classe chamada Account que um banco poderia utilizar para representar contas bancárias dos clientes. Sua classe deve incluir um membro de dados de tipo int para representar o saldo da conta. [Nota: Nos capítulos subseqüentes, utilizaremos números que contêm pontos de fração decimal (por exemplo, 2,75) — chamados valores de ponto flutuante — para representar quantias em dólar.] Sua classe deve fornecer um construtor que recebe um saldo inicial e o utiliza para inicializar o membro de dados. O construtor deve validar o saldo inicial para assegurar que ele seja maior que ou igual a 0. Se não, o saldo deve ser configurado como 0 e o constru- tor deve exibir uma mensagem de erro, indicando que o saldo inicial era inválido. A classe deve fornecer três funções-membro. A função- membro credit deve adicionar uma quantia ao saldo atual. A função-membro debit deve retirar o dinheiro de Account e assegurar que a quantia de débito não exceda o saldo de Account. Se exceder, o saldo deve permanecer inalterado e a função deve imprimir uma mensagem que indica “Debit amount exceeded account balance.” A função-membro getBalance deve retornar o saldo atual. Crie um programa que cria dois objetos Account e testa as funções-membro da classe Account.

#include <iostream>
using namespace std;

class Account {


	private:
		int saldo;

	public:

		Account (int isaldo ){   //o construtor deve assegurar q o saldo inicial seja >= 0

			if (isaldo >= 0){

				saldo = isaldo;				
			}else{
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

			}else if(quantia > saldo){   //se exceder o saldo deve permanecer inalterado e a funcao 
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

    cout << "o saldo  de account1 = " << account1.getBalance() << endl;
    cout << "o saldo  de account2 = " << account2.getBalance() << endl;


	return 0;
}

