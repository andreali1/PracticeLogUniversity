#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main ()
{
	system("color 70");
	system("cls");
	int a, ruc1, nota1,nota2,nota3,b;
	float prom,z,x,c,falla;
	char nombre_empresa[30],repre_legal[30],razon_social[30],telf1[20],celualum[20],final_prac[20];
	char nombre_alumno[30],correo1[20],cod_alumno[20],dni1[20],telfalum[30],inicio_Prac[40],horas_dia[20];
	char aper_carp[20];
	menu:
	system("cls");
	cout<<" \t    Sistema de registro de practicas PreProfesionales\n";
	cout<<" \t \t ingrese la opcion que desea realizar "<<endl;
	cout<<" 1.- Ingrese los Datos de la Empresa ---------------------> OPC 1 \n";
	cout<<" 2.- Ingrese los Datos del Alumno ------------------------> OPC 2 \n";
	cout<<" 3.- Ingrese los Datos de las Practicas ------------------> OPC 3 \n";
	cout<<" 4.- Apertura de Carpeta ---------------------------------> OPC 4 \n";
	cout<<" 5.- Ingrese los Notas Obtenidas por el Alumno -----------> OPC 5 \n";
	cout<<" 6.- Imprimir Constancia de Practicas --------------------> OPC 6 \n";
	cout<<" 7.- Salir del Programa ----------------------------------> OPC 7 \n";
	cout<<" 8.- Promedio de las ter primeras notas ------------------> OPC 8 \n";
	cin>>a;
	
	switch (a)
	{
		case (1):
			cout<<"Ingrese el nombre de la empresa \n";
			cin>>nombre_empresa;
			cout<<"Ingrese el RUC de la empresa:\n";
			cin>>ruc1;
			cout<<"Ingrese la Razon Social:\n";
			cin>>razon_social;
			cout<<"Ingrese el numero de Telefono de la Empresa \n";
			cin>>telf1;
			cout<<"Ingrese la direccion de correo electronico \n";
			cin>>correo1;
			cout<<"Ingrese el nombre del Representante Legal:\n";
			cin>>repre_legal;
			cout<<"datos registrados correctamente \n";
			cout<<" GRACIAS\n";
			system("pause");
		goto menu;
	
		break;
		
		
		
		case (2):
			cout <<"Ingrese los datos del Alumno \n";
			cout <<"Ingrese el codigo del Alumno \n";
			cin>>cod_alumno;
			cout <<"Ingrese el Nombre y Apellidos del Alumno "<<endl;
			cin>> nombre_alumno;
			cout <<" Ingrese el DNI del Alumno"<<endl;
			cin>> dni1;
			cout <<"ingrese el telefono del Alumno "<<endl;
			cin>> telfalum;
			cout <<" Ingrese el Numero del Celular del Alumno "<<endl;
			cin>> celualum;
		
		goto menu;
	
		break;
		
	
		
		case (3):
			cout<<"Ingrese los Datos para las Practicas PreProfesionales \n";
			cout<<"El codigo del alumno es  \n"<<cod_alumno<<endl;
			cout<<"El ruc de la Empresa es  \n"<<ruc1<<endl;
			cout<<"Ingrese el dia de incio de las Practicas "<<endl;
			cin>> inicio_Prac;
			cout<<"La apertura de carpeta tubo fecha de "<<"--->"<<aper_carp<<endl;
			cout<<"Ingrese la fecha de finalizadas las practicas"<<endl;
			cin>> final_prac;
			cout<<" Ingrese el numero de hotras trabajadas "<<endl;
			cin>> horas_dia;
			system ("pause");
		
		goto menu;
		
			break;
		
		case (4):
			cout<<"Ingrese el dia de apertura de carpetas de practicas PreProfesionales \n";
			cin>>aper_carp;
		goto menu;
		
			break;
		
		case (5):
			cout << " Ingresar las notas obtenidads por el alumno \n";
			cout<< " ingresar la primera nota \n";
			cin>>nota1;
			cout<< " ingresar la segunda nota \n";
			cin>>nota2;
			cout<< " ingresar la tercera nota \n";
			cin>>nota3;
			prom=(nota1+nota2+nota3)/3;
			
			cout<<"el promedio del alumno es "<<prom <<endl;
			system("PAUSE");
		goto menu;
		
		break;
		
		case (6):
			cout<<"Para poder immprimir la constancia tiene q estar aprobado "<<endl;
			
			cout<<"inprimir la constancia de practicas "<<endl;
		    if (prom>=10.5)
		    {
		    	cout<<"Le constancia se puede imprimir normalmente "<<endl;
			}
			else 
			{
				cout <<" El alumno no tiene nota aprobatoria  "<<endl;
				cout <<" La constancia no se puede Imprimir   "<<endl;
						}		    
		system("PAUSE");
		goto menu;
		break;
		case (7):
			cout<<"Esta seguro de querer abandonar el Programa"<<endl;
			cout<<"ingrese la opcion que desea realizar "<<endl;
			cout<<"Para regresar al progrma ingrese la     OPC 1"<<endl;
			
			cout<<"Para salir completamente del programa   OPC 2"<<endl;
			cin>>b;
			switch (b)
			{
				case (1):
					cout<<"regresando al Programa "<<endl;
				system("pause");
				goto menu;
				break;
				case (2):
					cout<<"cerrando programa "<<endl;
					cout<<"presione cualquier tecla para salir "<<endl;
			}
		system("PAUSE");
		goto menu;
		break;
		case (8):
			cout<<"ingrese el valor de la primera nota "<<endl;
			cin>>z;
			cout<<"ingrese el valor de la segunda nota "<<endl;
			cin>>x;
			cout<<"ingrese el valor de la tercera nota "<<endl;
			cin>>c;
			
			float promedio = (z+x+c)/3;
			cout<<"el promedio de las notas es ---> "<<promedio <<endl;
		system("PAUSE");
		goto menu;
		break;
		}
	system("pause");
	return 0;
	
}
