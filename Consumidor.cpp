#include "Consumidor.h"

Consumidor::Consumidor()
{
	
}
void Consumidor::setFechaIngreso(string fechaIngreso){
	Consumidor::fechaIngreso = fechaIngreso;
}
void Consumidor::mostrarConsumidor(){
	Consumidor::mostrarDatosUsuario();
	cout << "Fecha Ingreso: " << Consumidor::fechaIngreso << "\n";	
	cout << "+++++++++++++++++++++++++++++++++\n";
	if (Consumidor::getNoSmartGrid() >= 0){
		for (int i=0; i<Consumidor::getNoSmartGrid()+1; i++){
			Consumidor::mostrarSmartGrid(i);
		}
	}
	else {
		cout << "Usuario sin Smart Grid...\n";
		cout << "+++++++++++++++                +++++++++++++++++++++\n";
	}
}
void Consumidor::mostrarConsumidor1(){
	Consumidor::mostrarDatosUsuario();
	cout << "Fecha Ingreso: " << Consumidor::fechaIngreso << "\n";	
	cout << "+++++++++++++++++++++++++++++++++\n";
	if (Consumidor::getTieneSmartMetter()){
		Consumidor::mostrarSmartMetter();
	}
}
