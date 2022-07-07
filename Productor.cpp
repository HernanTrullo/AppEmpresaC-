#include "Productor.h"

Productor::Productor()
{
}
void Productor::setNumeroLicencia(int numeroLicencia){
	Productor::numeroLicencia = numeroLicencia;
}
void Productor::mostrarProductor(){
	Productor::mostrarDatosUsuario();
	cout << "Numero de licencia: " << Productor::numeroLicencia << "\n";
	cout << "+++++++++++++++++++++++++++++++++\n";
	if (Productor::getNoSmartGrid() >= 0){
		for (int i=0; i<Productor::getNoSmartGrid()+1; i++){
			Productor::mostrarSmartGrid(i);
		}
	}
	else {
		cout << "Usuario sin Smart Grid...\n";
		cout << "++++++++++++++++++++++++++++++++\n";
	}
}
void Productor::mostrarProducto1(){
	Productor::mostrarDatosUsuario();
	cout << "Numero de licencia: " << Productor::numeroLicencia << "\n";
	cout << "+++++++++++++++++++++++++++++++++\n";
	if (Productor::getTieneSmartMetter()){
		Productor::mostrarSmartMetter();
	}
}
