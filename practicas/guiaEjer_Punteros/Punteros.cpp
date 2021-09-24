#include <iostream>

using namespace std;

int main(){
	
	char c = 'T', d ='S';
	char *p1= &c;
	char *p2= &d;
	char *p3;
	p3=&d;
	
	cout << "*p3 = : "<< *p3 << endl;
	p3 =p1;
	cout << "*p3 = : "<< *p3 << endl;
	cout << "p3 = : "<< p3 << endl;
	*p1= *p2;
	cout << "*p1 = : "<< *p1 << endl;
	cout << "p1 = : "<< p1 << endl;
	int *p;
	int i =42;
	int k;
	p=&i;
	*p=75;
	cout << "*i "<< i << endl;
	
//	char j = 'A';
//	double *z= &j;
//	cout << "*p3 = : "<< *k << endl;

char bloques[3]={'A','B','C'};
char *ptr = &bloques[0];
char temp;
temp = bloques[0];
cout << "*temp "<< temp << endl;
temp= *(bloques + 2);
cout << "*temp "<< temp << endl;
temp= *(ptr+1);
cout << "*temp "<< temp << endl;
temp= *ptr;
cout << "*temp "<< temp << endl;
ptr = bloques+1;
cout << "*ptr "<< ptr << endl;
temp= *ptr;
cout << "*temp "<< temp << endl;
temp= *(ptr+1);
cout << "*temp "<< temp << endl;
ptr = bloques;
cout << "*ptr "<< ptr << endl;
temp= *++ptr;
cout << "*temp "<< temp << endl;
temp= ++*ptr;
cout << "*temp "<< temp << endl;
temp= *ptr++;
cout << "*temp "<< temp << endl;
temp= *ptr;
cout << "*temp "<< temp << endl;
	
}
