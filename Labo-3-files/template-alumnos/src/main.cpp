#include "generador.h"
#include "vectores.h"

using namespace std;

int main() {
    // funcion para generar automaticamente los archivos numericos
    // generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    holaModuloVectores(); // función definida en vectores.cpp
    vector<int> v0;
    v0.push_back(4);
    v0.push_back(8);
    v0.push_back(2);
    v0.push_back(16);
    int divisor = 2;
    std::cout << divide(v0, divisor) << std::endl;
    return 0;
}
