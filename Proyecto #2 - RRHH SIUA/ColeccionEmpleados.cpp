#include "ColeccionEmpleados.h"

ColeccionEmpleados::ColeccionEmpleados() {
	nombreApellido = "";
	identificador = "";
	salarioBase = 0.0;
	porcentajeDeduccionCCSS = 0.0;
	aniosAntiguedad = 0;
	porcentajeAumentoPorAntiguedad = 0.0;
	ahorroVoluntario = 0.0;
}

ColeccionEmpleados::ColeccionEmpleados(string nombreApellido,
									   string identificador,
									   double salarioBase,
									   double porcentajeDeduccionCCSS,
									   int aniosAntiguedad,
									   double porcentajeAumentoPorAntiguedad,
									   double ahorroVoluntario){
	
	this -> nombreApellido = nombreApellido;
	this -> identificador = identificador;
	this -> salarioBase = salarioBase;
	this -> porcentajeDeduccionCCSS = porcentajeDeduccionCCSS;
	this -> aniosAntiguedad = aniosAntiguedad;
	this -> porcentajeAumentoPorAntiguedad = porcentajeAumentoPorAntiguedad;
	this -> ahorroVoluntario = ahorroVoluntario;
}

ColeccionEmpleados::~ColeccionEmpleados() {
	
}

//sets
void ColeccionEmpleados::setNombreApellido(string nombreApellido){
	this -> nombreApellido = nombreApellido;
}
void ColeccionEmpleados::setIdentificador(string identificador){
	this -> identificador = identificador;
}
void ColeccionEmpleados::setSalarioBase(double salarioBase){
	this -> salarioBase = salarioBase;
}
void ColeccionEmpleados::setPorcentajeDeduccionCCSS(double porcentajeDeduccionCCSS){
	this -> porcentajeDeduccionCCSS = porcentajeDeduccionCCSS;
}
void ColeccionEmpleados::setAniosAntiguedad(int aniosAntiguedad){
	this -> aniosAntiguedad = aniosAntiguedad;
}
void ColeccionEmpleados::setPorcentajeAumentoPorAntiguedad(double porcentajeAumentoPorAntiguedad){
	this -> porcentajeAumentoPorAntiguedad = porcentajeAumentoPorAntiguedad;
}
void ColeccionEmpleados::setAhorroVoluntario(double ahorroVoluntario){
	this -> ahorroVoluntario = ahorroVoluntario;
}

//gets
string ColeccionEmpleados::getNombreApellido(){
	return nombreApellido;
}
string ColeccionEmpleados::getIdentificador(){
	return identificador;
}
double ColeccionEmpleados::getSalarioBase(){
	return salarioBase;
}
double ColeccionEmpleados::getPorcentajeDeduccionCCSS(){
	return porcentajeDeduccionCCSS;
}
int ColeccionEmpleados::getAniosAntiguedad(){
	return aniosAntiguedad;
}
double ColeccionEmpleados::getPorcentajeAumentoPorAntiguedad(){
	return porcentajeAumentoPorAntiguedad;
}
double ColeccionEmpleados::getAhorroVoluntario(){
	return ahorroVoluntario;
}

//El método toString muestra los lemas de información que despúes serán utilizados en la clase ColeccionOpciones
string ColeccionEmpleados::toString(){
	stringstream datosEmpleado;
	
	datosEmpleado<<"\033[0;1;30m" <<"Nombre y apellido: " <<"\033[0m" <<getNombreApellido() <<endl;
	datosEmpleado<<"\033[0;1;30m" << "Identificador: " <<"\033[0m" <<getIdentificador() <<endl;
	datosEmpleado<<"\033[0;1;30m" << "Salario base en colones: " <<"\033[0m" <<getSalarioBase() <<endl;
	datosEmpleado<<"\033[0;1;30m" << "Porcentaje de deduccion de la CCSS: " <<"\033[0m" <<getPorcentajeDeduccionCCSS() <<endl;
	datosEmpleado<<"\033[0;1;30m" << "Anios de antiguedad en la empresa: " <<"\033[0m" <<getAniosAntiguedad() <<endl;
	datosEmpleado<<"\033[0;1;30m" << "Porcentaje de aumento por anio de antiguedad: " <<"\033[0m" <<getPorcentajeAumentoPorAntiguedad() <<endl;
	datosEmpleado<<"\033[0;1;30m" << "Ahorro voluntario en colones: " <<"\033[0m" <<getAhorroVoluntario() <<endl;
	
	return datosEmpleado.str(); 
}
