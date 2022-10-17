#pragma once
#include <iostream>
#include <string>
#include "cestadia.h"
#include "cpasaje.h"
class cpaquete:public creserva
{
private:
	cpasaje *pasaje;
	cestadia *estadia;
public: 
	cpaquete(Fecha * _fechaReserva, EnumFormaDePago _formaPago, cpasaje *_pasaje, cestadia *_estadia);
	~cpaquete();
	void setpasaje(cpasaje *_pasaje);
	void setestadia(cestadia *_estadia);
	cpasaje* getpasaje();
	cestadia* getestadia();
	string to_string();
	void imprimir();
	float calcularPrecioT();
};

