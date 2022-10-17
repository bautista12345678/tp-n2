#pragma once
#include <iostream>
#include <string>
#include "EnumFormaDePago.h"
#include "ccliente.h"
#include "cagencia.h"
#include "Fecha.h"
using namespace std;
class creserva
{
	//friend cagencia;
protected:
	static int NumeroReserva;
	Fecha *fechaReserva;
	float precioT;
	EnumFormaDePago formaPago;
	bool abono;//true=si,false=no
	ccliente cliente;
	static int max;

public:
	creserva(Fecha *_fechaReserva, EnumFormaDePago _formaPago);
	~creserva();
	virtual float calcularPrecioT()=0;
	 int getNumeroReserva();
	 void setfechaReserva(Fecha *_fechaReserva);
	 Fecha getfechaReserva();
	 float getprecioT();
	 void setformaPago(EnumFormaDePago _formaPago);
	 EnumFormaDePago getformaPago();
	 void setabono(bool _abono);
	 bool getabono();
	 void setcliente(ccliente _cliente);
	 ccliente getcliente();
	 int getmax();
	 virtual string to_string()=0;
	 virtual void imprimir()=0;
};

