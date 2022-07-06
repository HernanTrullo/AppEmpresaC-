#ifndef SMARTGRID_H
#define SMARTGRID_H
#include <iostream>



using namespace std;

class SmartGrid
{
	public:
		SmartGrid();
		SmartGrid(long identidicador, string direccion);
		// setters
		void setIdentificador(long identificador);
		void setDireccion(string direccion);
		
		// getters
		long getIdentificador(){
			return identificador;
		}
		string getDireccion(){
			return direccion;
		}
	private:
		long identificador;
		string direccion;
};

#endif
