#pragma once
#include "creserva.h"

class cestadia:public creserva
{
private:
	Fecha *fechaIngreso;
	Fecha *fechaSalida;
	float precioDia;
	string nombreHotel;
	int numeroHabitaciones;
		int dias;
public:
	cestadia(Fecha* _fechaReserva, EnumFormaDePago _formaPago, int _numeroHabitaciones,int _dias);
	~cestadia();
	void setfechaIngreso(Fecha *_fechaIngreso);
	Fecha* getfechaIngreso();
	void setfechaSalida(Fecha * _fechaSalida);
	Fecha* getfechaSalida();
	void setprecioDia(float _precioDia);
	float getprecioDia();
	void setnombreHotel(string _nombreHotel);
	string getnombreHotel();
	void setnumeroHabitaciones(int _numeroHabitaciones);
	int getnumeroHabitaciones();
	void setdias(int _dias);
	int getdias();
	string to_string();
	void imprimir();
	float calcularPrecioT();
};

