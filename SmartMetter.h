#ifndef SMARTMETTER_H
#define SMARTMETTER_H
#include <iostream>
#include "Energia.h"

using namespace std;
class SmartMetter
{
	public:
		SmartMetter();
		SmartMetter(string descripcion, long identificador, string fechaInstalacion);
		// Metodos publicos adicionales
		void producirEnergia(string tipo, float precio);
		
		// setters
		void setIdentificador(long identificador);
		void setDescripcion (string descripcion);
		void setFechaInstalacion(string fechaInstalacion);
		
		// getters
		long getIdentificador(){
			return identificador;
		}
		string getDescripcion(){
			return descripcion;
		}
		string getFechaInstalacion(){
			return fechaInstalacion;
		}
		Energia getEnergia(){
			return energia;
		}
	private:
		long identificador;
		string descripcion;
		string fechaInstalacion;
		Energia energia;
};

#endif
