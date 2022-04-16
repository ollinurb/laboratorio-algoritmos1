#include <iostream>

void cambiarValor(int x) {
    x = 15;
}

int calificaciones(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10) {
    std::cout << "Agregar calificaciones" << std::endl;
    std::cout << "Calificacion 1:" << std::endl;
    std::cin >> n1;
    std::cout << "Calificacion 2:" << std::endl;
    std::cin >> n2;
    std::cout << "Calificacion 3:" << std::endl;
    std::cin >> n3;
    std::cout << "Calificacion 4:" << std::endl;
    std::cin >> n4;
    std::cout << "Calificacion 5:" << std::endl;
    std::cin >> n5;
    std::cout << "Calificacion 6:" << std::endl;
    std::cin >> n6;
    std::cout << "Calificacion 7:" << std::endl;
    std::cin >> n7;
    std::cout << "Calificacion 8:" << std::endl;
    std::cin >> n8;
    std::cout << "Calificacion 9:" << std::endl;
    std::cin >> n9;
    std::cout << "Calificacion 10:" << std::endl;
    std::cin >> n10;
    std::cout << "Suma de calificacoines: " << n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 << std::endl;
    std::cout << "Promedio de calificaciones " << (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10 << std::endl;
}

int main() {
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;
    int n10;
    calificaciones(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
return 0;
}
