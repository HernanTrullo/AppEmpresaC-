#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"
#include "SmartMetter.h"
#include "SmartGrid.h"

#include <iostream>
#include <vector>

using namespace std;
using std::vector;

class Usuario : public Persona
{
	public:
		Usuario();
		// Metodos adicionales
		void crearSmartMetter(string descripcion, long identificador, string fechaInstalacion);
		void asignarSmartGrid(long identificador, string direccion, int pos);
		
		// Setters
		void setNoCuentaBancaria(int noCuentaBancaria);
		
		// Getters
		int getNoCuentabancaria(){
			return noCuentaBancaria;
		}
		SmartMetter getSmartMetter(){
			return smartMetter;
		}
		vector <SmartGrid> getSmartGrid(){
			return smartGrid;
		}
		
	private:
		int noCuentaBancaria;
		SmartMetter smartMetter;
		vector <SmartGrid> smartGrid;
};

#endif
