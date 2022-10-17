#include "creserva.h"
#include "cagencia.cpp"
//#include <sstream>

int creserva::NumeroReserva = 0;
int creserva::max = 0;

creserva::creserva(Fecha* _fechaReserva, EnumFormaDePago _formaPago)
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

void creserva::setfechaReserva(Fecha* _fechaReserva)
{
	fechaReserva = _fechaReserva;
}

Fecha* creserva::getfechaReserva()
{
	return fechaReserva;
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

void creserva::setcliente(ccliente *_cliente)
{
	cliente = _cliente;
	
}

ccliente* creserva::getcliente()
{
	return this->cliente;
}

int creserva::getmax()
{
	if (precioT > max)
	{
		max = precioT;
	}
	return max;
}

/*string creserva::to_string()
{
	/*stringstream ss;
	ss << "NumeroReserva: " << NumeroReserva << endl;
	ss << "fecha de reserva: " << fechaReserva << endl;
	ss << "forma de pago: " << formaPago << endl;
	ss << "abono: " << abono << endl;
	return ss.str();
}

void creserva::imprimir()
{
	/*cout << to_string() << endl;
}
*/