#include <iostream>

using namespace std;

float operar (float x,float y, char op){
	float r =0;
		switch (op){
		case '+':
			r=x+y;
			break;
		case '-':
			r=x-y;
			break;
		case '*':
			r=x*y;
			break;
		case '/':
			r=x/y;
			break;
		default:
			cout << "Operador invalido" << endl;
			break;
	}
	return r;
}

int main(){
	float r,x,y;
	char op;

	
	cout << "Calculadora sencilla" << endl;
	cout << "Numero 1: ";
	cin >> x;
	cout << "Numero 2: ";
	cin >> y;
	cout << "Operacaio (+|-|*|/): ";
	cin >> op;
	
	r= operar(x,y,op);
	
	cout << "x" << op << "y = " << r << endl;
	
	return 0;
}
