#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Persona.h"
#include "SmartGrid.h"

class Administrador : public Persona
{
	public:
		Administrador();
		// Metodos adicionales
		void asignarSmartGrid(long identificador, string direccion);
		// setters
		void setTelefono(long telefono);
		void setDireccion (string direccion);
		// getters
		long getTelefono(){
			return telefono;
		}
		string getDireccion(){
			return direccion;
		}
		SmartGrid getSmartGrid(){
			return smartGrid;
		}
	private:
		long telefono;
		string direccion;
		SmartGrid smartGrid;
};

#endif
