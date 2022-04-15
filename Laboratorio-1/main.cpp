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

int funcionEsPrimo(int a) {
    std::cout << "Ingresar numero para verificar si es primo:" << std::endl;
    std::cin >> a;
    std::cout << (  esPrimo(a) ? "El número es primo." : "El número no es primo")<< std::endl;

}

int fibonacciRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else
        return fibonacciRecursiva(n - 1) + fibonacciRecursiva(n - 2);
    }

int funcionFibonacciRecursiva (int n) {
    std::cout << "Pedir número de Fibonacci" << std::endl;
    std::cin >> n;
    std::cout << fibonacciRecursiva(n) << std::endl;
}
// 0 1 1 2 3 5 8 13 21 34 55 ...
int fibonacciIterativa (int n) {
    int f0 = 0;
    int f1 = 1;
    int i = n;
    int sum = 0;
    while (i > 1) {
        i = i - 1;
        sum = f0 + f1;
        f0 = f1;
        f1 = sum;
    }
    return f1;
}

int funcionFibonacciIterativa(int n) {
    std::cout << "Pedir numero de Fibonacci" << std::endl;
    std::cin >> n;
    std::cout << fibonacciIterativa(n) << std::endl;

}
int sumaImparesMenoresRecursiva(int n) {
    if (n == 1) {
        return 0;
    }
    //else if (n == 2) {
    //    return 1;
    //}
    else if (n  % 2 == 0) {
        return sumaImparesMenoresRecursiva(n - 1) + (n-1);
    } else {
        return sumaImparesMenoresRecursiva(n-2 ) + (n-2);
    }
}

int funcionSumaImparesMenoresRecursiva(int n){
    std::cout<< "Dame un numero para que te sume todos los impares menores al mismo" << std::endl;
    std::cin>> n;
    std::cout<< sumaImparesMenoresRecursiva(n) << std::endl;
}

int main() {
    int a;
    funcionSumaImparesMenoresRecursiva(a);
    return 0;
}
