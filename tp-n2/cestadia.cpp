#include "cestadia.h"
#include <sstream>
cestadia::cestadia(Fecha* _fechaReserva, EnumFormaDePago _formaPago, int _numeroHabitaciones, int _dias):creserva( _fechaReserva, _formaPago)
{
	numeroHabitaciones = _numeroHabitaciones;
	dias = _dias;
}

cestadia::~cestadia()
{
}

void cestadia::setfechaIngreso(Fecha *_fechaIngreso)
{
	fechaIngreso = _fechaIngreso;
}

Fecha cestadia::getfechaIngreso()
{
	return *fechaIngreso;
}

void cestadia::setfechaSalida(Fecha *_fechaSalida)
{
	fechaSalida = _fechaSalida;
}

Fecha cestadia::getfechaSalida()
{
	return *fechaSalida;
}

void cestadia::setprecioDia(float _precioDia)
{
	precioDia = _precioDia;
}

float cestadia::getprecioDia()
{
	return precioDia;
}

void cestadia::setnombreHotel(string _nombreHotel)
{
	nombreHotel = _nombreHotel;
}

string cestadia::getnombreHotel()
{
	return nombreHotel;
}

void cestadia::setnumeroHabitaciones(int _numeroHabitaciones)
{
	numeroHabitaciones = _numeroHabitaciones;
}

int cestadia::getnumeroHabitaciones()
{
	return numeroHabitaciones;
}
void cestadia::setdias(int _dias)
{
	dias = _dias;
}
int cestadia::getdias()
{
	return dias;
}
string cestadia::to_string()
{
	stringstream ss;
	ss << "NumeroReserva: " << getNumeroReserva() << endl;
	ss << "fecha de reserva: " <<fechaReserva->getdia() << fechaReserva->getmes() << fechaReserva->getanio() << endl;
	ss << "forma de pago: " << getformaPago() << endl;
	ss << "abono: " << getabono() << endl;
	ss << "fechaIngreso: " << fechaIngreso << endl;
	ss << "fechaSalida: " << fechaSalida << endl;
	ss << "precioDia: " << precioDia << endl;
	ss << "nombreHotel: " << nombreHotel << endl;
	ss << "numeroHabitaciones: " << numeroHabitaciones << endl;
	return ss.str();
}
void cestadia::imprimir()
{
	cout << to_string() << endl;
}
float cestadia::calcularPrecioT()
{
	float aux;
	aux= precioDia* dias;
	aux = aux * numeroHabitaciones;
	precioT= aux;
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
