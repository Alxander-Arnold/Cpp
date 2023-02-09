#include <iostream>
#include <string>
using namespace std;



//void no devulve ningun valor (es una hojha en blanco devuelve loq ue sea que tenga dentro)
class Empleados
{
 public:
 	Empleados();		//contructor de la clase
 		//debajo de esta linea estan los metodos que se usan en el programa
 	void inicializa(int, int, int, int);//inicializa los objetos
 	string getNums();
 	void BeginCh(string);//Metodos para el nombre
 	string getName();
 	void getpromedio(double);//metodos para el promedio
 	double setProm();
 
 private:
 	int n1, n2, n3, n4;
 	double promedio, promedio2;
 	string Name;
};

Empleados::Empleados(){	
	n1=0;
	n2=0;
	n3=0;
	n4=0;
	promedio=0;
	promedio2=0;
	
}
void Empleados::inicializa(int Nm1, int Nm2, int Nm3, int Nm4){
	this->n1=Nm1;
	this->n2=Nm2;
	this->n3=Nm3;
	this->n4=Nm4;
}
void Empleados::BeginCh(string name){
	this->Name=name;
}
string Empleados::getName(){
	return this->Name;
}
string Empleados::getNums(){
	
	return to_string(this->n1) + "---" + to_string(this->n2) + "---" + to_string(this->n3) + "---"+ to_string(this->n4);
}
void Empleados::getpromedio(double prom){
	promedio=prom;
}
double Empleados::setProm(){
	return this->promedio;
}