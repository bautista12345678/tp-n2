#include "cpasaje.h"
#include <sstream>
cpasaje::cpasaje(Fecha * _fechaReserva, EnumFormaDePago _formaPago, int _cantPasajeros,
	EnumTipoDeAsiento _tipoAsiento, clista<cvuelo>* _ListaVuelos):creserva( _fechaReserva, _formaPago)
{
	cantPasajeros = _cantPasajeros;
	tipoAsiento = _tipoAsiento;
	ListaVuelos = _ListaVuelos;
}

cpasaje::~cpasaje()
{
	for (int i = 0; i < ListaVuelos->getcantidad(); i++) {
		ListaVuelos->getLista()[i] = nullptr;
	}
	delete ListaVuelos;
}

/*void cpasaje::setlistaVuelos(clista<cvuelo>* _ListaVuelos)
{
	ListaVuelos = _ListaVuelos;
}
*/


clista<cvuelo> cpasaje::getListaVuelos()
{
	return *ListaVuelos;
}

void cpasaje::setcantPasajeros(int _cantPasajeros)
{
	cantPasajeros = _cantPasajeros;
}

int cpasaje::getcantPasajeros()
{
	return cantPasajeros;
}

void cpasaje::settipoAsiento(EnumTipoDeAsiento _tipoAsiento)
{
	tipoAsiento = _tipoAsiento;
}

EnumTipoDeAsiento cpasaje::gettipoAsiento()
{
	return tipoAsiento;
}

string cpasaje::to_string()
{
	stringstream ss;
	ss << "NumeroReserva: " << getNumeroReserva() << endl;
	ss << "fecha de reserva:%d/%d/%d " << fechaReserva->getdia()<< fechaReserva->getmes()<< fechaReserva->getanio()<<endl;
	ss << "forma de pago: " << getformaPago() << endl;
	ss << "abono: " << getabono() << endl;
	ss << "Cantidad de pasajeros: " << cantPasajeros << endl;
	ss << "tipo de asiento: " << tipoAsiento << endl;
	return ss.str();
}

void cpasaje::imprimir()
{
	cout << to_string() << endl;
}
 
float cpasaje::calcularPrecioT()
{
	float aux,acum=0;
	
	for (int i = 0; i <ListaVuelos->getcantidad();i++)
	{
		acum = acum + ListaVuelos->getLista()[i]->getprecio();
	}
	aux= acum * cantPasajeros;
	if (tipoAsiento == 1)
	{
		precioT= aux + (aux / 2);
	}
	else if (tipoAsiento == 2)
	{
		precioT= aux + aux + (aux / 2);
	}
	else
	{
		 precioT= precioT;
	}
	if (formaPago == 0)
	{
		precioT = precioT - ((precioT * 5) / 100);
	}
	else if (formaPago == 2) {
		precioT = precioT + ((precioT * 10) / 100);
	}
	else
	{
		precioT = precioT;
	}
	return precioT;
}