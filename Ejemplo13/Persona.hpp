class Persona
{
private:
    bool genero;
    int edad;
    char dni[10];

public:
    Persona(int edad);
    ~Persona();

    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
};