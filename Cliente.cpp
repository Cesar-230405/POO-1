#include<iostream>
#include "Persona.cpp"
using namespace std;

class Cliente : Persona{
      //Atributos
	  private: string nit;
	  
	  //Metodo
	 public: Cliente(){
	  }	
	  Cliente(string nom, string ape, string dir, string fecha_nac, int tel, string n) 
	  : Persona(nom, ape, dir, fecha_nac, tel){
	  	nit=n;
	  }
	  //Metodos
	  //Set(modificar)
	  void setNit(string n){nit=n;}
	  void setNombres(string nom){nombres=nom;}
	  void setApellidos(string ape){apellidos=ape;}
	  void setDireccion(string dir){direccion=dir;}
	  void setTelefono(int tel){telefono=tel;}
	  //get(mostrar)
	  string getNit(){return nit;}
	  string getNombres(){return nombres;}
	  string getApellido(){return apellidos;}
 	  string getDireccion(){return direccion;}
 	  int getTelefono(){return telefono;}

	  //Metodos
	  void leer(){
	  	cout<<"______________________"<<endl;
	  	
	  	cout<<"Datos del cliente: "<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<", "<<fecha_nacimiento<<endl;
	  }
};