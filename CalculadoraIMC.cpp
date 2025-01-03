/*
Realizar un programa que calcule el indice de masa corporal o imc
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	int peso;
	float altura;
	float imc;
	
	cout<<"Calculadora de Indice de Masa Corporal IMC\n";
	
	cout<<"Ingrese su peso en kilogramos: ";
	cin>>peso;
	
	cout<<"Ingrese su altura en metros: ";
	cin>>altura;
	
	imc= peso/pow(altura,2);
	
	cout<<"Su Indice de Masa Corporal es: "<<setprecision(4)<<imc<<"kg/m^2";
	
		
	return 0;
}

