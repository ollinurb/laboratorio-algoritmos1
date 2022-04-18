#include <iostream>

float triplicarPorValor(float valor){
    return 3*valor;
}

float triplicarPorReferencia(float &ref){
    ref = 3*ref;
}

int main() {
    float cuenta = 0;
    std::cout << "Ingresar numero:" << std::endl;
    std::cin >> cuenta;
    std::cout << triplicarPorValor(cuenta) << std::endl;
    triplicarPorReferencia(cuenta);
    std::cout << cuenta << std::endl;
    return 0;
}
