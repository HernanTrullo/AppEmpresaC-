#ifndef CONSUMIDOR_H
#define CONSUMIDOR_H

#include "Usuario.h"

class Consumidor : public Usuario
{
	public:
		Consumidor();
		// setters
		void setFechaIngreso(string fechaIngreso);
		
		// getters
		string getFechaIngreso(){
			return fechaIngreso;
		}
	private:
		string fechaIngreso;
};

#endif
