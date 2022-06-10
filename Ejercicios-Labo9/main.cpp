#include "ejercicios.h"
#include "iostream"

using namespace std;

int main() {
    float power = 2;  float hasta = 6;
     //ofstream fout;
    //fout.open("datos.csv");

    //fout << "n\t" << "tiempo" <<endl;
    cout << "O(n)" << endl;
    power = 2;
    while (power < hasta){
        float n = pow(10, power);
        vector<int> v = construir_vector(n, "azar");

        double t0 = clock();
        for (int i = 0; i < v.size(); ++i) {
            int a = 3;
            int b = 4;
            int c = a + b;
        }
        double tf = clock();
        double tiempon3 = (double(tf - t0) / CLOCKS_PER_SEC);
        power++;
        cout << "\n" << "n=" << n << "\t" << tiempon3 << endl;

    }
    cout << "O(n2)" << endl;
    power = 2;
    while (power < hasta) {
        float n = pow(10, power);
        vector<int> v = construir_vector(n, "azar");
        double t0 = clock();
        hayDuplicados(v);
        double tf = clock();
        double tiempon2 = (double(tf - t0) / CLOCKS_PER_SEC);

        //fout << n << "\t" << tiempon2 << endl;
        power++;
        cout << "\n" << "n=" << n << "\t" << tiempon2 << endl;
    }
    //fout.close();
}