#pragma once
#include "clista.h"
#include "creserva.h"

class cagencia
{
private:
	clista<creserva>* listaReservas;
	clista<ccliente>* listaClientes;
	clista<creserva>* lista5dias;
public:
	cagencia(clista<creserva>* _listaReservas, clista<ccliente>* _listaClientes, clista<creserva>* _lista5dias);
	~cagencia();
	clista<creserva> *getlistaReservas();
	clista<ccliente>* getlistaClientes();
	clista<creserva>* getlista5dias();
	void generarReserva(creserva* _reserva);
	void menor5dias();
	void clientes();
	void gananciasTotales();
	float totalAdeudado();
	float totalRecaudado();
	float aplicarDescuento();
};
