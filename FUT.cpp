#include <iostream>
using namespace std;

int main() {

	int i=1, Victory=0, Loss=0, Draw=0;
	float Promedio;
	char V, L, D, reslP; //agrega derrotas o victorias al contador por el usuario.}
	
	
	
	cout <<"\t\t\t***Contador de Simulacion de partidos***\t\t\t"<<endl<<endl;
	
	do {
		
		cout << "Ingrese sus resultados del partido "<< i; cout<<": "; cin >> reslP; cout <<endl;
		
		
		//Ejecucion del programa
		 if (reslP=='V' || reslP== 'v'){
		 	
		 	Victory++;
		 	Promedio=((float)Victory * 100/i);	
			
		 } else if (reslP=='l' || reslP== 'L'){
		 	
		 	Loss++;
		 	
		 } else if (reslP=='D' || reslP== 'd'){
		 	
		 	Draw++;
		
		} else {
				system("cls");
				cout <<"Error al digitar un dato valido.";
				return 0;
		}
	
	 
//----------------------------------------------------------------------------------------------------------		 
		 //Salidas en caso de
	
		
		
	system("cls");
		
	i++;
		
	}while (i<=20); 	
	if (Victory>=16){
		  cout<<"¡¡¡¡Enhorabuena!!!!"<<endl; cout <<"Has completado el promedio requierido para ver esto"<<endl;
		  cout <<"Tus partidos ganados son: " <<Victory<<endl;
		  cout <<"Total de partidos: "<<i;
		  return 0;
		  
	}
	
	if(Loss>=11){
		cout<<"Reintealo de nuevo"<<endl;
		cout <<"Tus partidos ganados son: " <<Victory<<endl;
		cout <<"Total de partidos: "<<i;
		return 0;
	}
	
	if (Draw>=5 || Victory<16){
		cout << "Su resultado gracias a su partidos hasta ahora es: "<< endl;
		cout << "\t\tPartidos ganados: "<< Victory<<endl;
		cout <<"\t\tParidos perdidos: "<< Loss<<endl;
		cout << "\t\tPartidos Empatados: " << Draw<<endl;
		cout <<"\t\tPromedio de Victorias: "<< Promedio<< "%"<<endl<<endl;
		cout <<"Total de partidos: "<<i;
		system ("pause");
	
		return 0;
	}
}
