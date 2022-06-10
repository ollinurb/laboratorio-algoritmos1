#include "ejercicios.h"
#include "iostream"

using namespace std;

int main() {
    int n = 100; int hasta = 1000; int paso = 10;
     ofstream fout;
    fout.open("datos.csv");

    fout << "n\t" << "tiempo" <<endl;

    while (n < hasta) {
        vector<int> v = construir_vector(n, "azar");
        double t0 = clock();
        hayDuplicados(v);
        double tf = clock();

        double tiempon2 = (double(tf - t0) / CLOCKS_PER_SEC);

        fout << n << "\t" << tiempon2 << endl;
        n += paso;
        cout << n << "\t" << tiempon2 << endl;
    }
    fout.close();
}