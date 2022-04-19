#include <iostream>

void collatz(int n, int& cantPasos) {
    cantPasos = 0;
    while (n != 1){
        if (n % 2 == 0) {
           n = n / 2;
           cantPasos++;
      } else if (n % 2 == 1) {
            n = n*3 + 1;
            cantPasos++;
        }
    }
}

int main() {
    int n = 0;
    int pasos = 0;
    std::cout << "Secuencia de Collatz. Ingrese numero para saber cuantos pasos se requieren para llegar a 1." << std::endl;
    std::cin >> n;
    collatz(n, pasos);
    std::cout << "Se requieren: "<< pasos << " pasos." << std::endl;
    return 0;
}
