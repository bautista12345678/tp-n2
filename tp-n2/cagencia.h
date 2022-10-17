#pragma once
#include "clista.h"
#include "creserva.h"
#include "creserva.h"
#include "ccliente.h"

class cagencia
{
	
private:
	clista<creserva>* listaReservas = nullptr;
	clista<ccliente>* listaClientes = nullptr;
	clista<creserva>* lista5dias = nullptr;
public:
	cagencia();
	~cagencia();
	clista<creserva> getlistaReservas();
	clista<ccliente> getlistaClientes();
	clista<creserva> getlista5dias();
	void generarReserva(creserva* _reserva);
	void menor5dias();
	void clientes();
	void gananciasTotales();
	float totalAdeudado();
	float totalRecaudado();
};
