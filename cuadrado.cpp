/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Dibujando un cuadrado en C++ con asteriscos.
*/

#include <iostream.h>
#include <conio.h>

class Cuadrado
{
    //Atributos
    private:
        int fila, columna; 

    //Métodos
     public: 
        draw();
}

int main()
{
    //Creación de objeto
    Cuadrado micuadrado;

    cout<< "Ingrese el numero de filas";
    cin>>micuadrado.fila;

    cout<< "Ingrese el numero de columnas";
    cin>>micuadrado.columna;
    
    for(int i = 0; i<micuadrado.fila; i++)
    {
        for(int j = 0; j<micuadrado.columna; j++)
        {
            cout<<"*";
            micuadrado.draw();
        }
    }
    
}