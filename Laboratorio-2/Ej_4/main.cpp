#include <iostream>
#include <math.h>

int binarioADecimal (int binario) {
    int sumaDigitos = 0;
    int i = 0;
    int seleccionadorDig = 0;
    while (seleccionadorDig < binario) {
        seleccionadorDig = pow(10, i);
        int multiplicadorDig = pow(2,i);
        sumaDigitos = sumaDigitos + (((binario/seleccionadorDig)%10)*multiplicadorDig);
        i++;
    } return sumaDigitos;
}

int main() {
    std::cout << "Introducir numero binario: " << std::endl;
    int binario = 0;
    std::cin >> binario;
    binarioADecimal(binario);
    std::cout << "El número binario " << binario << " representa al número decimal " << binarioADecimal(binario) << std::endl;
    return 0;
}
