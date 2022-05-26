/*
  Nombre: Alcancia.cpp
  Autor: Grupo IPOO
  Fecha Creacion: septiembre 02 de 2014
  Fecha Modificación: septiembre 02 de 2014
  Versión : 1.0
  Email: alaponte@gmail.com
*/

#include "Alcancia.h"

Alcancia::Alcancia()
{
    numeroMonedas20 = 0;
    numeroMonedas50 = 0;
    numeroMonedas100 = 0;
    numeroMonedas200 = 0;
    numeroMonedas500 = 0;
    rota = false;
}

Alcancia::~Alcancia()
{
    //dtor
}


int Alcancia::darMoneda20()
{

    return numeroMonedas20;
}

int Alcancia::darMoneda50()
{
    return numeroMonedas50;
}

int Alcancia::darMoneda100()
{
    return numeroMonedas100;
}

int Alcancia::darMoneda200()
{
    return numeroMonedas200;
}

int Alcancia::darMoneda500()
{
    return numeroMonedas500;
}

void Alcancia::agregarMoneda20()
{
    if(rota == false)
        numeroMonedas20 = numeroMonedas20 + 1;
}

void Alcancia::agregarMoneda50()
{
    if(rota == false)
        numeroMonedas50 = numeroMonedas50 + 1;
}

void Alcancia::agregarMoneda100()
{
    if(rota == false)
        numeroMonedas100 = numeroMonedas100 + 1;
}

void Alcancia::agregarMoneda200()
{
    if(rota == false)
        numeroMonedas200 = numeroMonedas200 + 1;
}

void Alcancia::agregarMoneda500()
{
    if(rota == false)
        numeroMonedas500 = numeroMonedas500 + 1;
}

int Alcancia::darTotalDinero(){
    int total=0;
    total = numeroMonedas20*20 + numeroMonedas50*50
     + numeroMonedas100*100 + numeroMonedas200 * 200
     + numeroMonedas500*500;
    return total;
}

bool Alcancia::estaRota()
{
    return rota;
}

void Alcancia::romperAlcancia()
{
    if(!estaRota())
    {
        rota = true;
        numeroMonedas20 = 0;
        numeroMonedas50 = 0;
        numeroMonedas100 = 0;
        numeroMonedas200 = 0;
        numeroMonedas500 = 0;
    }

}









