#include "Administrador.h"

Administrador::Administrador()
{
}
void Administrador::setTelefono(long telefono){
	Administrador::telefono = telefono; 
}
void Administrador::setDireccion(string direccion){
	Administrador::direccion = direccion;
}
void Administrador:: asignarSmartGrid(long identificador, string direccion){
	Administrador::smartGrid.setIdentificador(identificador);
	Administrador::smartGrid.setDireccion(direccion);
}
