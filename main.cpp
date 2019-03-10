#include <iostream>
#include <cmath>

using namespace std;

int fat(int num)
{
	int fatorial = 1;
	for(int i = 1; i <= num; i++)
	{
		fatorial = fatorial*i;
	}	
	return fatorial;
}

double seno(double x)
{
	double total;

	total = x - (pow(x, 3)/fat(3)) + (pow(x, 5)/fat(5));
	return total;
}

double cosseno(double x)
{
	double total;

	total = 1 - (pow(x, 2)/fat(2)) + (pow(x, 4)/fat(4));
	return total;
}

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
