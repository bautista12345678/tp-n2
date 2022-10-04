#include "ccliente.h"

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
	return string();
}

void ccliente::imprimir()
{
}
