#include "cestadia.h"

cestadia::cestadia(string _fechaReserva, EnumFormaDePago _formaPago):creserva( _fechaReserva, _formaPago)
{
}

cestadia::~cestadia()
{
}

void cestadia::setfechaIngreso(string _fechaIngreso)
{
	fechaIngreso = _fechaIngreso;
}

string cestadia::getfechaIngreso()
{
	return fechaIngreso;
}

void cestadia::setfechaSalida(string _fechaSalida)
{
	fechaSalida = _fechaSalida;
}

string cestadia::getfechaSalida()
{
	return fechaSalida;
}

void cestadia::setprecioDia(string _precioDia)
{
	precioDia = _precioDia;
}

string cestadia::getprecioDia()
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
