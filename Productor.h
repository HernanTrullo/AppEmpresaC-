#ifndef PRODUCTOR_H
#define PRODUCTOR_H

#include "Usuario.h"

class Productor : public Usuario
{
	public:
		Productor();
		// Funciones adicionales
		void mostrarProductor();
		void mostrarProducto1();
		// Setters 
		void setNumeroLicencia(int numeroLicencia);
		
		// Getters
		int getNumeroLicencia(){
			return numeroLicencia;
		}
	private:
		int numeroLicencia;
};

#endif
