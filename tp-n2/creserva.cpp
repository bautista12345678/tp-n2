#include "creserva.h"
//#include <sstream>

int creserva::NumeroReserva = 0;
int creserva::max = 0;

creserva::creserva(string _fechaReserva, EnumFormaDePago _formaPago)
{
	NumeroReserva = NumeroReserva + 1;
	fechaReserva=_fechaReserva;
	formaPago = _formaPago; 

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
	/*stringstream ss;
	ss << "NumeroReserva: " << NumeroReserva << endl;
	ss << "fecha de reserva: " << fechaReserva << endl;
	ss << "forma de pago: " << formaPago << endl;
	ss << "abono: " << abono << endl;
	return ss.str();*/
}

void creserva::imprimir()
{
	/*cout << to_string() << endl;*/
}
