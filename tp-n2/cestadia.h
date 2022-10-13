#pragma once
#include "creserva.h"
class cestadia:public creserva
{
private:
	string fechaIngreso;
	string fechaSalida;
	string precioDia;
	string nombreHotel;
	int numeroHabitaciones;
public:
	cestadia(string _fechaReserva, EnumFormaDePago _formaPago);
	~cestadia();
	void setfechaIngreso(string _fechaIngreso);
	string getfechaIngreso();
	void setfechaSalida(string _fechaSalida);
	string getfechaSalida();
	void setprecioDia(string _precioDia);
	string getprecioDia();
	void setnombreHotel(string _nombreHotel);
	string getnombreHotel();
	void setnumeroHabitaciones(int _numeroHabitaciones);
	int getnumeroHabitaciones();
};

