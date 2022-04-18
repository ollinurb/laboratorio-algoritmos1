#include <iostream>

float circulo(float radio) {
    float pi = 3.14159;
    float diametro = 2*radio;
    float circunferencia = pi*diametro;
    float area = pi*radio*radio;
    std::cout << "El diámetro del círculo es: " << diametro << std::endl;
    std::cout << "La circunferencia del círculo es: " << circunferencia << std::endl;
    std::cout << "El area del círculo es: " << area << std::endl;
}

int main() {
    float radio = 0;
    std::cout << "Introducir radio de circulo para recibir diametro, circunferencia y area: " << std::endl;
    std::cin >> radio;
    circulo(radio);
    return 0;
}
