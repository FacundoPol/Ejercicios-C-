#include <iostream>
	
using namespace std;

void ingreso(int &n1,int &n2,int &n3);
void ordenar(int &n1,int &n2,int &n3,bool band);
void resultado(int n1,int n2,int n3);
main()
{ 
	int num1=0,num2=0,num3=0;
	ingreso(num1,num2,num3);
	ordenar(num1,num2,num3,true);
	resultado(num1,num2,num3) ;
}
void ingreso(int &n1,int &n2,int &n3)
{ 	
	do
	{
		cout<<"Ingrese un numero: ";
		cin>>n1;
		cout<<"Ingrese un numero: ";
		cin>>n2;
		cout<<"Ingrese un numero: ";
		cin>>n3;
		if(!(n1!=n2 && n1!=n3 && n2!=n3))
		{
			cout<<"Los numeros son iguales"<<endl;
		}
	}while(!(n1!=n2 && n1!=n3 && n2!=n3));
}
void ordenar(int &n1,int &n2,int &n3,bool band)
{
	int aux;
	if(band==true)
	{	
		if(n1>n2)
		{
			aux=n1;
			n1=n2;
			n2=aux;
		}
		if(n2>n3)
		{
			aux=n2;
			n2=n3;
			n3=aux;
		}
		if(n1>n2)
		{
			aux=n1;
			n1=n2;
			n2=aux;
		}
	}
}
void resultado(int n1,int n2,int n3)
{
	cout<<"En orden creciente: "<<n1<<" , "<<n2<<" , "<<n3<<endl;
}
