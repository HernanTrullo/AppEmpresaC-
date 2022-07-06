#include <iostream>
#include "Administrador.h"
#include "Consumidor.h"
#include "Productor.h"
#include "SmartGrid.h"
#include "SmartMetter.h"

using namespace std;
using std::vector;

int main() {
	// se crean los objetos de cada uno de los tipos
	Administrador admin;
	Consumidor consumidores [2];
	Productor productores [2];
	SmartGrid smartGrid;
	SmartMetter smartMetter;
	
	int opcion = 0;
	// Variables globales
	string nombre = "";
	string fechaNacimiento = "";
	string direccion = "";
	long telefono = 0;
	int cedula = 0;
	
	// Usuario
	int numeroCtaBancaria = 0; 
	
	// productor
	int numeroLicencia = 0;
	string fechaIngreso = "";
	
	int numProd = 0;
	int numeroConsumidores = 0; 
	
	while (opcion != 6){
		cout << "+++++++   Bienvenido   +++++++" << "\n";
		cout << "1. Ingresar Administrador" << "\n";
		cout << "2. Ingresar Productor" << "\n";
		cout << "3. Ingresar Consumidor" << "\n";
		cout << "4. Ingresar SmartGrid" << "\n";
		cout << "5. Ingresar SmartMetter" << "\n";
		cout << "6. Salir" << "\n";
		
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		
		switch(opcion){
			case 1:
				// Se leen cada uno de valore de la instancia del objeto de tipo administrador
				cout << "+++++++    Ingresar Administrador   +++++++ \n";
				cout << "Nombre: ";
				cin >> nombre;
				cout << "Cedula: ";
				cin >> cedula;
				cout << "Fecha Nacimiento: ";
				cin >> fechaNacimiento;
				cout << "Telefono: ";
				cin >> telefono;
				cout << "Direccion: ";
				cin >> direccion;
				
				// Se asignan los datos a la instancia del objeto de tipo adminisrador
				admin.setNombre(nombre);
				admin.setCedula(cedula);
				admin.setFechaNacimiento(fechaNacimiento);
				admin.setTelefono(telefono);
				admin.setDireccion(direccion);
				
				// Mostrar valores ingresados
				cout << "+++++     Datos de administrador ingresados     +++++\n";
				system("PAUSE");
			break;	
			case 2:
				numProd = numProd + 1;
				// Se leen cada uno de valore de la instancia del objeto de tipo productor
				cout << "+++++++    Ingresar Productor   +++++++ \n";
				cout << "Nombre: ";
				cin >> nombre;
				cout << "Cedula: ";
				cin >> cedula;
				cout << "Fecha Nacimiento: ";
				cin >> fechaNacimiento;
				cout << "Numero cuanta bancaria: ";
				cin >> numeroCtaBancaria;
				cout << "Numero Licencia: ";
				cin >> numeroLicencia;
				cout << "Fecha Ingreso: ";
				cin >> fechaIngreso;
				
				productores[numProd].setNombre(nombre);
				productores[numProd].setCedula(cedula);
				productores[numProd].setFechaNacimiento(fechaNacimiento);
				productores[numProd].setNoCuentaBancaria(numeroCtaBancaria);
				productores[numProd].setNumeroLicencia(numeroLicencia);
				//productores[numProd].setFechaIngreso(fechaIngreso);
				
				// Mostrar valores ingresados
				//cout << "de prueba "<< productores[numProd].getCedula();
				cout << "+++++     Datos de producto ingresados     +++++ \n";
				system("PAUSE");
			break;
			case 3:
				cout << "Opcion3 \n";
			break;
			case 4:
				cout << "Opcion5 \n";
			break;
			case 5:
				cout << "Opcion5 \n";
			break;
			case 6:
				cout << "ADIOS \n";
				
			break;
				
			default: ;
				
		}
	
	}
	return 0;
} 













