#include "Fecha.h"

Fecha::Fecha()
{
}

Fecha::~Fecha()
{
}

void Fecha::setdia(int _dia)
{
	dia = _dia;
}

void Fecha::setmes(int _mes)
{
	mes = _mes;
}

void Fecha::setanio(int _anio)
{
	anio = _anio;
}

int Fecha::getdia()
{
	return dia;
}

int Fecha::getmes()
{
	return mes;
}

int Fecha::getanio()
{
	return anio;
}
