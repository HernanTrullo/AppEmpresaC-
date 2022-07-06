#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
	public:
		Persona();
		void setCedula(int cedula);
		void setNombre(string nombre);
		void setFechaNacimiento(string fechaNacimiento);
		
		// Acceso a datos
		int getCedula(){
			return cedula;
		}
		string getNombre(){
			return nombre;
		}
		string getFechaNacimiento(){
			return fechaNacimiento;
		}
		
		
	protected:
		int cedula;
		string nombre;
		string fechaNacimiento;
			
};


#endif
