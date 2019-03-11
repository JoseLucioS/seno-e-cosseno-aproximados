#include <iostream>
#include <cmath>
#include "funcoes.h"

using namespace std;

int main(int argc, char *argv[])
{
	double rad;

	cout << "insira o valor em radianos: ";
	cin >> rad;

	//usando as funções aproximadas
	cout << "seno aproximado de " << rad << " é: " << seno(rad) << endl;
	cout << "cosseno aproximado de " << rad << " é: " << cosseno(rad) << endl;
	
	cout << endl;

	//usando as funções de <cmath>
	cout << "seno de " << rad << " é: " << sin(rad) << endl;
	cout << "cosseno de " << rad << " é: " << cos(rad) << endl;
	return 0;
}
