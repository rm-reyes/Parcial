#include <iostream>
using namespace std;

struct Estudiante{
	int codigo;
	string nombre;
	
};
main(){
		int nota1, nota2, nota3, nota4, suma, promedio;
Estudiante estudiante;
cout<<"Ingrese Codigo:";
cin>>estudiante.codigo;
cin.ignore();
cout<<"Ingrese Nombre:";
getline(cin, estudiante.nombre);
cout<<endl;
cout<<"Ingrese Nota 1:";
cin>>nota1;
cout<<"Ingrese Nota 2:";
cin>>nota2;
cout<<"Ingrese Nota 3:";
cin>>nota3;
cout<<"Ingrese Nota 4:";
cin>>nota4;

	
promedio = (nota1+nota2+nota3+nota4)/4;


cout<<"Codigo:"<<estudiante.codigo<<" Nombres:"<<estudiante.nombre<<" Promedio:"<<promedio<<endl;

if (promedio>60){
	cout<<"*********USTED ESTA APROBADO*************"<<endl;	
}

else
{
	cout<<"************USTED ESTA REPROBADO***********"<<endl;
}




	system("PAUSE");
}
