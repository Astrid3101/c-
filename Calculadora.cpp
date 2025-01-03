/*
Crea un programa que solicite dos números al usuario.
Define una constante para el valor de Pi (3.14159) y úsala en alguna operación adicional
Realiza las siguientes operaciones con los dos números ingresados: suma, resta, multiplicación, división.
Muestra los resultados en pantalla.
*/

#include <iostream>
#include <math.h>

using namespace std;

#define pi 3.14159

int main(){
	
	int a,b;
	float res=0;
	
	cout<<"\tCALCULADORA \n";
	cout<<"(Suma - Resta - Divison - Multiplicacion)\n";
	cout<<"\tIngrese dos numeros\n\n";
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	cout<<"\n\t~~RESULTADOS~~\n";
	
	res=a+b;
	cout<<a<<"+"<<b<<"="<<res<<"\n";
	res=a-b;
	cout<<a<<"-"<<b<<"="<<res<<"\n";
	
	if(b!=0){
	  res=a/b;
	  cout<<a<<"/"<<b<<"="<<res<<"\n";
}else{
	cout<<"Error! El divisor no puede ser 0 \n";
}
	
	
	res=a*b;
	cout<<a<<"*"<<b<<"="<<res<<"\n";
	
	//otra manera de imprimir la salida: cout<<(a+=b)<<"\n"<<(a-=b)<<"\n"<<(a/=b)<<"\n"<<(a*=b);

	res=pi*(a*a);
	cout<<"El area de un ciruclo con radio "<<a<<" es: "<<res;
	
	return 0;
}
