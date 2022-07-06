#include "SmartMetter.h"
#include <iostream>
#include "Energia.h"

using namespace std;

SmartMetter::SmartMetter(){
}
SmartMetter::SmartMetter(string descripcion, long identificador, string fechaInstalacion){
	SmartMetter::descripcion = descripcion;
	SmartMetter::identificador = identificador;
	SmartMetter::fechaInstalacion = fechaInstalacion;
}

void SmartMetter::setDescripcion(string descripcion){
	SmartMetter::descripcion = descripcion;
}

void SmartMetter::setIdentificador(long identificador){
	SmartMetter::identificador = identificador;
} 
void SmartMetter::setFechaInstalacion(string fechaInstalacion){
	SmartMetter::fechaInstalacion;
}
void SmartMetter::producirEnergia(string tipo, float precio){
	SmartMetter::energia = Energia(tipo, precio);
} 
