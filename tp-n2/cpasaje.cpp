#include "cpasaje.h"
#include <sstream>
cpasaje::cpasaje(string _fechaReserva, EnumFormaDePago _formaPago, int _cantPasajeros,
	EnumTipoDeAsiento _tipoAsiento):creserva( _fechaReserva, _formaPago)
{
	cantPasajeros = _cantPasajeros;
	tipoAsiento = _tipoAsiento;
}

cpasaje::~cpasaje()
{
	for (int i = 0; i < ListaVuelos->getcantidad(); i++) {
		ListaVuelos->getLista()[i] = nullptr;
	}
	delete ListaVuelos;
}

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
	ss << "fecha de reserva: " << getfechaReserva() << endl;
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
 
float creserva::calcularPrecioT()
{


}