#pragma once
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha(int _dia, int mes, int anio);
	~Fecha();
	void setdia(int _dia);
	void setmes(int _mes);
	void setanio(int _anio);
	int getdia();
	int getmes();
	int getanio();
};