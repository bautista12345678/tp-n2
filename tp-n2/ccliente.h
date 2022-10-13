#pragma once
#include <iostream>
using namespace std;
class ccliente
{
private:
	 string nombre;
	string DNI;
public:
	ccliente(string _nombre, string _DNI);
	~ccliente();
	void setnombre(string _nombre);
	string getnombre();
	void setDNI(string _DNI);
	string getDNI();
	string to_string();
	void imprimir();
};

