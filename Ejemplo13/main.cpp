#include <iostream>
#include "Persona.hpp"

using namespace std;

int main(int argc, char** argv)
{
    srand(time(NULL));

    Persona personas[10] = {
        Persona(18),
        Persona(19),
        Persona(20),
        Persona(21),
        Persona(22),
        Persona(23),
        Persona(24),
        Persona(25),
        Persona(26),
        Persona(27)
    };

    cout << "PERSONAS\n" << endl;
   
    for(int i = 0; i < 10; i++)
    {
        personas[i].mostrar();
        cout << endl;

    }

    return 0;
}