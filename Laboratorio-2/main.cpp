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
int calificacionesCentinela (int &i, int &sum) {
    sum = 0;
    int n1;
    i = 0;
    while (n1 >= 0) {
        std::cout << "Agregar nota (-1 para terminar):" << std::endl;
        std::cin >> n1;
        sum = sum + n1;
        i = i + 1;
}
}

int main() {
    int n;
    int a;
    calificacionesCentinela(n, a);
    std::cout << "Suma de las notas: "<< a+1 << std::endl;
    std::cout << "Promedio de las notas: " << (a+1)/(n-1) << std::endl;
    std::cout << "Cantidad de las notas: " << (n-1) << std::endl;
    return 0;
}
