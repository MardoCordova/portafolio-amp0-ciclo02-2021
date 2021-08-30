#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <ctype.h>

using namespace std;
//autor: Jose mardoqueo cordova mena CM100417

bool resultado (int per, int comp){
		if((per == 1) && (comp == 3)){
			return true;
		} else if((per == 1) && (comp == 4)){
			return true;
		} else if((per == 2) && (comp == 1)){
			return true;
		} else if((per == 2) && (comp == 5)){
			return true;
		} else if((per == 3) && (comp == 2)){
			return true;;
		} else if((per == 3) && (comp == 4)){
			return true;
		} else if((per == 4) && (comp == 2)){
			return true;
		} else if((per == 4) && (comp == 5)){
			return true;
		} else if((per == 5) && (comp == 3)){
			return true;
		} else if((per == 5) && (comp == 1)){
			return true;
		}  
		else {
			return false;
		}
}

string decision (int val){
		switch(val){
			case 1:
				return  "Piedra";
				break;
			case 2:
				return  "Papel";
				break;
			case 3:
				return  "Tijera";
				break;
			case 4:
				return  "Lagarto";
				break;
			case 5:
				return  "Spock";
				break;
			default:
			return  "Valor invalido intente de nuevo";
			break;	
		}	
}

bool continuar (string r){
	if (r!="S" || r!="N" || r!="s" || r!="n"){
		return true;
	}else{
		return false;
	}
}

void LimpiarPantalla(){
	#ifdef _WIN32
    	system("cls");
  	#else
    	system("clear");
  	#endif
}

void datos(){
	LimpiarPantalla();
	cout <<"Autor:: Jose Mardoqueo Cordova Mena \n";
	cout <<"Juego Piedra, Papel o Tijeras, Selecciona un Movimiento \n";
	cout << "1.Piedra \n 2.Papel \n 3.Tijera \n 4.Lagarto \n 5.Spock \n =>:";
}

int main(){
	int movJug;
	string cont= "S";
	while(cont=="S"||cont=="s"){
		datos();
		cin >> movJug;
		srand(time(0));
		int numMov = rand() % 5 + 1;		
		cout << "La computadora escogio: " << decision(numMov) << endl;
		if(movJug==numMov){
			cout << "Empate \n";
		} else {
			if(resultado(movJug,numMov)){
				cout<<"ganaste \n";
			}else{
				cout <<"perdiste \n";
			}
		}
		string cont2="s";
		while(cont2=="s"){		
			cout << "Desea continuar s/n \n ===>:";
			cin >> cont;
			cont2 = continuar(cont);
		}
	}
	return 0;
}
