#include "cvuelo.h"
#include <sstream>
int cvuelo::numeroDeVuelo = 0;
cvuelo::cvuelo()
{
	numeroDeVuelo = numeroDeVuelo + 1;
}

cvuelo::~cvuelo()
{
}

int cvuelo::getnumeroDeVuelo()
{
	return numeroDeVuelo;
}

void cvuelo::setfechaPartida(string _fechaPartida)
{
	fechaPartida = _fechaPartida;
}

string cvuelo::getfechaPartida()
{
	return fechaPartida;
}

void cvuelo::sethoraPartida(string _horaPartida)
{
	horaPartida = _horaPartida;
}

string cvuelo::gethoraPartida()
{
	return horaPartida;
		
}

void cvuelo::setfechaLlegada(string _fechaLlegada)
{
	fechaLlegada = _fechaLlegada;
}

string cvuelo::getfechaLlegada()
{
	return fechaLlegada;
}

void cvuelo::sethoraLlegada(string _horaLlegada)
{
	horaLlegada = _horaLlegada;
}

string cvuelo::gethoraLlegada()
{
	return horaLlegada;
}

void cvuelo::setorigen(string _origen)
{
	origen = _origen;
}

string cvuelo::getorigen()
{
	return origen;
}

void cvuelo::setdestino(string _destino)
{
	destino = _destino;
}

string cvuelo::getdestino()
{
	return destino;
}

void cvuelo::setprecio(float _precio)
{
	precio = _precio;
}

float cvuelo::getprecio()
{
	return precio;
}

string cvuelo::to_string()
{
	stringstream ss;
	ss << "Numero de vuelo: " << numeroDeVuelo << endl;
	ss << "fecha de partida: " << fechaPartida << endl;
	ss << "hora de partida: " << horaPartida << endl;
	ss << "fecha de llegada: " << fechaLlegada << endl;
	ss << "fecha de llegada: " << horaLlegada << endl;
	ss << "origen: " << origen << endl;
	ss << "destino: " << destino << endl;
	ss << "precio: " << precio << endl;
	return ss.str();
}

void cvuelo::imprimir()
{
	cout << to_string() << endl;
}
