#include "Productor.h"

Productor::Productor()
{
}
void Productor::setNumeroLicencia(int numeroLicencia){
	Productor::numeroLicencia = numeroLicencia;
}
void Productor::mostrarProductor(){
	cout << "+++++     Datos Usuario     +++++\n";
	cout << "Nombre: " << Productor::nombre << "\n";
	cout << "Cedula: " << Productor::cedula << "\n";
	cout << "Fecha Nacimiento: " << Productor::fechaNacimiento << "\n";
	cout << "No Cuenta Bancaria: " << Productor::getNoCuentabancaria() << "\n";
	cout << "Numero de licencia: " << Productor::numeroLicencia << "\n";	
	cout << "+++++                       +++++\n";
}
