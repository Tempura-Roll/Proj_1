#include <iostream>
#include <string>

class CAlumno{
    private:
    std::string nombre;
    int edad;
    int calificacion;

    public:
    CAlumno(std::string nombre, int edad){
        this->nombre = nombre;
        this->edad = edad;
    }

    void setCalificacion(int calificacion){
        this->calificacion = calificacion;
    }

    void mostrarInformacion(){
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Calificacion: " << calificacion << std::endl;
    }
    void mostrarCalificacion();
};