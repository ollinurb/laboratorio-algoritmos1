#include <iostream>

int f(int x, int y){
    if (x > y) {
        return x+y;
    } else {
        return x*y;
    }
}

bool esPrimo(int n) {
    int divisores = 0;
    for (int i = 2; i < n; i = i + 1) {
        if (n % i == 0) {
            divisores = divisores + 1;
        } else {}
    }
    if (divisores == 0) { return true; }
    else { return false; }
}


int main() {
    std::cout << (  esPrimo(5) ? "true" : "false")<< std::endl;
    std::cout << "resto: " << 4 % 2 << std::endl;
    return 0;
}
