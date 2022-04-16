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

int sumaImparesMenoresIterativa(int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
        } else {
    }
    } return sum;
}

int funcionSumaImparesMenoresIterativa(int n){
    std::cout<< "Dame un numero para que te sume todos los impares menores al mismo" << std::endl;
    std::cin>> n;
    std::cout<< sumaImparesMenoresIterativa(n) << std::endl;
}

int sumaDivisoresIterativa (int n) {

    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum = sum + i;
        } else {}
        } return sum;
    }

    int funcionSumaDivisoresIterativa(int) {
    int n;
        std::cout << "Dame un num entero para que te sume sus divisores" << std::endl;
        std::cin>> n;
        std:: cout << "Resultado: " << sumaDivisoresIterativa(n) << std::endl;
}

int combinatorio (int n, int k) {
    if (n == k) {
        return 1;
    } else if (k == 0) {
        return 1;
    } else {
        return combinatorio(n-1, k) + combinatorio(n-1, k-1);
    }
}

int funcionCombinatorio (int n, int k) {
    std::cout << "Para el combinatorio (n k), dar primero el valor de n y luego el valor de k" << std::endl;
    std::cin >> n;
    std::cin >> k;
    std::cout << combinatorio(n,k) << std::endl;
}

int main() {
    int a;
    int b;
    funcionCombinatorio(a,b);
    return 0;
}
