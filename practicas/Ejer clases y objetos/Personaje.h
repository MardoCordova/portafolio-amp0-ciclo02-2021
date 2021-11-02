#include <iostream>
#include <string>

using namespace std;

class Personaje {
	private:
		string nombre;
		int puntosVida;
	public:
		Personaje (string nombre);
		string getNombre();
		int getPuntosVida();
		void recibirGolpe(int golpe);
		bool estavivo();
		void comer (int comida);
};

Personaje::Personaje(string nombre){
	this->puntosVida = 10000;
	this->nombre =nombre;
}

string Personaje::getNombre(){
	return this->nombre;
}

int Personaje::getPuntosVida(){
	return this->puntosVida;
}

void Personaje::recibirGolpe(int golpe){
	cout << "Recibes daño por un valor de: " << golpe << endl;
	if(golpe<0){
		cout << "El golpe te hizo bien, pero eso esta mal" << endl;
	}else{
		if (golpe>this->puntosVida){
			this->puntosVida=0;
		}else{
			this->puntosVida -= golpe;	
		}
	}
}

void Personaje::comer(int comida){
	cout << "comes por un valor de: " << comida << endl;
	if(comida<0){
		cout << "Te cae pesado, pero vives" << endl;
	} else if (this->puntosVida == 10000){
		cout << "La gula es mala" << endl;	
	}
	else{
		if(estavivo()){
			if((this->puntosVida + comida)>10000){
				this->puntosVida = 10000;	
			}else{
				this->puntosVida += comida;
			}
		}else{
			cout << "has visto a un muerto comer y levantarse?" << endl;
			cout << "hoy no sera el dia" << endl;
		}
	}
}

bool Personaje::estavivo(){
	if(this->puntosVida>0){
		return true;
	}else{
		return false;
	}
}

