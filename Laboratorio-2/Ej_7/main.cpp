#include <iostream>

void swap (int &aref, int &bref){
    int a = aref;
    int b = bref;
    aref = b;
    bref = a;
}

int main() {
    int a = 0;
    int b = 0;
    std::cout << "a:" << std::endl;
    std::cin >> a;
    std::cout << "b:" << std::endl;
    std::cin >> b;
    swap(a,b);
    std::cout << "a: " << a << "// b: " << b << std::endl;
    return 0;
}
