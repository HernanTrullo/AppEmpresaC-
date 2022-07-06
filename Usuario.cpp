#include "Usuario.h"
#include "SmartMetter.h"
#include <iostream>

using namespace std;
Usuario::Usuario(){
	Usuario::noSmartGrid = -1;
}

void Usuario::setNoCuentaBancaria(int noCuentaBancaria){
	Usuario::noCuentaBancaria = noCuentaBancaria;
}
void Usuario::crearSmartMetter(string descripcion, long identificador, string fechaInstalacion){
	Usuario::smartMetter = SmartMetter(descripcion, identificador, fechaInstalacion);
}
void Usuario::asignarSmartGrid(long identificador, string direccion){
	Usuario::smartGrid[Usuario::noSmartGrid] = SmartGrid(identificador, direccion);
}
void Usuario::setNoSmartGrid(int noSmartGrid){
	Usuario::noSmartGrid = noSmartGrid;
}
