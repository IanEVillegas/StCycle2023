#include "ColeccionOpciones.h"
#include <iomanip> //para utilizar <<setw(20)<<left

ColeccionOpciones::ColeccionOpciones(){
	cantidad = 0; 
	tamanio = 50;
}

void ColeccionOpciones::listaEmpleados0(){
	
	//crear objetos para ser mostrados en el toString de ColeccionEmpleados
	ColeccionEmpleados empleado1 = ColeccionEmpleados("Ian Villegas", "207800171", 550000, 2, 7, 13, 90000);
	ColeccionEmpleados empleado2 = ColeccionEmpleados("Olman Ugarte", "305320681", 550000, 2, 7, 13, 000);
	ColeccionEmpleados empleado3 = ColeccionEmpleados("Cristopher Jimenez", "207800170", 250000, 5, 1, 1, 10000);
	ColeccionEmpleados empleado4 = ColeccionEmpleados("Jimena Stephenson", "708090070", 250000, 5, 1, 1, 7000);
	ColeccionEmpleados empleado5 = ColeccionEmpleados("Cristina Villalobos", "602450563", 250000, 5, 1, 10, 5000);
	ColeccionEmpleados empleado6 = ColeccionEmpleados("Erick Obando", "507070712", 450000, 10, 4, 10, 000);
	ColeccionEmpleados empleado7 = ColeccionEmpleados("Jocabed Sibaja", "102340567", 350000, 7, 3, 8, 5000);
	ColeccionEmpleados empleado8 = ColeccionEmpleados("Juli Soto", "203450678", 250000, 5, 1, 1, 000);
	ColeccionEmpleados empleado9 = ColeccionEmpleados("Maria Cespedes", "304560789", 450000, 10, 5, 11, 40000);
	ColeccionEmpleados empleado10 = ColeccionEmpleados("Bob Villalobos", "405670890", 350000, 7, 3, 5, 000);
	
	ColeccionEmpleados empleado11 = ColeccionEmpleados("Ronald Villegas", "207830171", 150000, 3, 5, 10, 90000);
	ColeccionEmpleados empleado12 = ColeccionEmpleados("Ronald Ugarte", "305320661", 350000, 4, 4, 11, 000);
	ColeccionEmpleados empleado13 = ColeccionEmpleados("Christopher Ugarte", "207800170", 250000, 5, 1, 1, 10000);
	ColeccionEmpleados empleado14 = ColeccionEmpleados("Ana Maltez", "708090970", 250000, 5, 1, 1, 7000);
	ColeccionEmpleados empleado15 = ColeccionEmpleados("Adrian Calvo", "602452563", 250000, 5, 1, 10, 5000);
	ColeccionEmpleados empleado16 = ColeccionEmpleados("Jorge Rodriguez", "507077712", 450000, 10, 4, 10, 000);
	ColeccionEmpleados empleado17 = ColeccionEmpleados("Dorian Lopez", "112340567", 350000, 7, 3, 8, 5000);
	ColeccionEmpleados empleado18 = ColeccionEmpleados("Kiara Cerdas", "223450678", 250000, 5, 1, 1, 000);
	ColeccionEmpleados empleado19 = ColeccionEmpleados("Ronald Villagra", "304568789", 450000, 10, 5, 11, 40000);
	ColeccionEmpleados empleado20 = ColeccionEmpleados("Sergio Arce", "435670890", 350000, 7, 3, 5, 000);
	//guardar los objetos para ser mostrados en el toString de ColeccionEmpleados
	baseDatosEmpleados(empleado1);
	baseDatosEmpleados(empleado2);
	baseDatosEmpleados(empleado3);
	baseDatosEmpleados(empleado4);
	baseDatosEmpleados(empleado5);
	baseDatosEmpleados(empleado6);
	baseDatosEmpleados(empleado7);
	baseDatosEmpleados(empleado8);
	baseDatosEmpleados(empleado9);
	baseDatosEmpleados(empleado10);
	
	baseDatosEmpleados(empleado11);
	baseDatosEmpleados(empleado12);
	baseDatosEmpleados(empleado13);
	baseDatosEmpleados(empleado14);
	baseDatosEmpleados(empleado15);
	baseDatosEmpleados(empleado16);
	baseDatosEmpleados(empleado17);
	baseDatosEmpleados(empleado18);
	baseDatosEmpleados(empleado19);
	baseDatosEmpleados(empleado20);
}

