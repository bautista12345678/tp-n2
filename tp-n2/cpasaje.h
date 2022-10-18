#pragma once
#include "cvuelo.h"
#include "clista.h"
#include "EnumTipoDeAsiento.h"
#include "creserva.h"
class cpasaje:public creserva
{
private:
	clista<cvuelo>* ListaVuelos;
	int cantPasajeros;
	EnumTipoDeAsiento tipoAsiento;
public:
	cpasaje(Fecha * _fechaReserva, EnumFormaDePago _formaPago,int _cantPasajeros, EnumTipoDeAsiento _tipoAsiento, clista<cvuelo>* _ListaVuelos);
	~cpasaje();
	//void setlistaVuelos(clista<cvuelo>* _ListaVuelos);
	clista<cvuelo> getListaVuelos();
	void setcantPasajeros(int _cantPasajeros);
	int getcantPasajeros();
	void settipoAsiento(EnumTipoDeAsiento _tipoAsiento);
	EnumTipoDeAsiento gettipoAsiento();
	string to_string();
	void imprimir();
	float calcularPrecioT();

};

