#include <cmath>
#include <cstdio>
#include <iostream>
#include "matriz.h"
using namespace std;

int main()
{
    Matriz ma(5,5);
    ma.llenar();
    ma.escalar(4);
    ma.trasposicion();
    ma.mostrar();

    Matriz ma2(200,200);
    ma.mostrar();
    return 0;
}
