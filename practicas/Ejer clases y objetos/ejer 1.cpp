
#include "CuentaBancaria.h"
#include "Persona.h"
#include "Personaje.h"

using namespace std;

int main(){
	cout << "---------------------------------------------------------------------------CUENTA--------------------------------------------------------------------------------------- "<< endl;
	CuentaBancaria miCuenta("A-480920","Joseph Joestar",2900.00);
	cout << "Titular: " << miCuenta.getNombreTitulaar() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: " << miCuenta.getSaldo() << endl;
	cout << "---------------------------------------------- "<< endl;
	
	cout << "Quiero retirar 84 de la cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(84);
	cout << "Saldo Nuevo " << miCuenta.getSaldo() << endl;
	cout << "---------------------------------------------- "<< endl;
	
	cout << "Quiero abonar 300 de la cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(300.04);
	cout << "Saldo Nuevo " << miCuenta.getSaldo() << endl;
	cout << "---------------------------------------------- "<< endl;
	
	cout << "Quiero retirar 4000 de la cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(4000);
	cout << "Saldo Nuevo " << miCuenta.getSaldo() << endl;

	cout << "---------------------------------------------------------------------------PERSONA--------------------------------------------------------------------------------------- "<< endl;	
	Persona yo("Jose Mardoqueo","Cordova Mena",1999);
	cout << "Nombre: " << yo.nombreCompleto() << endl;
	cout << "edad: " << yo.edad() << endl;

	cout << "---------------------------------------------------------------------------PERSONAJE--------------------------------------------------------------------------------------- "<< endl;
	Personaje JJ("Jose Mardoqueo");
	cout << "Nombre: " << JJ.getNombre() << endl;
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.recibirGolpe(3000);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.recibirGolpe(-3000);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.comer(1500);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.comer(3000);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.comer(3000);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.comer(-3000);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.recibirGolpe(10001);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	JJ.comer(3000);
	cout << "Puntos Vida " << JJ.getPuntosVida() << endl;
	cout << "---------------------------------------------- "<< endl;
	
}

