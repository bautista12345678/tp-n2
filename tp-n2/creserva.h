#pragma once
#include <iostream>
#include <string>
#include "EnumFormaDePago.h"
#include "ccliente.h"
using namespace std;
class creserva
{
protected:
	static int NumeroReserva;
	string fechaReserva;
	float precioT;
	EnumFormaDePago formaPago;
	bool abono;
	ccliente cliente;
	static int max;

public:
	creserva(string _fechaReserva, EnumFormaDePago _formaPago);
	~creserva();
	virtual float calcularPrecioT()=0;
	 int getNumeroReserva();
	 void setfechaReserva(string _fechaReserva);
	 string getfechaReserva();
	 void setprecioT(float _precioT);
	 float getprecioT();
	 void setformaPago(EnumFormaDePago _formaPago);
	 EnumFormaDePago getformaPago();
	 void setabono(bool _abono);
	 bool getabono();
	 void setcliente(ccliente _cliente);
	 ccliente getcliente();
	 int getmax();
	 string to_string();
	 void imprimir();
};

