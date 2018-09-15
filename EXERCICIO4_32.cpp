#include <iostream>
using namespace std;

//Escreva um programa que lê tres valores double e não zero, e determina e imprime se esses
//valores poderiam representar os lados de um triângulo.

    /*Para construir um triângulo, é necessário que a medida de qualquer um dos lados seja menor que a soma das medidas dos outros dois e maior que o valor absoluto da diferença entre as medidas.

Ou seja:

Em um triângulo com lados a, b, c, temos:

    |b - c| < a < b + c
    |a - c| < b < a + c
    |a - b| < c < a + b

Exemplo da condição de existência

Vamos testar a validade dessa declaração? Peguemos o triângulo "mais famoso de todos", o triângulo retângulo 3, 4, 5. Repare que o triângulo obedece o Teorema de Pitágoras: 3² + 4² = 9 + 16 = 25 = 5². Agora:

    5 - 4 = 1 < 3 < 4 + 5 = 9
    5 - 3 = 2 < 4 < 3 + 5 = 8
    4 - 3 = 1 < 5 < 3 + 4 = 7
*/


int main()
{
	double a,b,c; // variáveis valores do triangulo	
	
	
	cout << "Digite um valor para o primeiro lado do triângulo: " << endl;
	cin >> a;
	
	cout << "Digite um valor para o segundo lado do triângulo: " << endl;
	cin >> b;
	
	cout << "Digite um valor para o primeiro lado do triângulo: " << endl;
	cin >> c;
	
	
	
	if(b - c > a && a < b + c)

	{
	cout << "O valor digitado no primeiro lado não é valido." << endl;
	}
	
	if(a - c > b && b < b + c)


	{
	cout << "O valor digitado no segundo lado não é valido." << endl;
	}

	if(a - b > c && c < a + b)


	{
	cout << "O valor digitado no terceiro lado não é valido." << endl;
	}
	
	if(a||b||c==0)

	{
	cout << "ERRO! O VALOR DOS LADOS NAO PODE SER ZERO." << endl;
	}

	else
	
	{
	cout << "OS VALORES PODEM REPRESENTAR UM TRIANGULO." << endl;
	}

	return 0;

}
