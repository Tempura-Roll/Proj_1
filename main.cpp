#include "CAlumno.h"

int main() {
    CAlumno alumno1("Juan Perez", 20);
    alumno1.setCalificacion(90);
    alumno1.mostrarInformacion();
    alumno1.mostrarCalificacion();

    return 0;
}