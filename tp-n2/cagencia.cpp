#include "cagencia.h"
#include "cestadia.h"
#include "cpasaje.h"
#include "cpaquete.h"

cagencia::cagencia(clista<creserva>* _listaReservas, clista<ccliente>* _listaClientes, clista<creserva>* _lista5dias)
{
	listaReservas = _listaReservas;
	listaClientes = _listaClientes;
	lista5dias = _lista5dias;
}

cagencia::~cagencia()
{
	for (int i = 0; i < listaReservas->getcantidad(); i++) {
		listaReservas->getLista()[i] = nullptr;
	}
	delete listaReservas;
	for (int j = 0; j < listaClientes->getcantidad(); j++) {
		listaClientes->getLista()[j] = nullptr;
	}
	delete listaClientes;
	for (int k = 0; k < lista5dias->getcantidad(); k++) {
		lista5dias->getLista()[k] = nullptr;
	}
	delete lista5dias;
}

clista<creserva> *cagencia::getlistaReservas()
{
	return listaReservas;
}

clista<ccliente>* cagencia::getlistaClientes()
{
	return listaClientes;
}

clista<creserva> *cagencia::getlista5dias()
{
	return lista5dias;
}

void cagencia::generarReserva(creserva *_reserva)
{
	cestadia* estadia_aux = dynamic_cast <cestadia*> (_reserva);
	if (estadia_aux != nullptr) {
		creserva* reserva = new cestadia(estadia_aux->getfechaReserva(), estadia_aux->getformaPago(), estadia_aux->getnumeroHabitaciones(), estadia_aux->getdias());
		cout<<"genero un pasaje"<<endl;
		estadia_aux->calcularPrecioT();
		cout << "precio total:" << estadia_aux->getprecioT();
		(*listaReservas) + _reserva;
	}
	cpasaje* pasaje_aux = dynamic_cast <cpasaje*> (_reserva);
	if (pasaje_aux != nullptr) {
		creserva* reserva = new cpasaje(pasaje_aux->getfechaReserva(), pasaje_aux->getformaPago(), pasaje_aux->getcantPasajeros(), pasaje_aux->gettipoAsiento());
		cout << "genero una estadia" << endl;
		pasaje_aux->calcularPrecioT();
		cout << "precio total:" << pasaje_aux->getprecioT();
		(*listaReservas) + _reserva;
	}
	cpaquete* paquete_aux = dynamic_cast <cpaquete*> (_reserva);
	if (paquete_aux != nullptr) {
		creserva* reserva = new cpaquete(paquete_aux->getfechaReserva(), paquete_aux->getformaPago(), paquete_aux->getpasaje(), paquete_aux->getestadia());
		cout << "genero un paquete" << endl;
		paquete_aux->calcularPrecioT();
		cout << "precio total:" << paquete_aux->getprecioT();
		(*listaReservas) + _reserva;

	}

}

void cagencia::menor5dias()
{
	for (int i = 0; i < listaReservas->getcantidad(); i++)
	{
		cestadia* estadia_aux = dynamic_cast <cestadia*> (listaReservas->getLista()[i]);
		if (estadia_aux != nullptr) {

		int dias;
    cout << "dia ingreso:" << estadia_aux->getfechaIngreso()->getdia()<< endl;//H
    
    cout << "mes ingreso:" << estadia_aux->getfechaIngreso()->getmes() << endl;//T
    
    cout << "dia salida:" << estadia_aux->getfechaSalida()->getdia() << endl;//D
    
    cout << "mes salida:" << estadia_aux->getfechaSalida()->getmes() << endl;//M
    
    dias = (estadia_aux->getfechaIngreso()->getdia() - estadia_aux->getfechaSalida()->getdia())
		+ (estadia_aux->getfechaIngreso()->getmes() * (30) - estadia_aux->getfechaSalida()->getmes() * (30));
    if (dias < 0)
    {
        dias = dias * (-1);
    }
    cout << "los dias son:" << dias;
	 if(dias<6)
	 {(*lista5dias)+(listaReservas->getLista()[i]);}
		}
		cpaquete* paquete_aux = dynamic_cast <cpaquete*> (listaReservas->getLista()[i]);
		if (paquete_aux != nullptr) {
		
			int dias;
			cout << "dia ingreso:" << paquete_aux->getestadia()->getfechaIngreso()->getdia() << endl;//H

			cout << "mes 1:" << paquete_aux->getestadia()->getfechaIngreso()->getmes() << endl;//T

			cout << "dia 2:" << paquete_aux->getestadia()->getfechaSalida()->getdia() << endl;//D

			cout << "mes 2:" << paquete_aux->getestadia()->getfechaSalida()->getmes() << endl;//M

			dias = (paquete_aux->getestadia()->getfechaIngreso()->getdia() - paquete_aux->getestadia()->getfechaSalida()->getdia())
				+ (paquete_aux->getestadia()->getfechaIngreso()->getmes() * (30) - paquete_aux->getestadia()->getfechaSalida()->getmes() * (30));
			if (dias < 0)
			{
				dias = dias * (-1);
			}
			cout << "los dias son:" << dias;
			 if(dias<6)
	         {(*lista5dias)+(listaReservas->getLista()[i]);}
		}
	}
}

