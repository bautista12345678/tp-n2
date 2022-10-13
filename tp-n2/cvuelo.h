#pragma once
#include <iostream>
#include <string>
using namespace std;
class cvuelo
{
private:
	static int numeroDeVuelo;
	string fechaPartida;
	string horaPartida;
	string fechaLlegada;
	string horaLlegada;
	string origen;
	string destino;
	float precio;
public:
	cvuelo();
	~cvuelo();
	int getnumeroDeVuelo();
	void setfechaPartida(string _fechaPartida);
	string getfechaPartida();
	void sethoraPartida(string _horaPartida);
	string gethoraPartida();
	void setfechaLlegada(string _fechaLlegada);
	string getfechaLlegada();
	void sethoraLlegada(string _horaLlegada);
	string gethoraLlegada();
	void setorigen(string _origen);
	string getorigen();
	void setdestino(string _destino);
	string getdestino();
	void setprecio(float _precio);
	float getprecio();
	string to_string();
	void imprimir();

};

