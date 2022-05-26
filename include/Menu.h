/*
  Nombre: Menu.h
  Autor: Grupo IPOO
  Fecha Creacion: septiembre 02 de 2014
  Fecha Modificación: septiembre 02 de 2014
  Versión : 1.0
  Email: alaponte@gmail.com
*/

/*
    Clase: Menu
    Responsabilidad:
    - Visualizar los diferentes servicios que ofrece el modelo, en este caso la alcancía
    - Permitir al usuario seleccionar las opciones de sercivios que ofrece el modelo.
    Colaboracion:  alcancia
*/

#include <iostream>
#include <alcancia.h>

using namespace std;

#ifndef MENU_H
#define MENU_H


class Menu
{
    public:
        Menu();
        void seleccionarOpcion();
        void visualizar();
        void mostrarEstadoAlcancia();

        virtual ~Menu();
    protected:
    private:
        int opcion;
        Alcancia marranito;
};

#endif // MENU_H
