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
		void asignarSmartGrid(long identificador, string direccion);
		
		// Setters
		void setNoCuentaBancaria(int noCuentaBancaria);
		void setNoSmartGrid(int noSmartGrid);
		// Getters
		int getNoCuentabancaria(){
			return noCuentaBancaria;
		}
		SmartMetter getSmartMetter(){
			return smartMetter;
		}
		SmartGrid getSmartGrid(int pos){
			return smartGrid[pos];
		}
		int getNoSmartGrid(){
			return noSmartGrid;
		}
	private:
		int noCuentaBancaria;
		SmartMetter smartMetter;
		SmartGrid smartGrid [100];
		int noSmartGrid;
};

#endif
