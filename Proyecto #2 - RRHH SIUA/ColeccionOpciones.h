#ifndef COLECCIONOPCIONES_H
#define COLECCIONOPCIONES_H
#include "ColeccionEmpleados.h"

using namespace std;

class ColeccionOpciones {
public:
	ColeccionOpciones();
	//opciones del menú
	void listaEmpleados0();
	void registrarEmpleado1();
	void eliminarPorID2();
	void modificacionEmpleadosID3();
	void aumentarSalarioTodosPorcentaje4();
	void aumentarSalarioUnoPorID5();
	void listaMejoresSalarios6();
	void listaEmpleadosPorOrdenSalario7();
	void listaEmpleadosPorOrdenID8();
	void buscarInfoEmpleadoPorID9();
	void buscarInfoEmpleadoPorNombre10();
	void calcularPromedioSalarios11();
	void calcularTodosSalarios12();
	
	void baseDatosEmpleados(ColeccionEmpleados lista);
	string toString();
	
private:
	ColeccionEmpleados vectorEmpleados[50];
	int cantidad, tamanio;
};

#endif
