#include "creserva.h"



creserva::creserva()
{
}

creserva::~creserva()
{
}

int creserva::getNumeroReserva()
{
	return NumeroReserva;
}

void creserva::setfechaReserva(string _fechaReserva)
{
	fechaReserva = _fechaReserva;
}

string creserva::getfechaReserva()
{
	return fechaReserva;
}

void creserva::setprecioT(float _precioT)
{
	precioT = _precioT;
}

float creserva::getprecioT()
{
	return precioT;
}

void creserva::setformaPago(EnumFormaDePago _formaPago)
{
	formaPago = _formaPago;
}

EnumFormaDePago creserva::getformaPago()
{
	return formaPago;
}

void creserva::setabono(bool _abono)
{
	abono = _abono;
}

bool creserva::getabono()
{
	return abono;
}

void creserva::setcliente(ccliente _cliente)
{
	cliente = _cliente;
}

ccliente creserva::getcliente()
{
	return cliente;
}

int creserva::getmax()
{
	return max;
}

string creserva::to_string()
{
	return string();
}

void creserva::imprimir()
{
}
