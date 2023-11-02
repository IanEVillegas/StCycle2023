#include<iostream>
#include "ColeccionOpciones.h"
#include "ColeccionEmpleados.h"
using namespace std;
/*
Estudiantes:
Ian Villegas Jiménez
ID: 2 0780 0171
Universidad Nacional
*/

int main () {
	int opc = 0;
	ColeccionOpciones coleccion;//clase Coleccion y nombre de la variable/instancia del objeto 
	coleccion.listaEmpleados0();//para llamar al toString de la lista de datos de empleados
	/* tiene que ir fuera del case para que no se duplique la información en cada entrada */

	do{
		system("cls");
		cout<<"\033[0;31m" <<"\tSistema de datos de RRHH SIUA\n" <<"\033[0m" <<endl;
		cout<<"\033[0;1;30m" <<"\tMantenimiento de empleados." <<"\033[0m" <<endl;
		cout<< "0 - Lista de empleados." <<endl;
		cout<< "1 - Registrar empleado." <<endl;
		cout<< "2 - Eliminar por ID." <<endl;
		cout<< "3 - Modificacion de empleado por ID." <<endl;
		cout<<"\033[0;1;30m" <<"\n\tMantenimiento de salarios." <<"\033[0m" <<endl;
		cout<< "4 - Aumentar salario de todos los empleados segun porcentaje de aumento." <<endl;
		cout<< "5 - Aumentar salario de un empleado por ID." <<endl;
		cout<<"\033[0;1;30m" <<"\n\tReportes" <<"\033[0m" <<endl;
		cout<< "6 - Lista de los mejores 5 salarios." <<endl;
		cout<< "7 - Lista de los empleados por orden segun su salario." <<endl;
		cout<< "8 - Lista de los empleados por orden segun su ID." <<endl;
		cout<< "9 - Buscar informacion de un empleado por ID." <<endl;
		cout<< "10 - Buscar informacion de un empleado por nombre." <<endl;
		cout<< "11 - Promedio de los salarios." <<endl;
		cout<< "12 - Salarios con los totales de salario, deducciones y ahorros." <<endl;
		cout<< "13 - Salir." <<endl;
		cout<< "\nDigite una opcion: ";
		cin>> opc;
		
		switch(opc){
		case 0:
			system("cls");
			cout<< coleccion.toString() <<endl;
			system("pause");
			break;
		case 1:
			system("cls");
			coleccion.registrarEmpleado1();
			system("pause");
			break;
		case 2:
			system("cls");
			coleccion.eliminarPorID2();
			system("pause");
		case 3:
			system("cls");
			coleccion.modificacionEmpleadosID3();
			system("pause");
			break;
		case 4:
			system("cls");
			coleccion.aumentarSalarioTodosPorcentaje4();
			system("pause");
			break;
		case 5:
			system("cls");
			coleccion.aumentarSalarioUnoPorID5();
			system("pause");
			break;
		case 6:
			system("cls");
			coleccion.listaMejoresSalarios6();
			system("pause");
			break;
		case 7:
			system("cls");
			coleccion.listaEmpleadosPorOrdenSalario7();
			system("pause");
			break;
		case 8:
			system("cls");
			coleccion.listaEmpleadosPorOrdenID8();
			system("pause");
			break;
		case 9:
			system("cls");
			coleccion.buscarInfoEmpleadoPorID9();
			system("pause");
			break;
		case 10:
			system("cls");
			coleccion.buscarInfoEmpleadoPorNombre10();
			system("pause");
			break;
		case 11:
			system("cls");
			coleccion.calcularPromedioSalarios11();
			system("pause");
			break;
		case 12:
			system("cls");
			coleccion.calcularTodosSalarios12();
			system("pause");
			break;	
		}
	}while(opc != 13);
	return 0;
}
