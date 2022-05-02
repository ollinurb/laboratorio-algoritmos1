#include "generador.h"
#include "vectores.h"

using namespace std;

int main() {
    holaModuloVectores(); // función definida en vectores.cpp
    vector<int> v0;
    v0.push_back(16);
    v0.push_back(4);
    v0.push_back(8);
    cout << "v0: " << v0[0] << " " << v0[1] << " " << v0[2] << endl;
    cout << v0[0] << v0[1] << v0[2] << endl;
    int a = 2;
    cout << "ejercicio 1: " << (divide(v0,a) ? "True" : "False") << endl;
    cout << "ejercicio 2: " << mayor(v0) << endl;
    cout << "ejercicio 3: " << reverso(v0)[0] << " " << reverso(v0)[1] << " " << reverso(v0)[2] << endl;
    cout << "ejercicio 4: " << rotar(v0,2)[0] << " " << rotar(v0,2)[1] << " " << rotar(v0,2)[2] << endl;
    cout << "ejercicio 5: " << (estaOrdenado(v0) ? "True" : "False") << endl;
    int n;
    cin >> n;
    cout << "ejercicio 6: "; mostrarVector(factoresPrimos(n)); cout << endl;
    cout << "ejercicio 7: "; mostrarVector(v0);
    return 0;
}