void ColeccionOpciones::baseDatosEmpleados(ColeccionEmpleados lista){ //mostrar la lista de empleados dados
	if(cantidad < tamanio){
		vectorEmpleados[cantidad++] = lista;
	}
}
//El método registrarEmpleado1() solicita al usuario información para registrar un nuevo empleado
void ColeccionOpciones::registrarEmpleado1(){
	string nombreApellido;
	string identificador;
	double salarioBase;
	double porcentajeDeduccionCCSS;
	int aniosAntiguedad;
	double porcentajeAumentoPorAntiguedad;
	double ahorroVoluntario;
	
	cout<<"\033[0;31m" <<"\tIngrese los datos del empleado\n" <<"\033[0m" <<endl;
	cout<<"\033[0;1;30m" << "Nombre: " <<"\033[0m";
	cin>> nombreApellido; cout<<endl;
	cout<<"\033[0;1;30m" << "Cedula: " <<"\033[0m";
	cin>> identificador; cout<<endl;
	cout<<"\033[0;1;30m" << "Salario base: " <<"\033[0m";
	cin>> salarioBase; cout<<endl;
	cout<<"\033[0;1;30m" << "Porcentaje de deduccion por la C.C.S.S.: " <<"\033[0m";
	cin>> porcentajeDeduccionCCSS; cout<<endl;
	cout<<"\033[0;1;30m" << "Anios de antiguedad: " <<"\033[0m";
	cin>> aniosAntiguedad; cout<<endl;
	cout<<"\033[0;1;30m" << "Porcentaje de aumento por antiguedad: " <<"\033[0m";
	cin>> porcentajeAumentoPorAntiguedad; cout<<endl;
	cout<<"\033[0;1;30m" << "Ahorro voluntario: " <<"\033[0m";
	cin>> ahorroVoluntario; cout<<endl;
	
	ColeccionEmpleados lista = ColeccionEmpleados(nombreApellido,
												  identificador,
												  salarioBase,
												  porcentajeDeduccionCCSS,
												  aniosAntiguedad,
												  porcentajeAumentoPorAntiguedad,
												  ahorroVoluntario);
	if(cantidad < tamanio){
		vectorEmpleados[cantidad++] = lista;
		//la línea anterior añade el nuevo empleado al vector enlazándolo a lista que es de la opción 0
		cout<<"\033[5;1;32m" <<"La cantidad de espacio disponible es de: " <<tamanio-cantidad <<"\n\n" <<"\033[0m" <<endl;
	}else{	
		cout<<"\033[5;1;31m" <<"Lo siento, la lista de empleados ha alcanzado su maximo de 50 trabajadores" <<"\033[0m" <<"\n" <<endl;
	}
}
//El método eliminarPorID2() elimina un empleado al darle un identificador particular
void ColeccionOpciones::eliminarPorID2(){
	cout<<"\033[0;31m" <<"\tIngrese los datos requeridos\n" <<"\033[0m" <<endl;
	string identificador;
	cout<<"\033[0;1;30m" <<"Digite el numero de identificador del empleado a eliminar: " <<"\033[0m";
	cin>> identificador;
	cin.ignore();
/* El programa solo leerá hasta el primer espacio en blanco si se utiliza
cin>> en lugar del getline*/
	
	bool encontrado = false;
	for(int i = 0; i < cantidad; i++) {
		if(vectorEmpleados[i].getIdentificador() == identificador){
			//Cuando se encontró al empleado, se elimina luego con el cantidad--
			cout<<"\033[5;1;31m" <<"\nEmpleado eliminado:\n" <<vectorEmpleados[i].toString() <<"\033[0m" <<"\n\n" << endl;
			
			//Esto mueve los empleados hacia atrás para llenar el hueco
			for (int j = i; j < cantidad - 1; j++) {
				vectorEmpleados[j] = vectorEmpleados[j + 1];
			}
			cantidad--;
			encontrado = true;
			break;
		}
	}
	//de lo contrario o si es diferente a... muestra el mensaje
	if(!encontrado){
		cout<<"\033[5;1;31m" <<"No existe un empleado con este identificador: " <<identificador <<"\033[0m" <<endl;
	}	
}
//El método modificacionEmpleadosID3() permite al usuario modificar un empleado por su número de identificador
void ColeccionOpciones::modificacionEmpleadosID3(){
	cout<<"\033[0;31m" <<"\tIngrese los datos del empleado\n" <<"\033[0m" <<endl;
	string identificador;
	cout<< "Ingrese el identificador del empleado que desea modificar: ";
	cin>> identificador;
	cin.ignore(); // Ignorar el carácter de salto de línea en el búfer de entrada
	
	bool empleadoEncontrado = false;
	for(int i = 0; i < cantidad; i++){
		if(vectorEmpleados[i].getIdentificador() == identificador){
			// Se encontró al empleado, se procede a realizar la modificación
			empleadoEncontrado = true;
			
			string nombreApellido;
			cout<<"\033[0;1;30m" << "\nIngrese el nuevo nombre y apellido del empleado: " <<"\033[0m";
			getline(cin, nombreApellido);
			vectorEmpleados[i].setNombreApellido(nombreApellido);
			
			double salarioBase;
			cout<<"\033[0;1;30m" << "\nIngrese el nuevo salario base del empleado: " <<"\033[0m";
			cin>> salarioBase;
			cin.ignore(); // Ignorar el carácter de salto de línea en el búfer de entrada
			vectorEmpleados[i].setSalarioBase(salarioBase);
			
			double porcentajeDeduccionCCSS;
			cout<<"\033[0;1;30m" << "\nIngrese el nuevo porcentaje de deducción de la C.C.S.S.: " <<"\033[0m";
			cin>> porcentajeDeduccionCCSS;
			cin.ignore(); // Ignorar el carácter de salto de línea en el búfer de entrada
			vectorEmpleados[i].setPorcentajeDeduccionCCSS(porcentajeDeduccionCCSS);
			
			int aniosAntiguedad;
			cout<<"\033[0;1;30m" << "\nIngrese los nuevos años de antigüedad del empleado: " <<"\033[0m";
			cin>> aniosAntiguedad;
			cin.ignore(); // Ignorar el carácter de salto de línea en el búfer de entrada
			vectorEmpleados[i].setAniosAntiguedad(aniosAntiguedad);
			
			double porcentajeAumentoPorAntiguedad;
			cout<<"\033[0;1;30m" << "\nIngrese el nuevo porcentaje de aumento por antigüedad: " <<"\033[0m";
			cin>> porcentajeAumentoPorAntiguedad;
			cin.ignore(); // Ignorar el carácter de salto de línea en el búfer de entrada
			vectorEmpleados[i].setPorcentajeAumentoPorAntiguedad(porcentajeAumentoPorAntiguedad);
			
			double ahorroVoluntario;
			cout<<"\033[0;1;30m" << "\nIngrese el nuevo monto de ahorro voluntario del empleado: " <<"\033[0m";
			cin>> ahorroVoluntario;
			cin.ignore(); // Ignorar el carácter de salto de línea en el búfer de entrada
			vectorEmpleados[i].setAhorroVoluntario(ahorroVoluntario);
			
			cout<<"\033[5;1;32m" <<"\nEmpleado modificado exitosamente." <<"\033[0m" <<"\n\n" <<endl;
			break;
		}
	}
	if (!empleadoEncontrado){
		cout<<"\033[5;1;31m" <<"\nNo existe un empleado con este identificador: " <<identificador <<"\033[0m" <<endl;
	}
}

