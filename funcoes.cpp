#include "funcoes.h"
#include <cmath>

//retorna o fatorial de um número
int fat(int num)
{
        int fatorial = 1;
        for(int i = 1; i <= num; i++)
        {
                fatorial = fatorial*i;
        }
        return fatorial;
}

//retorna o seno de um valor em radianos
double seno(double x)
{
        double total;

        total = x - (pow(x, 3)/fat(3)) + (pow(x, 5)/fat(5));
        return total;
}

//retorna o cosseno de um valor em radianos
double cosseno(double x)
{
        double total;

        total = 1 - (pow(x, 2)/fat(2)) + (pow(x, 4)/fat(4));
        return total;
}

