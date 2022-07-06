#include "Energia.h"
#include <iostream>

using namespace std;
Energia::Energia(string tipo, float precio){
	Energia::tipo = tipo;
	Energia::precio = precio;
}
Energia::Energia(){
	
} 

void Energia::setPrecio(float precio) {
	Energia::precio = precio;
}
void Energia::setTipo(string tipo){
	Energia::tipo = tipo;
}
