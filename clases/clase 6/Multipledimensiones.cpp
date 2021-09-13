#include <iostream>
#include <iomanip>

const int EST=3,EVA=4;


double mini(double notas[][EVA], int alumnos, int examenes){
	double nMinima = 10.0;
	
	for (int i=0; i< alumnos; i++)
		for(int j=0; j< examenes; j++)
			if(notas[i][j] < nMinima)
				nMinima=notas[i][j];
				
	return nMinima;
}

double maxi(double notas[][EVA], int alumnos, int examenes){
	double nMaxima = 0.0;
	
	for (int i=0; i< alumnos; i++)
		for(int j=0; j< examenes; j++)
			if(notas[i][j] > nMaxima)
				nMaxima=notas[i][j];
				
	return nMaxima;
}

double pro(double notas[], int examenes){
	double total = 0.0;
	
	for (int i=0; i< examenes; i++)
		total += notas[i];
				
	return total/examenes;
}

void impArr(double notas[][EVA], int alumnos, int examenes){
	using namespace std;
	cout << "               [0]  [1]  [2]  [3]";
	
	for (int i=0; i< alumnos; i++){
		cout << "\nnotasEstudiantes[" << i << "] ";
		for(int j=0; j< examenes; j++)
			cout << setw(5) << fixed << setprecision(1) << notas[i][j];
	}	
	
}


int main (int argc, const char * argv[]){
	using namespace std;
	
	double notas[EST][EVA]={{7.7,6.8,8.6,7.3},{9.6,8.7,8.9,7.8},{7.0,9.0,8.6,8.1}};
	
	cout << "El arreglo es:" << endl;
	impArr(notas,EST,EVA);
	
	cout << setprecision(1);
	cout << "\n\nNota maxima: " << maxi(notas,EST,EVA);
	cout << "\n\nNota MINIMA: " << mini(notas,EST,EVA) << endl;
	
	for (int i=0; i<EST; i++){
		cout << "\nPromedio Estudiante[" << i << "]: ";
		cout << pro(notas[i],EVA);
	}
	
	cout << endl;
	
	return 0;
}
