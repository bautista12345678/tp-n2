#include "ccliente.h"
#include <sstream>
ccliente::ccliente(string _nombre, string _DNI)
{
	nombre = _nombre;
	DNI = _DNI;
}

ccliente::~ccliente()
{
}

void ccliente::setnombre(string _nombre)
{
	nombre = _nombre;
}

string ccliente::getnombre()
{
	return nombre;
}

void ccliente::setDNI(string _DNI)
{
	DNI = _DNI;
}

string ccliente::getDNI()
{
	return DNI;
}

string ccliente::to_string()
{
	stringstream ss;
	ss << "nombre: " << nombre << endl;
	ss << "DNI: " << DNI << endl;
	return ss.str();
}

void ccliente::imprimir()
{
	cout << to_string() << endl;
}
