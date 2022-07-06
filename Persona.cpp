#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(){
	
}
void Persona::setFechaNacimiento(string fechaNacimiento){
	Persona::fechaNacimiento = fechaNacimiento;
}
void Persona::setCedula(int cedula){
	Persona::cedula = cedula;
}	
void Persona::setNombre(string nombre){
	Persona::nombre = nombre;
}	