//El método aumentarSalarioTodosPorcentaje4() aumenta el salario general de los empleados indicando un porcentaje
void ColeccionOpciones::aumentarSalarioTodosPorcentaje4(){
	cout<<"\033[0;31m" <<"\tIngrese los datos requeridos\n" <<"\033[0m" <<endl;
	double porcentajeAumento;
	cout<<"\033[0;1;30m" <<"Digite el porcentaje de aumento: " <<"\033[0m";
	cin>> porcentajeAumento;
	
	for(int i = 0; i < cantidad; i++) {
		double salarioActual = vectorEmpleados[i].getSalarioBase();
		double aumento = salarioActual * (porcentajeAumento / 100);
		double nuevoSalario = salarioActual + aumento;
		vectorEmpleados[i].setSalarioBase(nuevoSalario);
	}
	
	cout<<"\033[5;1;32m" <<"\nEl salario de todos los empleados ha sido aumentado en un " <<porcentajeAumento <<"%\n\n" <<"\033[0m" <<endl;
}
//El método aumentarSalarioUnoPorID5() aumenta el salario de un empleado particular elegido por el usuario
void ColeccionOpciones::aumentarSalarioUnoPorID5(){
	cout<<"\033[0;31m" <<"\tIngrese los datos requeridos\n" <<"\033[0m" <<endl;
	string identificador;
	cout<<"\033[0;1;30m" <<"Digite el identificador del empleado: " <<"\033[0m";
	cin>> identificador;
	cin.ignore();
/* Al igual que en otros métodos, se utiliza cin.ignore() para omitir espacios en 
blanco, saltos de línea y también poder capturar todos los datos digitados por el
usuario, cuando no se utiliza el getline() se coloca el cin.ignore() después del cin>> */
	
	bool empleadoEncontrado = false;
	for(int i = 0; i < cantidad; i++){
		if (vectorEmpleados[i].getIdentificador() == identificador) {
			// Se encontró al empleado, se procede a aumentar el salario
			empleadoEncontrado = true;
			
			double porcentajeAumento;
			cout<<"\033[0;1;30m" <<"Ingrese el porcentaje de aumento del salario: " <<"\033[0m";
			cin>> porcentajeAumento;
			
			// Realizar el aumento del salario
			double salarioBase = vectorEmpleados[i].getSalarioBase();
			double aumento = salarioBase * (porcentajeAumento / 100);
			double nuevoSalario = salarioBase + aumento;
			vectorEmpleados[i].setSalarioBase(nuevoSalario);
			
			cout<<"\033[5;1;32m" <<"El salario del empleado ha sido aumentado" <<"\033[0m" << endl;
			break;
		}
	}
	if(!empleadoEncontrado){
		cout<<"\033[5;1;31m" <<"No existe un empleado con este identificador: " <<identificador <<"\033[0m" <<endl;
	}	
}
//El método listaMejoresSalarios6() muestra una lista con los mejores 5 salarios
void ColeccionOpciones::listaMejoresSalarios6(){
	ColeccionEmpleados ordenamientoBurbuja;
	for(int i = 0; i < cantidad; i++){
		for(int j = i + 1; j < cantidad; j++){
			if(vectorEmpleados[j].getSalarioBase() > vectorEmpleados[i].getSalarioBase()){
				ordenamientoBurbuja = vectorEmpleados[i];
				vectorEmpleados[i] = vectorEmpleados[j];
				vectorEmpleados[j] = ordenamientoBurbuja;
			}
		}
	}
	cout<< "\033[1;31m" <<"Los 5 mejores salarios de la empresa\n" <<"\033[0m" <<endl;
	cout<<"\033[0;1;30m" << "\tNombre" <<"\t\tSalario"  <<"\033[0m" <<"\n" <<endl;
	for (int i = 0; i < 5; i++) { //Da nombre del empleado
		cout<< i+1 <<" - ";
		cout<< vectorEmpleados[i] .getNombreApellido() <<"\t\t"; 
		cout<< vectorEmpleados[i] .getSalarioBase() <<"\n"; 
		for (int j = 0; j < vectorEmpleados[i] .getSalarioBase(); j++){
		}
		cout<<endl;
	}
}
//El método listaEmpleadosPorOrdenSalario7() muestra una lista ordenada de los salarios de menor a mayor 
void ColeccionOpciones::listaEmpleadosPorOrdenSalario7(){
	ColeccionEmpleados ordenamientoBurbuja;

	for(int i = 0; i < cantidad - 1; i++){
		for(int j = i + 1; j < cantidad; j++){
			if(vectorEmpleados[j] .getSalarioBase() < vectorEmpleados[i].getSalarioBase()){
				ordenamientoBurbuja = vectorEmpleados[i];
				vectorEmpleados[i] = vectorEmpleados[j];
				vectorEmpleados[j] = ordenamientoBurbuja;
			}
		}
	}
	cout<< "\033[1;31m" <<"Lista de empleados por orden de salario de menor a mayor\n" <<"\033[0m" <<endl;
	cout<<"\033[0;1;30m" << "\tNombre" <<"\t\t\t\tSalario"  <<"\033[0m" <<"\n" <<endl;
	for(int i = 0; i < cantidad; i++){
		cout<< i+1 <<" - ";
		if(vectorEmpleados[i] .getSalarioBase()!= 0){
			cout<< setw(20)<<left << vectorEmpleados[i] .getNombreApellido() <<"\t\t"; 
			cout<< vectorEmpleados[i] .getSalarioBase() <<"\n\n";
		}
	}	cout<<endl;
}
//El método listaEmpleadosPorOrdenID8() muestra una lista ordenada de los empleados de menor a mayor por ID
void ColeccionOpciones::listaEmpleadosPorOrdenID8(){
	ColeccionEmpleados ordenamientoBurbuja;
	
	for(int i = 0; i < cantidad - 1; i++){
		for(int j = i + 1; j < cantidad; j++){
			if(vectorEmpleados[j] .getIdentificador() < vectorEmpleados[i].getIdentificador()){
				ordenamientoBurbuja = vectorEmpleados[i];
				vectorEmpleados[i] = vectorEmpleados[j];
				vectorEmpleados[j] = ordenamientoBurbuja;
			}
		}
	}
	cout<< "\033[1;31m" <<"Lista de empleados por orden de ID de menor a mayor\n" <<"\033[0m" <<endl;
	cout<< "\033[0;1;30m" << "\tNombre" <<"\t\t\t\tID"  <<"\033[0m" <<"\n" <<endl;
	for(int i = 0; i < cantidad; i++){
		cout<< i+1 <<" - ";
			cout<< setw(20)<<left << vectorEmpleados[i] .getNombreApellido() <<"\t\t"; 
			cout<< vectorEmpleados[i] .getIdentificador() <<"\n\n";
	}	cout<<endl;
}
//El método buscarInfoEmpleadoPorID9() permite al usuario buscar información de un empleado particular por ID
void ColeccionOpciones::buscarInfoEmpleadoPorID9(){
	cout<<"\033[0;31m" <<"\tIngrese los datos requeridos\n" <<"\033[0m" <<endl;
	string identificador;
	cout<<"\033[0;1;30m" <<"Digite el identificador del empleado: " <<"\033[0m";
	cin>> identificador;
	
	bool empleadoEncontrado = false;
	
	for(int i = 0; i < cantidad; i++) {
		if(vectorEmpleados[i].getIdentificador() == identificador){
			empleadoEncontrado = true;
			cout<< "Informacion del empleado:\n\n";
			cout<< vectorEmpleados[i].toString() <<endl;
			break;
		}
	}
	if(!empleadoEncontrado) {
		cout<<"\033[5;1;31m" <<"No existe un empleado con este identificador: " <<identificador <<"\033[0m" <<endl;
	}	
}
//El método buscarInfoEmpleadoPorNombre10() permite al usuario buscar información de un empleado particular por nombre
void ColeccionOpciones::buscarInfoEmpleadoPorNombre10(){
	cout<<"\033[0;31m" <<"\tIngrese los datos requeridos\n" <<"\033[0m" <<endl;
	string nombre;
	cout<<"\033[0;1;30m" <<"Digite el nombre completo del empleado: " <<"\033[0m";
	cin.ignore();
	getline(cin, nombre);
/*El cin.ignore() se utiliza en conjunto con getline(cin, nombre) para 
descartar el carácter de salto de línea pendiente en el búfer de entrada.
Se utiliza getline(cin, nombre) en lugar de cin >> nombre para leer el 
nombre completo, incluyendo espacios en blanco */
	
	bool empleadoEncontrado = false;
	
	for(int i = 0; i < cantidad; i++) {
		if(vectorEmpleados[i].getNombreApellido() == nombre){
			empleadoEncontrado = true;
			cout<< "Informacion del empleado:\n\n";
			cout<< vectorEmpleados[i].toString() <<endl;
			break;
		}
	}
	if(!empleadoEncontrado) {
		cout<<"\033[5;1;31m" <<"No existe un empleado con este nombre: " <<nombre <<"\033[0m" <<endl;
	}	
}
//El método calcularPromedioSalarios11() calcula el promedio de salarios total
void ColeccionOpciones::calcularPromedioSalarios11(){
	double sumaSalarios = 0.0;
	double promedioSalarios = 0.0;
	
	for(int i = 0; i < cantidad; i++){
		sumaSalarios += vectorEmpleados[i] .getSalarioBase();
	}
	if(cantidad > 0){
		promedioSalarios = sumaSalarios / cantidad;
	}
	cout<< "\033[1;31m" << "El promedio de los salarios de la empresa es de: "  <<"\033[0m" <<promedioSalarios <<"\n" <<endl;
}
//El método calcularTodosSalarios12() calcula el total de salarios y de ahorros
void ColeccionOpciones::calcularTodosSalarios12(){
	long totalSalarios = 0.0;
	double totalAhorros = 0.0;
	
	cout<< "\033[1;31m" <<"Salarios con los totales de salario, deducciones y ahorros.\n" <<"\033[0m" <<endl;
	cout<< "\033[0;1;30m" <<"\tNombre" <<"\t\tSalario" <<"\t\tAhorros" <<"\033[0m" <<"\n" <<endl;
	for(int i = 0; i < cantidad; i ++){
		/* <<setw(20)<<left sirve para dar un espaciado parejo con ayuda de \t, el (20) son la cantidad de espacios */
		cout<< setw(20)<<left <<vectorEmpleados[i] .getNombreApellido() <<"\t" 
			<< vectorEmpleados[i] .getSalarioBase() <<"\t\t" <<vectorEmpleados[i] .getAhorroVoluntario() <<"\n" <<endl;
		
		totalSalarios += vectorEmpleados[i] .getSalarioBase();
		//totalDeducciones += vectorEmpleados[i] .calcularDeducciones();
		totalAhorros += vectorEmpleados[i] .getAhorroVoluntario();
	}
	cout<< "\033[0;1;30m" <<"Total de salarios: " <<"\033[0m" <<totalSalarios <<endl;
	cout<< "\033[0;1;30m" <<"Total de ahorros: " <<"\033[0m"  <<totalAhorros <<"\n" <<endl;
}
//El método toString() itera ciertos datos del empleado, sin esto no imprimiría todos los métodos anteriores que hacen uso del vector
string ColeccionOpciones::toString(){
	stringstream datos;
	if(cantidad >= 0){
		for(int i = 0; i < cantidad; i++){
			datos<< "\033[0;31m" <<"Informacion del empleado #" <<i+1 <<"\033[0m" <<"\n" <<endl;
			datos<< vectorEmpleados[i].toString()<<endl;
			datos<< "---------------------------" <<endl;
		}
	}else{}
	return datos.str();
}
