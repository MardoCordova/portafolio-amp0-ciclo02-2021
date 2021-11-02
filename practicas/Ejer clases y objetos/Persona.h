#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona {
	private:
		string Nombre;
		string Apellido;
		int  Nacimiento;
	public:
		Persona (string nombre, string apellido, int nacimiento);
		string nombreCompleto();
		int edad();
};

Persona::Persona(string nombre, string apellido, int nacimiento){
	this->Nombre =nombre;
	this->Apellido = apellido;
	this->Nacimiento = nacimiento;
}

string Persona::nombreCompleto(){
	string nomc= this->Nombre + " " + this->Apellido;
	return nomc;
}

int Persona::edad(){
	time_t now = time(0);
	tm* ltm = localtime(&now);
	
	int aAct = 1900 +ltm->tm_year;
	
	int edad = (aAct-this->Nacimiento);
	return edad;
}

