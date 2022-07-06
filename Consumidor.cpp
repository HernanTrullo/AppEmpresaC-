#include "Consumidor.h"

Consumidor::Consumidor()
{
	
}
void Consumidor::setFechaIngreso(string fechaIngreso){
	Consumidor::fechaIngreso = fechaIngreso;
}
void Consumidor::mostrarConsumidor(){
	cout << "+++++     Datos Usuario     +++++\n";
	cout << "Nombre: " << Consumidor::nombre << "\n";
	cout << "Cedula: " << Consumidor::cedula << "\n";
	cout << "Fecha Nacimiento: " << Consumidor::fechaNacimiento << "\n";
	cout << "No Cuenta Bancaria: " << Consumidor::getNoCuentabancaria() << "\n";
	cout << "Fecha Ingreso: " << Consumidor::fechaIngreso << "\n";	
	cout << "+++++                       +++++\n";
}
