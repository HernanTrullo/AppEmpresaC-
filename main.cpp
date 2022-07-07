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
	int opcion2 = 0;
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
	
	// SmartGrid
	long identificador = 0;
	
	// Smartmetters
	string descripcion = "";
	string fechaInstalacion = "";
	
	// modificacadores de acceso a las acciones de ingreso de datos
	int numeroProductores = 0;
	int numeroConsumidores = 0; 
	int numeroUsuarios = 0;
	bool hayUnAdmin = false;
	bool hayAdminSmartGrid = false;
	
	
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
				hayUnAdmin = true;
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
				
				// Mostrar valores ingresador
				cout << "Datos de administrador ingresados...\n"; 
			break;	
			case 2:
				numeroProductores = numeroProductores +1;
				if (numeroProductores <= 2){
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
					
					productores[numeroProductores-1].setNombre(nombre);
					productores[numeroProductores-1].setCedula(cedula);
					productores[numeroProductores-1].setFechaNacimiento(fechaNacimiento);
					productores[numeroProductores-1].setNoCuentaBancaria(numeroCtaBancaria);
					productores[numeroProductores-1].setNumeroLicencia(numeroLicencia);
					
					cout << "Productor Asignado...\n";
				}
				else {
					cout << "Estimado, ya ha ingresado dos usuarios productores ...\n";
				}
			break;
			case 3:
				numeroConsumidores = numeroConsumidores +1;
				if (numeroConsumidores <=2){
					// Se leen cada uno de valore de la instancia del objeto de tipo productor
					cout << "+++++++    Ingresar Consumidor   +++++++ \n";
					cout << "Nombre: ";
					cin >> nombre;
					cout << "Cedula: ";
					cin >> cedula;
					cout << "Fecha Nacimiento: ";
					cin >> fechaNacimiento;
					cout << "Numero cuanta bancaria: ";
					cin >> numeroCtaBancaria;
					cout << "Fecha Ingreso: ";
					cin >> fechaIngreso;
					
					consumidores[numeroConsumidores-1].setNombre(nombre);
					consumidores[numeroConsumidores-1].setCedula(cedula);
					consumidores[numeroConsumidores-1].setFechaNacimiento(fechaNacimiento);
					consumidores[numeroConsumidores-1].setNoCuentaBancaria(numeroCtaBancaria);
					consumidores[numeroConsumidores-1].setFechaIngreso(fechaIngreso);
					
					cout << "Consumidor Asignado...\n";
				}
				else {
					cout << "Estimado, ya ha ingresado dos usuarios productores ...\n";
				}
			break;
			case 4:
				if (hayUnAdmin ){
					if (!hayAdminSmartGrid){
						hayAdminSmartGrid = true;
						// Se leen cada uno de valore de la instancia del objeto de tipo productor
						cout << "+++++++    Ingresar Smart Grid Admin Primero  +++++++ \n";
						cout << "Identificador: ";
						cin >> identificador;
						
						admin.asignarSmartGrid(identificador, admin.getDireccion());
						cout << "SmartGrid de Administrador Asiganado...\n";
					}
					else{
						// Se asignan smartGrid a los usuarios pues ya hay un admin con su smartGrid
						// Mostrar Usuarios registrados
						numeroUsuarios = numeroConsumidores + numeroProductores;
						if (numeroUsuarios > 0){
							if (numeroProductores > 0){
								for(int i=0; i<numeroProductores; i++){
									cout << "++++++++++++    Usuario Productores      ++++++++++++ \n";
									cout << "++++++++++++    Usuario: " << (i+1) << "     ++++++++++++  \n";
									productores[i].mostrarProductor();	
									cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";	
								}
								// Se elige la opcion a la cual se va asignar el smartGrig
								cout << "Eliga una usuario para ingresar una Smart Grid: ";
								cin >> opcion2;
								
								// Ingreso de datos
								cout << "+++++++    Ingresar Smart Grid Usuarios +++++++ \n";
								cout << "Identificador: ";
								cin >> identificador;
								cout << "Direccion: ";
								cin >> direccion;
								
								// Se agrega un smartGrid
								int smartGridP = 0;
								smartGridP = productores[opcion2-1].getNoSmartGrid() + 1; 
								productores[opcion2-1].setNoSmartGrid(smartGridP);
								
								productores[opcion2-1].asignarSmartGrid(identificador, direccion);
								cout << "SmartGrid " << (smartGridP + 1) << " de Usuario " << opcion2 << " asiganado...\n";
							}
							if (numeroConsumidores > 0){
								for(int i=0; i<numeroConsumidores; i++){
									cout << "++++++++++++    Usuario Consumidores     ++++++++++++++++ \n";
									cout << "++++++++++++    Usuario: " << (i+1) << "     ++++++++++++  \n";
									consumidores[i].mostrarConsumidor();
									cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";		
								}
								// Se elige la opcion a la cual se va asignar el smartGrig
								cout << "Eliga una usuario para ingresar una Smart Grid: ";
								cin >> opcion2;
								
								// Ingreso de datos
								cout << "+++++++    Ingresar Smart Grid Usuarios +++++++ \n";
								cout << "Identificador: ";
								cin >> identificador;
								cout << "Direccion: ";
								cin >> direccion;
								
								// Se agrega un smartGrid
								int smartGridP = 0;
								smartGridP = productores[opcion2-1].getNoSmartGrid() + 1; 
								consumidores[opcion2-1].setNoSmartGrid(smartGridP);
								
								consumidores[opcion2-1].asignarSmartGrid(identificador, direccion);
								cout << "SmartGrid " << (smartGridP + 1) << " de Usuario " << opcion2 << " asiganado...\n";
							}
						}
						else{
							cout << "Estimado administrador, aun no hay usuarios registrados...\n";
						}
						
					}
				}
				else{
					cout << "Aun no hay un administrador registrado ...\n ";
				}
			break;
			case 5:
				numeroUsuarios = numeroConsumidores + numeroProductores;
				
				if (numeroUsuarios > 0){
					if (numeroProductores > 0){
						bool hayUsuarioPorsmartMetter = false;
						for(int i=0; i<numeroProductores; i++){
							if (productores[i].getTieneSmartMetter() == false){
								cout << "++++++++++++    Usuario Productores      ++++++++++++ \n";
								cout << "++++++++++++    Usuario: " << (i+1) << "     ++++++++++++  \n";
								/// mostrar usuarios con smartMetter
								productores[i].mostrarProducto1();
								productores[i].setHaySmartMetter(true);
								hayUsuarioPorsmartMetter = true;	
							}
							cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";		
						}
						if (hayUsuarioPorsmartMetter){
							// Se elige la opcion a la cual se va asignar el smartMetter
							cout << "Eliga una usuario para ingresar una Smart Metter: ";
							cin >> opcion2;
							
							// Ingreso de datos
							cout << "+++++++    Ingresar Smart Grid Usuarios +++++++ \n";
							cout << "Identificador: ";
							cin >> identificador;
							cout << "Descripción: ";
							cin >> descripcion;
							cout << "Fecha Instalacion: ";
							cin >> fechaInstalacion;
							
							productores[opcion2-1].crearSmartMetter(descripcion, identificador, fechaInstalacion);
							cout << "SmartMetter " << " de Usuario " << opcion2 << " asiganado...\n";
						}
						else{
							cout << "No hay usuarios disponibles para asignar Smart Metter... \n";
						}
					}
					if (numeroConsumidores > 0){
						bool hayUsuarioPorsmartMetter = false;
						for(int i=0; i<numeroConsumidores; i++){
							
							if (consumidores[i].getTieneSmartMetter()== false){
								/// mostrar usuarios con smartMetter
								cout << "++++++++++++    Usuario Consumidores     ++++++++++++++++ \n";
								cout << "++++++++++++    Usuario: " << (i+1) << "     ++++++++++++  \n";
								consumidores[i].mostrarConsumidor1();
								consumidores[i].setHaySmartMetter(true);
								hayUsuarioPorsmartMetter = true;
							}	
							cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";			
						}
						if (hayUsuarioPorsmartMetter){
							// Se elige la opcion a la cual se va asignar el smartMetters
							cout << "Eliga una usuario para ingresar una Smart Metters: ";
							cin >> opcion2;
							
							// Ingreso de datos
							cout << "+++++++    Ingresar Smart Metter Usuarios +++++++ \n";
							cout << "Identificador: ";
							cin >> identificador;
							cout << "Descripción: ";
							cin >> descripcion;
							cout << "Fecha Instalacion: ";
							cin >> fechaInstalacion;
							
							consumidores[opcion2-1].crearSmartMetter(descripcion, identificador, fechaInstalacion);
							cout << "SmartMetter " << " de Usuario " << opcion2 << " asiganado...\n";
						}
					}
				}
				else{
					cout << "Estimado, debe ingresar un usuario por lo menos ...\n";
				}
			break;
			case 6:
				cout << "ADIOS !!! \n";
				
			break;
				
			default: 
				break;
				
		}
	system("PAUSE");
	}
	return 0;
} 