void cagencia::clientes()
{
 for(int i=0;i<listaReservas->getcantidad();i++)
 {
    (*listaClientes)+(listaReservas->getLista()[i]->getcliente());
 }
}

void cagencia::gananciasTotales()
{
	float acum=0,acum_pas=0,acum_es=0,acum_paq=0;
	for (int i = 0; i < listaReservas->getcantidad(); i++)
	{
		acum = acum + listaReservas->getLista()[i]->getprecioT();

		cestadia* estadia_aux = dynamic_cast <cestadia*> (listaReservas->getLista()[i]);
		if (estadia_aux != nullptr) {
			acum_es = acum_es + listaReservas->getLista()[i]->getprecioT();
		}

		cpasaje* pasaje_aux = dynamic_cast <cpasaje*> (listaReservas->getLista()[i]);
		if (pasaje_aux != nullptr) {
			acum_pas = acum_pas + listaReservas->getLista()[i]->getprecioT();
		}

		cpaquete* paquete_aux = dynamic_cast <cpaquete*> (listaReservas->getLista()[i]);
		if (paquete_aux != nullptr) {
			acum_paq = acum_paq + listaReservas->getLista()[i]->getprecioT();
		}
	}

	cout << "las ganancias totales son:" << acum << endl;
	cout << "las ganancias totales de las estadias  son:" << acum_es << endl;
	cout << "las ganancias totales de los pasajes son:" << acum_pas << endl;
	cout << "las ganancias totales de los paquetes son:" << acum_paq << endl;
}


float cagencia::totalAdeudado()
{
	float deuda=0;
	for (int i = 0; i < listaReservas->getcantidad(); i++)
	{

		if (listaReservas->getLista()[i]->getabono() == false)
		{

			deuda = deuda + listaReservas->getLista()[i]->getprecioT();
		}

	}
	return deuda;
}

float cagencia::totalRecaudado()
{
	float recaudo = 0;
	for (int i = 0; i < listaReservas->getcantidad(); i++)
	{

		if (listaReservas->getLista()[i]->getabono() == true)
		{

			recaudo = recaudo + listaReservas->getLista()[i]->getprecioT();
		}

	}
	return recaudo;
}

float cagencia::aplicarDescuento()
{
	
	for (int i = 0; i < listaReservas->getcantidad(); i++)
	{
		int cont = 0, acum = 0;
		for(int k=0;i< listaReservas->getcantidad();k++){
			
			if (listaReservas->getLista()[i]->getcliente()->getnombre()== listaReservas->getLista()[k]->getcliente()->getnombre()) {
				cont++;
				acum = acum + listaReservas->getLista()[i]->getprecioT();
		}
		}
		if (cont < 3 && listaReservas->getLista()[i]->getprecioT() > 250000)
		{
			float aux = (listaReservas->getLista()[i]->getprecioT() * 95) / 100;
			return aux;
		}
		if (cont < 4 && listaReservas->getLista()[i]->getprecioT() > 500000)
		{
			float aux = (listaReservas->getLista()[i]->getprecioT() * 90) / 100;
			return aux;
		}
		if (cont < 5 && listaReservas->getLista()[i]->getprecioT() > 750000)
		{
			float aux = (listaReservas->getLista()[i]->getprecioT() * 85) / 100;
			return aux;
		}
	}
	
	
}