/*
3. Área y perímetro de figuras geométricas
Escribe un programa que calcule el área y el perímetro de un rectángulo, triángulo y círculo.
Utiliza constantes para valores como Pi y define las dimensiones como variables ingresadas por el usuario.
Realiza las operaciones necesarias para cada figura*/

#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.14159

int main(){
	
	int opc=0;
	float a,b,r,res;
	
	cout<<"\tCALCULADORA DE AREAS Y PERIMETROS\n";
	cout<<"1.Area y Perimetro de un Triangulo\n";
	cout<<"2.Area y Perimetro de un Rectagunlo\n";
	cout<<"3.Area y Perimetro de un Circulo\n";
	cout<<"Seleccione una opcion: ";
	
	cin>>opc;
	
	if(opc==1){
		
		cout<<"\nArea y Perimetro de un Triangulo\n";
		cout<<"Ingrese la base del Triangulo: ";
		cin>>b;
		cout<<"\nIngrese la altura del Triangulo: ";
		cin>>a;
		
		res=((b*a)/2);
		
		cout<<"\nEl area del Triangulo es "<<res;
		
		res=(a+a)+b;
		
		cout<<"\nEl perimetro del Triangulo es "<<res;
		
	}else{
		if(opc==2){
		cout<<"\nArea y Perimetro de un Rectangulo\n";
		cout<<"\nIngrese la base del Rectangulo: ";
		cin>>b;
		cout<<"\nIngrese la altura del Rectangulo: ";
		cin>>a;
		
		res=b*a;
		cout<<"\nEl area del rectangulo es "<<res;
		
		res=((2*a)+(2*b));
		cout<<"\nEl perimetro del rectangulo es "<<res;
		
		}else{
			if(opc==3){
			cout<<"\nArea y Perimetro de un Circulo\n";
		    cout<<"\nIngrese el radio del Circulo: ";
	     	cin>>r;
	     	
	     	res=PI*pow(r,2);
	     	cout<<"\nEl area del circulo es "<<res;
	     	
	     	res=2*(PI*r);
	     	cout<<"\nEl Perimetro del Circulo es "<<res;
	
	     	
			}else{
				cout<<"Opcion no valida.";
			}
			
		}
		
	}
	
	return 0;
}
