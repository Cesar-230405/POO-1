#include<iostream>
#include "Cliente.cpp"
using namespace std;
main(){
	string nit, nombres, apellidos, direccion, fecha_nac;
	int telefono;
	
	cout<<"Ingresar nit"<<endl;
	cin>>nit;
	cout<<"\nIngresar nombre"<<endl;
	cin>>nombres;
	cout<<"\nIngresar apellido"<<endl;
	cin>>apellidos;
	cout<<"\nIngresar direccion"<<endl;
	cin>>direccion;
	cout<<"\nIngresar fecha de nacimiento"<<endl;
	cin>>fecha_nac;
	cout<<"\nIngresar telefono"<<endl;
	cin>>telefono;
	
	//instancia de un objeto
	Cliente cliente = Cliente (nombres, apellidos, direccion, fecha_nac, telefono, nit);
	cliente.leer();
	
	cout<<"Ingresar nit"<<endl;
	cin>>nit;
	cliente.setNit(nit);
	cliente.leer();
}