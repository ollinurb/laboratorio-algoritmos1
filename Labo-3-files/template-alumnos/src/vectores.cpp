#include "vectores.h"

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
	int i = 0;
    bool res = true;
    while (i < v.size()){
        if (!res) {
            return res;
        } else {
            res = v[i] % a == 0;
            i++;
        }
    } return res;
}

//Ejercicio
int mayor(vector<int> v){
    int i = 0;
    int mayor = v[i];
    while (i < v.size()){
        if (v[i] > mayor) {
            mayor = v[i];
            i++;
        } else {
            i++;
        }
    } return mayor;

	// Dado un vector v, devuelve el valor maximo encontrado.
}

//Ejercicio
vector<int> reverso(vector<int> v){
    int i = v.size();
    vector<int> vectorReverso;
    while (i > 0){
        vectorReverso.push_back(v[i-1]);
        i = i - 1;
    }
    return vectorReverso;
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
	// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
	// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
    vector<int> vectorRotado;
    int i = 0;
    while (k < v.size()) {
        vectorRotado.push_back(v[k]);
        k++;
    }
    while (i - k) {
        vectorRotado.push_back(v[i]);
        i++;
    }
    return vectorRotado;
}

bool estaOrdenado(vector<int> v) {
    bool res = true;
    int i = 0;
    while (i < v.size() - 1) {
        if (!res) {
            return res;
        }
        else {
        res = v[i] < v[i+1];
        i++;
            }
    } return res;
}

//Ejercicio

bool esPrimo(int n){
    bool res = true;
    int i = 2;
    int divisores = 0;
    while (i<n) {
        if (n % i == 0) {
            divisores++;
            i++;
        }
        else {
            i++;
        }
    } return divisores == 0;
}


vector<int> factoresPrimos(int n){
    vector<int> nFactorizado;
    for(int i = 2; i < n; i++){
        if (esPrimo(i) && n % i == 0) {
            nFactorizado.push_back(i);
        }
        else {
        }
    } return nFactorizado;
}

//Ejercicio
void mostrarVector(vector<int> v){
    for (int i = 0; i < v.size(); i++) {cout << v[i] << " " ;}
    }
