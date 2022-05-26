/*
  Nombre: Alcancia.h
  Autor: Grupo IPOO
  Fecha Creacion: septiembre 02 de 2014
  Fecha Modificaci�n: septiembre 02 de 2014
  Versi�n : 1.0
  Email: alaponte@gmail.com
*/

/*
   Clase: Alcancia
   Responsabilidad:
    - Agregar monedas de diferentes denominaciones: $20, $50, $100, $200 y $500 unicamente.
    - Informar cu�ntas monedas hay de cada denominaci�n
    - Calcular el total de dinero ahorrado
    - Romper la alcanc�a despues de conocer el total ahorrado.
   Colaboraci�n: ninguna
*/

// Lo siguiente es una guarda. Es obligatorio ponerla en todo archivo.h
// La guarda evita que el archivo sea incluido mas de una vez en la implementacion.
// Para que funcione bien, la etiqueta (en este caso ALCANCIA_H)
// Debe ser �nica, o sea, no estar repetida en ningun otro archivo del proyecto.
//  - El compilador solo compila lo que hay entre las directivas
//    #ifndef ETIQUETA y #endif si la ETIQUETA no existe.
//  - La directiva #define ETIQUETA cree una nueva ETIQUETA

#ifndef ALCANCIA_H
#define ALCANCIA_H

class Alcancia
{
    public:
        Alcancia();
        ~Alcancia();
        void agregarMoneda20();
        void agregarMoneda50();
        void agregarMoneda100();
        void agregarMoneda200();
        void agregarMoneda500();
        int darMoneda20();
        int darMoneda50();
        int darMoneda100();
        int darMoneda200();
        int darMoneda500();
        int darTotalDinero();
        bool estaRota();
        void romperAlcancia();
    protected:
    private:
        int numeroMonedas20;
        int numeroMonedas50;
        int numeroMonedas100;
        int numeroMonedas200;
        int numeroMonedas500;
        bool rota;
};

#endif // ALCANCIA_H
