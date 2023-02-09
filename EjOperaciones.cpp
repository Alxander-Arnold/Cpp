#include  <iostream>

using namespace std;


int main()
{
	
	int a, b;
	
	cout<< "digite dos numeros para operar con ellos"<< endl<< endl;
	cout << "Primer valor"<< endl;
	cin >> a; 
	
	cout << "Segundo valor" <<endl;
	cin>> b;
	
	cout << "Segun los operadodres de asignacion los resultados son: "<<endl;
	cout << endl;
	cout<< " 'a' tiene valor: "<< a << " Y 'b' siempre sera igual a: " << b <<endl;
	cout << endl;
	cout << a << " += "<< b << "=";
	a += b;
	cout<< a <<endl;
	
	
	cout<< " 'a' tiene valor: "<< a <<endl;
	cout << endl<<endl;
	cout << a << " *= "<< b << "=";
	a *= b;
	cout<< a <<endl;
	
	
	cout<< " 'a' tiene valor: "<< a <<endl;
	cout << endl<<endl;
	cout << a << " /= "<< b << "=";
	a /= b;
	cout<< a <<endl;
	
	cout<< " 'a' tiene valor: "<< a <<endl;
	cout << endl<<endl;
	cout << a << " %= "<< b << "=";
	a %= b;
	cout<< a <<endl;
	
	system ("pause");
	return 0;
	
}
