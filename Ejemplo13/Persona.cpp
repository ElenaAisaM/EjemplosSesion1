#include <iostream>
#include "Persona.hpp"

using namespace std;

Persona::Persona(int edad)
{
    this->edad = edad;

    genero = rand() % 2;

    int numero = rand() % 100000000;

    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";

    sprintf(dni, "%08d%c", numero, letras[numero % 23]);
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
    return edad;
}

bool Persona::esMujer()
{
    return genero;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

void Persona::mostrar()
{
    cout << "DNI: " << dni << endl;
    cout << "Edad: " << edad << endl;

    if(genero)
        cout << "Genero: Mujer" << endl;
    else
        cout << "Genero: Hombre" << endl;
}