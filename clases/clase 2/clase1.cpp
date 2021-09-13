#include <iostream>

using namespace std;

int main(){
	//declaracion de variables
	//estilo C
	int a =10;
	double b= 562.565;
	auto d = a;
	int f =0;
	decltype(f) g;
	
	
	//inicializacion de constructor 
	
	double c (54);
	
	//inicializacion uniforme
	
	double h {15.32};
	
	//imprimir resultados
	cout << a << endl;
	cout << b << endl;
	cout << d << endl;
	cout << f << endl;
	cout << g << endl;
	cout << c << endl;
	cout << h << endl;
	
	//Proceso
	h= a+b;
	cout << h << endl;
	h=c+b;
	cout << h << endl;
	//termina 
	return 0;
	
}
