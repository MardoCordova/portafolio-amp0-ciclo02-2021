#include <iostream>
using namespace std;

int main () {
    double x;
    double y;
    

    cout << "calcula las operaciones aritmeticas de dos numeros \n";

    cout <<"Inserte un numero ";

    cin >> x;

    cout <<"inserte otro numero ";
    cin >> y;

    cout << "Suma: " << x+y << endl;
    cout << "Resta: " << x-y << endl;
    cout << "Multiplicacion: " << x*y << endl;
    cout << "Division: " << x/y << endl;

    int z=x, w=y;
    cout << "residuo de division: " << z%w << endl;

    ++x;
    ++y;
    cout <<"Incremento en 1 "<<"X: "<< x <<" Y: "<< y << endl;

    --x;
    --y;
    cout <<"Decremento  en 1 "<<"X: "<< x <<" Y: "<< y << endl;

    return 0;
    
}
