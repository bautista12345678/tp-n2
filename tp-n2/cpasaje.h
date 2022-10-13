#pragma once
#include "cvuelo.h"
#include "clista.h"
#include "EnumTipoDeAsiento.h"
#include "creserva.h"
class cpasaje:public creserva
{
private:
	clista<cvuelo>* ListaVuelos = nullptr;
	int cantPasajeros;
	EnumTipoDeAsiento tipoAsiento;
public:
	cpasaje(string _fechaReserva, EnumFormaDePago _formaPago,int _cantPasajeros, EnumTipoDeAsiento _tipoAsiento);
	~cpasaje();
	clista<cvuelo> getListaVuelos();
	void setcantPasajeros(int _cantPasajeros);
	int getcantPasajeros();
	void settipoAsiento(EnumTipoDeAsiento _tipoAsiento);
	EnumTipoDeAsiento gettipoAsiento();
	string to_string();
	void imprimir();


};

