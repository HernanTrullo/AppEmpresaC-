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
		void mostrarDatosUsuario();
		void mostrarSmartGrid(int pos);
		void mostrarSmartMetter();
		// Setters
		void setNoCuentaBancaria(int noCuentaBancaria);
		void setNoSmartGrid(int noSmartGrid);
		void setHaySmartMetter(bool tieneSmartMeter);
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
		bool getTieneSmartMetter(){
			return tieneSmartMeter;
		}
	private:
		int noCuentaBancaria;
		SmartMetter smartMetter;
		SmartGrid smartGrid [100];
		int noSmartGrid;
		bool tieneSmartMeter;
};

#endif
