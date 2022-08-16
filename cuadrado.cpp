/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Dibujado de un cuadrado en C++.
*/

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