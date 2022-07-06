#include "SmartGrid.h"
#include <iostream>

using namespace std;

using namespace std;
SmartGrid::SmartGrid(){
}
SmartGrid::SmartGrid(long identidicador, string direccion){
	SmartGrid::identificador = identidicador;
	SmartGrid::direccion = direccion;
}
void SmartGrid::setDireccion(string direccion){
	SmartGrid::direccion = direccion;
}
void SmartGrid::setIdentificador(long identificador) {
	SmartGrid::identificador = identificador;
}
