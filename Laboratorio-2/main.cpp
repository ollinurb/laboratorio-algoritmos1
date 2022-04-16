#include <iostream>

void cambiarValor(int x) {
    x = 15;
}

int calificaciones(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10) {
    int sum = 0;
    std::cout << "Agregar calificaciones" << std::endl;
    std::cout << "Calificacion 1:" << std::endl;
    std::cin >> n1;
    sum = sum + n1;
    std::cout << "Calificacion 2:" << std::endl;
    std::cin >> n2;
    sum = sum + n2;
    std::cout << "Calificacion 3:" << std::endl;
    std::cin >> n3;
    sum = sum + n3;
    std::cout << "Calificacion 4:" << std::endl;
    std::cin >> n4;
    sum = sum + n4;
    std::cout << "Calificacion 5:" << std::endl;
    std::cin >> n5;
    sum = sum + n5;
    std::cout << "Calificacion 6:" << std::endl;
    std::cin >> n6;
    sum = sum + n6;
    std::cout << "Calificacion 7:" << std::endl;
    std::cin >> n7;
    sum = sum + n7;
    std::cout << "Calificacion 8:" << std::endl;
    std::cin >> n8;
    sum = sum + n8;
    std::cout << "Calificacion 9:" << std::endl;
    std::cin >> n9;
    sum = sum + n9;
    std::cout << "Calificacion 10:" << std::endl;
    std::cin >> n10;
    sum = sum + n10;
    std::cout << "Suma de calificacoines: " << sum << std::endl;
    std::cout << "Promedio de calificaciones " << sum / 10 << std::endl;
}
int calificacionesCentinela (int &i, int &sum, int &aprobados, int &reprobados) {
    sum = 0;
    int n1;
    i = 0;
    aprobados = 0;
    reprobados = 0;
    while (n1 >= 0) {
        std::cout << "Agregar nota (-1 para terminar):" << std::endl;
        std::cin >> n1;
        sum = sum + n1;
        i = i + 1;
        if (n1 >= 6) {
            aprobados = aprobados + 1;
        }
        else {
            reprobados = reprobados + 1;
        }
    }
}

int main() {
    try {
        int cantidadNotas;
        int sumaNotas;
        int aprobados;
        int reprobados;
        calificacionesCentinela(cantidadNotas, sumaNotas, aprobados, reprobados);
        if (cantidadNotas > 6) {
            std::cout << "Suma de las notas: " << sumaNotas + 1 << std::endl;
            std::cout << "Promedio de las notas: " << (sumaNotas + 1) / (cantidadNotas - 1) << std::endl;
            std::cout << "Cantidad de las notas: " << (cantidadNotas - 1) << std::endl;
            std::cout << "Aprobados: " << aprobados << std::endl;
            std::cout << "Reprobados: " << reprobados - 1 << std::endl;
        } else {
            throw (cantidadNotas);
        }
    }
    catch (int myNum) {
        std::cout << "Error: Deben ingresarse al menos 6 notas" << std::endl;
        std::cout << "Notas ingresadas: " << myNum - 1 << std::endl;
    }
    return 0;
}
