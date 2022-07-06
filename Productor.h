#ifndef PRODUCTOR_H
#define PRODUCTOR_H

#include "Usuario.h"

class Productor : public Usuario
{
	public:
		Productor();
		
		// Setters 
		void setNumeroLicencia(int numeroLicencia);
		void setFechaIngreso(int fechaIngreso);
		
		// Getters
		int getNumeroLicencia(){
			return numeroLicencia;
		}
		string getFechaIngreso(){
			return fechaIngreso;
		}
	private:
		int numeroLicencia;
		string fechaIngreso;
};

#endif
