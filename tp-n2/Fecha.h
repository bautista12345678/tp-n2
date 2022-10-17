#pragma once
class Fecha
{
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha();
	~Fecha();
	void setdia(int _dia);
	void setmes(int _mes);
	void setanio(int _anio);
	int getdia();
	int getmes();
	int getanio();
};