#include<iostream>
using namespace std;
//Clase persona
class Persona{
	//Atributos de la clase
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
	            int telefono;
	            
	//Constructor
	protected : Persona (){
	}
	Persona (string nom, string ape, string dir, string fecha_nac, int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fecha_nac;
		telefono = tel;
	}
	//Metodo CRUD = Create, Read, Update, Delete
	void Crear();
	void Leer();
	void Actualizar();
	void Borrar();
};