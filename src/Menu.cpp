/*
  Nombre: Menu.cpp
  Autor: Grupo IPOO
  Fecha Creacion: septiembre 02 de 2014
  Fecha Modificación: septiembre 02 de 2014
  Versión : 1.0
  Email: alaponte@gmail.com
*/

#include "Menu.h"

Menu::Menu()
{
    opcion = 0;
}

Menu::~Menu()
{
    //dtor
}

void Menu::seleccionarOpcion()
{
    cout << endl;
    cout << "1. - Agregar Moneda 20" << endl;
    cout << "2. - Agregar Moneda 50" << endl;
    cout << "3. - Agregar Moneda 100" << endl;
    cout << "4. - Agregar Moneda 200" << endl;
    cout << "5. - Agregar Moneda 500" << endl;
    cout << "6. - Consultar cuántas monedas hay de cada denominación" << endl;
    cout << "7. - Calcular el total del dinero ahorrado" << endl;
    cout << "8. - Romper la alcancia" << endl;
    cout << "9. - Crear nueva alcancía" << endl;
    cout << "10. - Salir" << endl;
    do{
        cout << "Introduzca Opción: ";
        cin >> opcion;
    }while (!((opcion>=1) && (opcion <=10)));
}

void Menu::visualizar()
{
    do{
        seleccionarOpcion();
        switch(opcion){
        case 1:
            marranito.agregarMoneda20();
            cout << "Se agrego una moneda 20" << endl;
            break;
        case 2:
            marranito.agregarMoneda50();
            cout << "Se agrego una moneda 50" << endl;
            break;
        case 3:
            marranito.agregarMoneda100();
            cout << "Se agrego una moneda 100" << endl;
            break;
        case 4:
            marranito.agregarMoneda200();
            cout << "Se agrego una moneda 200" << endl;
            break;
        case 5:
            marranito.agregarMoneda500();
            cout << "Se agrego una moneda 500" << endl;
            break;
        case 6:
            cout << "Mostrar la cantidad de monedas de cada denominación" << endl;
            mostrarEstadoAlcancia();

            break;
        case 7:
            cout << "Mostrar el total del dinero ahorrado" << endl;
            cout << "Total dinero ahorrado = " << marranito.darTotalDinero() << endl;
            break;
        case 8:
            cout << "Romper la alcancia" << endl;
            marranito.romperAlcancia();
            break;
        case 9:
            cout << "Crear una nueva alcancia" << endl;
            break;
            }
    }while (opcion != 10);
}

void Menu::mostrarEstadoAlcancia()
{
    cout << "Monedas 20 = " << marranito.darMoneda20() << endl;
    cout << "Monedas 50 = " << marranito.darMoneda50() << endl;
    cout << "Monedas 100 = " << marranito.darMoneda100() << endl;
    cout << "Monedas 200 = " << marranito.darMoneda200() << endl;
    cout << "Monedas 500 = " << marranito.darMoneda500() << endl;
    //cout << "Rota = " << endl;
    //cout << "Total de dinero = " << endl;
}

