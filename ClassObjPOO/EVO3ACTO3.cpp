
#include <iostream>
#include <string>
#include "EVO3ACTO3(MC).cpp"

int Rta;
using namespace std;

int main(){
	int Num1, Num2, Num3, Num4;
	string Name; 
	double proM=0;
	
	cout<<"Numero de empleados: "<<endl;
	cin>>Rta;
	int contador=0;
	Empleados listaNum[Rta];
	Empleados listaName[Rta];
	Empleados listaProm[Rta];
	do{
		cout<<"Ingrese su nombre: "<<endl;
		cin>>Name;
		cout<<"ingrese el valor de venta del primer mes: "<<endl;
		cin>>Num1;
		cout<<"ingrese el valor de venta del segundo mes: "<<endl;
		cin>>Num2;
		cout<<"ingrese el valor de venta del tercer mes: "<<endl;
		cin>>Num3;
		cout<<"ingrese el valor de venta del cuarto mes: "<<endl;
		cin>>Num4;	
		listaNum[contador].inicializa(Num1, Num2, Num3, Num4);
		listaName[contador].BeginCh(Name);
		proM=((Num1+Num2+Num3+Num4)/4);
		listaProm[contador].getpromedio(proM);
		system("cls");
		contador++;
		
	} while (contador<Rta);

	for(int i; i=0, i<Rta; i++){
		cout<<"Nombre del vendedor"<<"  "<<"Mes 1"<<"   "<<"Mes 2"<<"   "<<"Mes 3"<<"   "<<"Mes 4"<<"   "<<"Promedio"<<endl;
		cout<<listaName[i].getName()<<"  "<<listaNum[i].getNums()<<"  "<<listaProm[i].setProm()<<endl;
		return 0;
	}
		
}



