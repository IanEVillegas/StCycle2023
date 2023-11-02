#ifndef COLECCIONEMPLEADOS_H
#define COLECCIONEMPLEADOS_H

#include <iostream>
#include <sstream>

using namespace std;

class ColeccionEmpleados {
public:
	ColeccionEmpleados();
	ColeccionEmpleados(string nombreApellido,
					   string identificador,
					   double salarioBase,
					   double porcentajeDeduccionCCSS,
					   int aniosAntiguedad,
					   double porcentajeAumentoPorAntiguedad,
					   double ahorroVoluntario);
	~ColeccionEmpleados();
	
	//sets
	void setNombreApellido(string nombreApellido);
	void setIdentificador(string identificador);
	void setSalarioBase(double salarioBase);
	void setPorcentajeDeduccionCCSS(double porcentajeDeduccionCCSS);
	void setAniosAntiguedad(int aniosAntiguedad);
	void setPorcentajeAumentoPorAntiguedad(double porcentajeAumentoPorAntiguedad);
	void setAhorroVoluntario(double ahorroVoluntario);
	//gets
	string getNombreApellido();
	string getIdentificador();
	double getSalarioBase();
	double getPorcentajeDeduccionCCSS();
	int getAniosAntiguedad();
	double getPorcentajeAumentoPorAntiguedad();
	double getAhorroVoluntario();
	//toString - método
	string toString();
	
private:
	string nombreApellido;
	string identificador;
	double salarioBase;
	double porcentajeDeduccionCCSS;
	int aniosAntiguedad;
	double porcentajeAumentoPorAntiguedad;
	double ahorroVoluntario;
};

#endif
