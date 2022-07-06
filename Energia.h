#ifndef ENERGIA_H
#define ENERGIA_H
#include <iostream>

using namespace std;
class Energia
{
	public:
		Energia();
		Energia(string tipo, float precio);
		
		// setters
		void setTipo(string tipo);
		void setPrecio(float precio);
		
		// getters
		string getTipo(){
			return tipo;
		}
		float getPrecio(){
			return precio;
		}
	private:
		string tipo;
		float precio;
};

#endif
