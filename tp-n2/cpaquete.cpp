#include "cpaquete.h"
#include <sstream>

cpaquete::cpaquete(Fecha * _fechaReserva, EnumFormaDePago _formaPago, cpasaje *_pasaje, cestadia *_estadia):creserva(_fechaReserva, _formaPago)
{
	pasaje->setcantPasajeros(_pasaje->getcantPasajeros());
	pasaje->settipoAsiento(_pasaje->gettipoAsiento());
	estadia->setnumeroHabitaciones(_estadia->getnumeroHabitaciones());
	estadia->setdias(_estadia->getdias());
}

cpaquete::~cpaquete()
{
}

void cpaquete::setpasaje(cpasaje *_pasaje)
{
	*pasaje = *_pasaje;
}

void cpaquete::setestadia(cestadia *_estadia)
{
	*estadia = *_estadia;
}

cpasaje* cpaquete::getpasaje()
{
	return pasaje;
}

cestadia* cpaquete::getestadia()
{
	return estadia;
}

string cpaquete::to_string()
{
	stringstream ss;
	ss << "NumeroReserva: " << getNumeroReserva() << endl;
	ss << "fecha de reserva: " << fechaReserva->getdia()<<fechaReserva->getmes() << fechaReserva->getanio() << endl;
	ss << "forma de pago: " << getformaPago() << endl;
	ss << "abono: " << getabono() << endl;
	ss << "Cantidad de pasajeros: " << pasaje->getcantPasajeros() << endl;
	ss << "tipo de asiento: " << pasaje->gettipoAsiento() << endl;
	//ss << "fechaIngreso: " << estadia->getfechaIngreso()->getdia() << endl;
	//ss << "fechaSalida: " << estadia->getfechaSalida()->getdia()<< endl;
	ss << "precioDia: " << estadia->getprecioDia() << endl;
	ss << "nombreHotel: " << estadia->getnombreHotel() << endl;
	ss << "numeroHabitaciones: " << estadia->getnumeroHabitaciones() << endl;
	return ss.str();
}

void cpaquete::imprimir()
{
	cout << to_string() << endl;
}

float cpaquete::calcularPrecioT()
{
	float aux;
	aux = pasaje->getprecioT() + estadia->getprecioT();
	precioT =( aux * 10) / 100;
	if (formaPago == 0)
	{
		precioT = precioT - ((precioT * 5) / 100);
	}else if (formaPago == 2) {
		precioT = precioT + ((precioT * 10) / 100);
	}
	else
	{
		precioT = precioT;
	}

	return precioT;
}
