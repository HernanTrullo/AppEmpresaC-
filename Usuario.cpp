#include "Usuario.h"
#include "SmartMetter.h"
#include <iostream>

using namespace std;
Usuario::Usuario(){
	Usuario::noSmartGrid = -1;
	tieneSmartMeter = false;
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
void Usuario::mostrarDatosUsuario(){
	cout << "+++++     Datos Usuario     +++++\n";
	cout << "Nombre: " << Usuario::nombre << "\n";
	cout << "Cedula: " << Usuario::cedula << "\n";
	cout << "Fecha Nacimiento: " << Usuario::fechaNacimiento << "\n";
	cout << "No Cuenta Bancaria: " << Usuario::noCuentaBancaria << "\n";	
}
void Usuario::mostrarSmartGrid(int pos){
	cout << "+++++++++        Smart Grid asignada      +++++++++++\n";
	cout << "Dirección: "<< smartGrid[pos].getDireccion() << "\n";
	cout << "Identificador: "<< smartGrid[pos].getIdentificador() << "\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}
void Usuario::mostrarSmartMetter(){
	cout << "+++++++++        Smart Metter Asignada     +++++++++++\n";
	cout << "Identificador: "<< smartMetter.getIdentificador() << "\n";
	cout << "Descripcion: "<< smartMetter.getDescripcion() << "\n";
	cout << "Fecha de Instalacion: "<< smartMetter.getFechaInstalacion() << "\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}
void Usuario::setHaySmartMetter(bool tieneSmartMeter){
	Usuario::tieneSmartMeter = tieneSmartMeter;
} 
