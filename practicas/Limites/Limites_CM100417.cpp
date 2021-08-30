#include <iostream>
#include <limits>
using namespace std;

int main(){
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	
	cout << "imin = " << imin << endl;
	cout << "imax = " << imax << endl;
	cout << "Tamao de int = " << sizeof(int) << endl;
	
	float fmin = numeric_limits<float>::min();
	float fmax = numeric_limits<float>::max();
	
	cout << "fmin = " << fmin << endl;
	cout << "fmax = " << fmax << endl;
	cout << "Tamao de float = " << sizeof(float) << endl;
	
	short smin = numeric_limits<short>::min();
	short smax = numeric_limits<short>::max();
	
	cout << "smin = " << smin << endl;
	cout << "smax = " << smax << endl;
	cout << "Tamao de short = " << sizeof(short) << endl;
	
	long lmin = numeric_limits<long>::min();
	long lmax = numeric_limits<long>::max();
	
	cout << "lmin = " << lmin << endl;
	cout << "lmax = " << lmax << endl;
	cout << "Tamao de long = "<< sizeof(long) << endl;
	
	long long llmin = numeric_limits<long long>::min();
	long long llmax = numeric_limits<long long>::max();
	
	cout << "llmin = " << llmin << endl;
	cout << "llmax = " << llmax << endl;
	cout << "Tamao de long long = "<< sizeof(long long) << endl;
	
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	
	cout << "dmin = " << dmin << endl;
	cout << "dmax = " << dmax << endl;
	cout << "Tamao de double = "<< sizeof(double) << endl;
	
	long double ldmin = numeric_limits<long double>::min();
	long double ldmax = numeric_limits<long double>::max();
	
	cout << "ldmin = " << ldmin << endl;
	cout << "ldmax = " << ldmax << endl;
	cout << "Tamao de long double = "<< sizeof(long double) << endl;
	
	wchar_t wcmin = numeric_limits<wchar_t>::min();
	wchar_t wcmax = numeric_limits<wchar_t>::max();
	
	cout << "wcmin = " << wcmin << endl;
	cout << "wcmax = " << wcmax << endl;
	cout << "Tama�o de wchar_t = "<< sizeof(wchar_t) << endl;
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	std::cout << "cmin = " << static_cast<int>(cmin) << std::endl;
	std::cout << "cmax = " << static_cast<int>(cmax) << std::endl;
	cout << "Tama�o de char = "<< sizeof(char) << endl;
	
	
	return 0;
}
