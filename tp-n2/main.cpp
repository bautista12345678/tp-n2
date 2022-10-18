#include <iostream>
#include <string>
#include "ccliente.h"
#include "cpasaje.h"
#include "cestadia.h"
#include "cpaquete.h"
using namespace std;
int main()
{
    

    Fecha* fecha1 = new Fecha(12, 7, 2022);
    Fecha* fecha2 = new Fecha(22, 7, 2022);
    Fecha* fecha3 = new Fecha(2, 7, 2022);

    cvuelo* vuelo1 = new cvuelo();
    cvuelo* vuelo2 = new cvuelo();
    cvuelo* vuelo3 = new cvuelo();
    cvuelo* vuelo4 = new cvuelo();
    cvuelo* vuelo5 = new cvuelo();
    cvuelo* vuelo6 = new cvuelo();
    cvuelo* vuelo7 = new cvuelo();
    cvuelo* vuelo8 = new cvuelo();

    clista<cvuelo>* ListaVuelos1 = new clista<cvuelo>(10);
    clista<cvuelo>* ListaVuelos2 = new clista<cvuelo>(10);
    clista<cvuelo>* ListaVuelos3 = new clista<cvuelo>(10);
    clista<cvuelo>* ListaVuelos4 = new clista<cvuelo>(10);

    (*ListaVuelos1) + (vuelo1);
    (*ListaVuelos1) + (vuelo2);

    (*ListaVuelos2) + (vuelo3);
    (*ListaVuelos2) + (vuelo4);

    (*ListaVuelos3) + (vuelo5);
    (*ListaVuelos3) + (vuelo6);

    (*ListaVuelos4) + (vuelo7);
    (*ListaVuelos4) + (vuelo8);


   

    ccliente* cliente1 = new ccliente();
    ccliente* cliente2 = new ccliente();
    ccliente* cliente3 = new ccliente();

    creserva* reserva1= new cpasaje(fecha1, EnumFormaDePago::CONTADO, 2,EnumTipoDeAsiento::Business, ListaVuelos1);
    reserva1->setcliente(cliente1);
   // reserva1->setlistaVuelos();
    creserva* reserva2 = new cestadia(fecha2, EnumFormaDePago::CUOTAS, 2, 5);
    reserva2->setcliente(cliente2);
    creserva* reserva3 = new cpasaje(fecha3, EnumFormaDePago::TARJETA, 1, EnumTipoDeAsiento::PrimeraClase, ListaVuelos2);
    reserva3->setcliente(cliente3);
    creserva* reserva4 = new cpasaje(fecha1, EnumFormaDePago::CONTADO, 2, EnumTipoDeAsiento::Business, ListaVuelos3);
    reserva1->setcliente(cliente1);
    creserva* reserva5 = new cestadia(fecha2, EnumFormaDePago::CUOTAS, 3,7);
    reserva2->setcliente(cliente2);
   
    clista<creserva>* ListaReservas = new clista<creserva>(10);
    clista<ccliente>* ListaClientes = new clista<ccliente>(10);
    clista<creserva>* Lista5dias = new clista<creserva>(10);



    cagencia* agencia1 = new cagencia(ListaReservas, ListaClientes, Lista5dias);
    /*creserva* reserva6 = new cpasaje(fecha2, EnumFormaDePago::CUOTAS, 3, EnumTipoDeAsiento::Economy);
    creserva* reserva7 = new cestadia(fecha2, EnumFormaDePago::CUOTAS, 3, 7);
   creserva* reserva3 = new cpaquete(fecha3, EnumFormaDePago::TARJETA,reserva6,reserva7);
   reserva3->setcliente(cliente3);*/
   



    float precioreserva1=reserva1->calcularPrecioT()-agencia1->aplicarDescuento();
    agencia1->generarReserva(reserva1);
    agencia1-> menor5dias();
    agencia1->clientes();
    float gananciasTotales=agencia1->gananciasTotales();
    float totalAdeudado=agencia1->totalAdeudado();
   float totalRecaudado= agencia1->totalRecaudado();










    delete agencia1;

    delete fecha1;
    delete fecha2;
    delete fecha3;

    delete vuelo1;
    delete vuelo2;
    delete vuelo3;
    delete vuelo4;
    delete vuelo5;
    delete vuelo6;
    delete vuelo7;
    delete vuelo8;

    delete ListaVuelos1;
    delete ListaVuelos2;
    delete ListaVuelos3;
    delete ListaVuelos4;

    delete cliente1;
    delete cliente2;
    delete cliente3;

    delete reserva1;
    delete reserva2;
    delete reserva3;
    delete reserva4;
    delete reserva5;

    delete ListaReservas;
    delete ListaClientes;
    delete Lista5dias;
    return 0;
}
