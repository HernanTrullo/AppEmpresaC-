#include "Usuario.h"
#include "SmartMetter.h"
#include <iostream>

using namespace std;
Usuario::Usuario()
{
}

void Usuario::setNoCuentaBancaria(int noCuentaBancaria){
	Usuario::noCuentaBancaria = noCuentaBancaria;
}
void Usuario::crearSmartMetter(string descripcion, long identificador, string fechaInstalacion){
	Usuario::smartMetter = SmartMetter(descripcion, identificador, fechaInstalacion);
}
void Usuario::asignarSmartGrid(long identificador, string direccion, int pos){
	Usuario::smartGrid[pos] = SmartGrid(identificador, direccion);
}
